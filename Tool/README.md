###BOM

- n.1 meter Polypropylene Pipe diameter 32mm
- n.1 Polypropylene Tee 45° diameter 32mm
- n.1 Spiral Dowel Pins For Thermal Insulation (http://www.amazon.co.uk/Spiral-Dowel-Pins-Thermal-Insulation/dp/B00BHTP8S2)
- n.1 Bearing 29mm diameter
- n.1 Pneumatic container - ROLLYCARP GUN BAIT(http://www.rollycarp.it/inglese/gun-bait-support/)
- n...Some metallic sac à poche nozzles of different diameter (http://www.amazon.com/Norpro-Piece-Cake-Decorating-Set/dp/B000LNQ73K/ref=pd_sim_sbs_201_1?ie=UTF8&refRID=1K3REMP52TTH1Q15FMMP)
- n.1 piece of 70x50 cm birch plywood
- n.1 Power window motor
- n.1 Arduino Leonardo
- n.1 Mosfet IRF530 or similar
- n.1 rs232 - ttl converter (http://users.ntua.gr/dpiperid/MyWebPage/Contructions/converters/rs232tottlEN.htm)

### Serial port connection
the arduino Leonardo is connected to the COMAU robot NJ60 through serial communication,
for that we have used the rs232 to ttl converter. You will connect the RX from the converter
to the arduino TX(PIN1) and the TX from the converter to the arduino RX(PIN0), and
the GND from the converter to the arduino GND.

### Motor connection
We will use a MOSFET to control the motor, in this way we can control the motor speed to.
For the connection and information about motor and MOSFET you can follow this [tutorial](http://bildr.org/2012/03/rfp30n06le-arduino/).

<img src="https://github.com/Digifabturing/Claystruder/blob/master/Tool/functioningSystem.jpg?raw=true" width="100%"/>
functioning system
