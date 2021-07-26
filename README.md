# UE4 小地图插件

* **版本**

  * UE 4.26

* **小地图材质**

  * 材质集参数
    ![image-20210726142852640](https://tva2.sinaimg.cn/large/0060Q9Xfly8gsudh201dzj30nf0ar0t0.jpg)

  * 材质
    ![image-20210726142959228](https://tva3.sinaimg.cn/large/0060Q9Xfly8gsudh4reb4j30sh0irq5l.jpg)

    ![image-20210726143531726](https://tva1.sinaimg.cn/large/0060Q9Xfly8gsudh9hv5nj3097042dfs.jpg)

    ![image-20210726143021242](https://tva2.sinaimg.cn/large/0060Q9Xfly8gsudh79a70j30qb0fiwg5.jpg)

* **使用方法**

  * 节点——Set Player Image Transform（更新小地图中摄像机图标的位置）

    ![image-20210726135222668](https://tva4.sinaimg.cn/large/0060Q9Xfly8gsudgtfro3j30mc0a5q45.jpg)

    * Spring Arm Component  
      摄像机弹簧臂
    * Image Object  
      小地图中的摄像机图标
    * Canvas Panel Slot  
      摄像机图标子控件上的“插槽”对象作为画布传入
    * World Map Border  
      世界地图的边长
    * Mini Map Border  
      小地图边长  
    * Coordinate Rotation  
      摄像机平移的坐标系相对于标准坐标系的旋转角
      ![](https://tva1.sinaimg.cn/large/0060Q9Xfly8gsudhbyspkj30s30fmmxi.jpg)

  * 节点——Cast to Standard Coordinate System（把世界地图中摄像机的位置转换为标准坐标系中的位置）

    ![image-20210726141216085](https://tva2.sinaimg.cn/large/0060Q9Xfly8gsudgvnyouj30ly068gm7.jpg)

    * Original Location  
      摄像机在世界地图中的位置
      
    * Coordinate Rotation  
      摄像机平移的坐标系相对于标准坐标系的旋转角
    
  * 节点——Set Map Offset（更新小地图中地图背景的位置）
  
    ![image-20210726142139312](https://tva4.sinaimg.cn/large/0060Q9Xfly8gsudgzrn8lj30k20dsmyk.jpg)
  
    * Collection  
      跟小地图材质配合使用的材质参数集
    * Parameter Value/Name  
      材质集中的参数，Zoom可以由弹簧臂在2D空间中的长度和地图的比例关系计算得出，Offset可以直接从Cast to Standard Coordinate System节点得出，World Border为世界地图的边长