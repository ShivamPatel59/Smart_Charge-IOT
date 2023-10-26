## Smart_Charge-IOT
# NodeMCU Charging Control Web Server

This project demonstrates a NodeMCU-based web server that allows you to set a charging timeout and toggle charging using a relay. It's a convenient way to control the charging process of a device connected to the NodeMCU.

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Setup and Installation](#setup-and-installation)
- [Usage](#usage)
- [Configuration](#configuration)
- [Circuit Diagram](#circuit-diagram)
- [Safety Considerations](#safety-considerations)
- [License](#license)

## Features

- Set a charging timeout through a web interface.
- Toggle charging on and off.
- Monitor charging status in real-time.
- Customizable charging control logic.

## Requirements

- NodeMCU (ESP8266) or NodeMCU development board.
- USB cable for programming NodeMCU.
- Jumper wires.
- Relay module.
- Micro-USB cable (for powering NodeMCU).
- Arduino IDE with ESP8266 board support.
- Basic knowledge of HTML and web servers.

## Setup and Installation

1. Clone or download this repository.

2. Open the project in the Arduino IDE and ensure you have the ESP8266 board support package installed.

3. Replace `"Your_SSID"` and `"Your_PASSWORD"` in the code with your Wi-Fi credentials.

4. Upload the code to your NodeMCU board.

5. Connect the relay module and power supply as per the [circuit diagram](#circuit-diagram).

6. Power up your NodeMCU using a micro-USB cable.

7. Open the serial monitor in the Arduino IDE to get the URL for accessing the web interface.

## Usage

1. Access the web interface by entering the URL provided in the serial monitor into a web browser.

2. Set the charging timeout in minutes and click "Set Timeout."

3. You can toggle charging on and off by clicking "Toggle Charging."

4. The web interface displays the current charging status and allows you to monitor it in real-time.

## Configuration

- Modify the code to customize the charging control logic in the `loop()` function as per your specific requirements.
- Implement additional safety features to prevent overcharging or over-discharging of batteries.

## Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

Add a visual representation of your circuit here, including the connections between the NodeMCU, relay module, and power supply.

## Safety Considerations

- Be cautious when working with batteries and charging circuits. Implement safeguards to prevent overcharging or other potential safety hazards.

## License

This project is licensed under the [MIT License](LICENSE).

---

Feel free to modify and extend this README to suit your project's specific details and requirements. It's a valuable resource for users and collaborators to understand how your NodeMCU charging control web server functions.
