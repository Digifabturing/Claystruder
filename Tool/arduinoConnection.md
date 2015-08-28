### Serial port connection
the arduino Leonardo is connected to the COMAU robot NJ60 through serial communication,
for that we have used the rs232 to ttl converter. You will connect the RX from the converter
to the arduino TX(PIN1) and the TX from the converter to the arduino RX(PIN0), and
the GND from the converter to the arduino GND.

### Motor connection
We will use a MOSFET to control the motor, in this way we can control the motor speed to.
For the connection and information about motor and MOSFET you can follow this [tutorial](http://bildr.org/2012/03/rfp30n06le-arduino/).
