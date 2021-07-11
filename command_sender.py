import serial

ser = serial.Serial('COM3', 115200)

with open('commands.tap') as f:
    commands = f.readlines()

for command in commands:
    print("sending: " + command)
    command = command.ljust(40, '0')
    command = str.encode(command)
    ser.write(command)
    input_buffer = ser.readline()
    print("received: " + input_buffer.decode("utf-8"))

