import os
import numpy as np
import cv2


# 坐标转换
def xywh2xyxy(x, w1, h1, img):
    label, x, y, w, h = x

    x_t = x * w1
    y_t = y * h1
    w_t = w * w1
    h_t = h * h1

    top_left_x = x_t - w_t / 2
    top_left_y = y_t - h_t / 2
    bottom_right_x = x_t + w_t / 2
    bottom_right_y = y_t + h_t / 2

    # 绘制矩形框
    cv2.rectangle(img, (int(top_left_x), int(top_left_y)), (int(bottom_right_x), int(bottom_right_y)), colormap[1], 2)

    return img


def show_bb(x, w1, h1, img):
    label, x1, y1, x2, y2 = x
    if x1 > w1 or x2 > w1 or y1 > h1 or y2 > h1:
        print("wrong!")
    # cv2.rectangle(img, (int(x1), int(y1)), (int(x2), int(y2)), colormap[1], 2)
    cv2.line(img, (int(x1), int(y1)), (int(x2), int(y2)), colormap[1], 2)
    return img


def xyxy2xywh(x, w, h):
    label = x[0]
    x1 = min(x[1], x[3])
    x2 = max(x[1], x[3])
    y1 = min(x[2], x[4])
    y2 = max(x[2], x[4])

    dw = 1. / w
    dh = 1. / h
    x0 = (x1 + x2) / 2.0
    y0 = (y1 + y2) / 2.0
    w0 = x2 - x1
    h0 = y2 - y1

    x1 = x0 * dw
    y1 = y0 * dh
    w1 = w0 * dw
    h1 = h0 * dh
    return label, x1, y1, w1, h1


if __name__ == '__main__':
    # 修改输入图片文件夹
    root = r"E:/Programing/cv_dataset/Stair_dataset/"
    img_folder = root + "data/val/images"
    img_list = os.listdir(img_folder)
    img_list.sort()
    # 修改输入标签文件夹
    label_folder = root + "data/val/labels"
    label_list = os.listdir(label_folder)
    label_list.sort()
    # 输出图片文件夹位置
    try:
        # path = os.getcwd()
        output_folder = root
    except FileExistsError:
        pass

    colormap = [(0, 255, 0), (132, 112, 255), (0, 191, 255)]  # 色盘，可根据类别添加新颜色

    for i in range(len(img_list)):
        image_path = img_folder + "/" + img_list[i]
        label_path = label_folder + "/" + label_list[i]
        # 读取图像文件
        img = cv2.imread(image_path)
        h, w = img.shape[:2]
        # 读取 labels
        with open(label_path, 'r') as f:
            lb = np.array([x.split() for x in f.read().strip().splitlines()], dtype=np.float32)
        # f2 = open(output_folder + label_list[i], 'w')
        # 绘制每一个目标
        for x in lb:
            # 反归一化并得到左上和右下坐标，画出矩形框
            # img = xywh2xyxy(x, w, h, img)
            img = show_bb(x, w, h, img)
            # result = xyxy2xywh(x, w, h)
            # f2.write('{} {} {} {} {}\n'.format(int(result[0]), result[1], result[2], result[3], result[4]))
        # f2.close()
        """
        # 直接查看生成结果图
        cv2.imshow('show', img)
        cv2.waitKey(0)
        """
        cv2.imwrite(output_folder + '/' + '{}.png'.format(image_path.split('/')[-1][:-4]), img)
