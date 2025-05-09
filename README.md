ESP32 Blynk Smart Home Automation
This project enables remote control of electrical appliances using an ESP32 microcontroller and the Blynk IoT platform. Four relays connected to the ESP32 are controlled via the Blynk mobile app, allowing users to turn devices ON/OFF over Wi-Fi.

🔧 Features
      Control up to 4 relays (lights, fans, etc.)
      
      Use Blynk app buttons (V0–V3) for each device
      
      Wi-Fi enabled control using the ESP32 board
      
      Real-time updates through Blynk Cloud

📱 Blynk Setup
        Install the Blynk IoT app (Android) or App Store version
        
        Create a new template and obtain:
        
        BLYNK_TEMPLATE_ID
        
        BLYNK_TEMPLATE_NAME
        
        BLYNK_AUTH_TOKEN
        
        Add 4 buttons to your dashboard and assign them to Virtual Pins V0 to V3
        
        More on Blynk: https://docs.blynk.io

🧠 Hardware Used
          ESP32 Dev Board
          
          4-Channel Relay Module
          
          Jumper wires
          
          Breadboard (optional)
          
          Power supply

🧪 How It Works
      Each virtual button in the Blynk app sends a signal to the ESP32 over Wi-Fi. The ESP32 then toggles the corresponding GPIO pin to control a relay, which switches the connected device ON or OFF.

📂 File Overview
      main.ino: Contains the main code for Wi-Fi connection, Blynk configuration, and relay control logic

🚀 Getting Started
      Install the required libraries:
      
      Blynk for ESP32
      
      Upload the code to your ESP32 board using Arduino IDE or PlatformIO
      
      Connect the relays to GPIOs 26, 27, 32, and 33
      
      Open the Blynk app and start controlling your devices!

👍 License
        This project is open source and free to use under the MIT License.
