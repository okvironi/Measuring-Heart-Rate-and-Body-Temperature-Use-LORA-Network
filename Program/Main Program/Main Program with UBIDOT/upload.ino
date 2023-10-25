void upload() {
  int dsuhu_object = mlx.readObjectTempC();
  int dsuhu_ambient = mlx.readAmbientTempC();
  int suhu_object = mlx.readObjectTempC() + 60;
  int suhu_ambient= mlx.readAmbientTempC() + 60;
  int button = digitalRead(buttonPin);
  int value = analogRead(0);
  
  //upload program ke server
  sprintf(topic, "%s%s", "/v1.6/devices/", DEVICE_LABEL); //menampilkan output string menjadi output standar
  sprintf(payload, "%s", ""); // Cleans the payload
  sprintf(payload, "{\"%s\":", VARIABLE_LABEL); // variabel ecg
  dtostrf(value, 4, 2, str_value);
  sprintf(payload, "%s {\"value\": %s}}", payload, str_value);
  client.publish(topic, payload);

  sprintf(topic, "%s%s", "/v1.6/devices/", DEVICE_LABEL1); //menampilkan output string menjadi output standar
  sprintf(payload, "%s", ""); // Cleans the payload
  sprintf(payload, "{\"%s\":", VARIABLE_LABEL1); // variabel bpm
  dtostrf(BPM, 4, 2, str_value);
  sprintf(payload, "%s {\"value\": %s}}", payload, str_value);
  client.publish(topic, payload);

  sprintf(topic, "%s%s", "/v1.6/devices/", DEVICE_LABEL3); //menampilkan output string menjadi output standar
  sprintf(payload, "%s", ""); // Cleans the payload
  sprintf(payload, "{\"%s\":", VARIABLE_LABEL3); // variabel suhu object
  dtostrf(dsuhu_object, 4, 2, str_value);
  sprintf(payload, "%s {\"value\": %s}}", payload, str_value);
  client.publish(topic, payload);
}
