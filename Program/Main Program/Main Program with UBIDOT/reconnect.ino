void reconnect() {
  //mencoba looping koneksi kembali
  while (!client.connected()) { 
    if (client.connect(MQTT_CLIENT_NAME, TOKEN, "")) {
    } else {
      //delay(1); //mencoba dalam 2 detik
    }
  }
}
