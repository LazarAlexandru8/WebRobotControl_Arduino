var http = require('http');
var fs = require('fs');
var index = fs.readFileSync( 'Start.html');

var SerialPort = require('serialport');
const parsers = SerialPort.parsers;

const parser = new parsers.Readline({
    delimiter: '\r\n'
});

var port = new SerialPort('COM4',{
    baudRate: 9600,
    dataBits: 8,
    parity: 'none',
    stopBits: 1,
    flowControl: false
});

port.pipe(parser);

var app = http.createServer(function(req, res) {
    res.writeHead(200, {'Content-Type': 'text/html'});
    res.end(index);
});

var io = require('socket.io')(app);

io.on('connection', function(socket) {

    socket.on('select',function(data){

        port.write( data.Servo );

        console.log( data );

    });


    socket.on('move',function(data){

        port.write( data.status_slider );

        console.log( data );

    });

});

app.listen(3000);