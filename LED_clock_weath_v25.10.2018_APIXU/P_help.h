const char P_help[] PROGMEM =  R"=====(
<html>
    <head>
        <!--meta name = "viewport" content = "width=device-width, initial-scale=1.0"-->
        <meta http-equiv = "Content-type" content = "text/html; charset=utf-8">
        <title>Led_clock_weath на ESP-12 ver:25.10.2018 (By IvanUA)</title>
        <link rel="shortcut icon" href="#" />
        <link rel = "stylesheet" type = "text/css" href = "/style.css">
        <script type = "text/javascript" src = "/function.js"></script>
        <script type = "text/javascript">
            function set_printCom(submit) {
                server = "/printCom?printCom=" + val_sw('printCom');
                send_request(submit, server);
            }
            function resetConfig(submit,texts) {
                if(confirm(texts)) {
                    server = "/resetConfig?device=ok";
                    send_request(submit, server);
                    return true;
                } else {
                    return false;
                }
            }
        </script>
    </head>
    <body onload = "load();">
        <header>
            <span class="opt_cn">CLOCK on ESP-12 ver: 25/10/2018 (by IvanZah)</span><br>
            <span class="opt_cn">Time on ESP:</span>
            <span id="time">{{time}}</span> 
        </header>       
        <central-unit>         
            <div class="menu_unit">
                <a class="link__img" href="/index.html"><span class="ico__text">Wifi</span></a>
                <a class="link__img" href="/time.html"><span class="ico__text">Time</span></a>
                <a class="link__img" href="/mqtt.html"><span class="ico__text">Mqtt</span></a>
                <a class="link__img" href="/weather.html"><span class="ico__text">Weather</span></a>
                <a class="link__img" href="/led.html"><span class="ico__text">Setup</span></a>
                <a class="link__img" href="/help.html"><span class="ico__text">Help</span></a>
                <a class="link__img" href="#"><span class="ico__text" onclick="resetConfig(this,'Factory reset?');">Reset</span></a>
            </div>
            <titles><span class="opt_cn">If something went wrong ...</span></titles>
            <div class="informer"><span class="opt_cn">ATTENTION!!! Some changes can be irreversible !!!</span>
            </div>            
            <div id="main_unit">
                <div class="informer">
                    <span class="opt_cn">If you have entered something wrong and can not change it, then return the device to factory settings. The configuration file will be deleted. Device rebooted!</span>
                </div>  
                <a class = "btn btn-block btn-default" href = "/configs.json">Open the configuration file</a>
                <hr>
                <label class="switch">
                    <span class="opt_cn">Display information in the COM port</span>
                    <input class="checkbox" type="checkbox" id="printCom" name="switch-btn" onclick="set_printCom(this);">
                    <span class="switch-btn"></span>
                </label>
            </div>
            <hr>
            <center>
                <div>
                    <b><span class="opt_cn">Update: select and download the firmware (bin)</span></b>
                    <form method="POST" action="/update" enctype="multipart/form-data">
                        <div>
                            <input type="file"  name="update" style="height: 33px;">
                            <input type="submit" class="save_booton" value="download" onclick="this.value='Please wait...';">
                        </div>
                    </form>
                </div>
            </center>
            <div class="menu_unit" id="langs">
                <a><span class="ico__text" onclick="set_lang_f(this, 'EN');">EN</span></a>
                <a><span class="ico__text" onclick="set_lang_f(this, 'UA');">UA</span></a>
                <a><span class="ico__text" onclick="set_lang_f(this, 'RU');">RU</span></a>
                <a><span class="ico__text" onclick="set_lang_f(this, 'PL');">PL</span></a>
                <a><span class="ico__text" onclick="set_lang_f(this, 'CZ');">CZ</span></a>
                <a><span class="ico__text" onclick="set_lang_f(this, 'DE');">DE</span></a>
            </div>
        </central-unit>
    </body>
</html>
)=====";
