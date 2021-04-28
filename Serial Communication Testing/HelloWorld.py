import serial
import serial.tools.list_ports as port_list
import time

if __name__ == '__main__':
    ports = list(port_list.comports())
    for p in ports:
        print(p)
    ser = serial.Serial('COM4', baudrate=9600, timeout=1)
    ser.flush()
    while True:
        ser.write("Why Hello There\n".encode("utf-8"))
        line = ser.readline().decode('utf-8').rstrip()
        print(line)
        time.sleep(1)
