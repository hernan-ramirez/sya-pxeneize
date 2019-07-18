<?
$notip = mysql_query("SELECT * FROM noticia where tipo_contenido='Noticia' and nivel='Principal'");
$noticiap=mysql_fetch_array($notip);
$notis = mysql_query("SELECT * FROM noticia where tipo_contenido='Noticia' and nivel='Secundaria'");
$noticias=mysql_fetch_array($notis);
$notig = mysql_query("SELECT * FROM noticia where tipo_contenido='Noticia' and nivel='General' Limit 3");

$imas=mysql_query("SELECT nombre_arch, ancho, alto FROM fotos WHERE id='$noticiap[id_foto1]'");
$imasa=mysql_fetch_array($imas);
?>
<TABLE WIDTH="235" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR>
    <TD><IMG SRC="img/general/cbj.gif" WIDTH="235" HEIGHT="27"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="235" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR>
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD WIDTH="233">
      <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
        <TR BGCOLOR="#FFFFFF"> 
          <TD><IMG SRC="img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
        </TR>
        <TR BGCOLOR="#FF7F00"> 
          <TD><APPLET CODEBASE="./applets/inicio2/" CODE="aTicker.class" ARCHIVE="aTicker.jar" WIDTH=233 HEIGHT=15 MAYSCRIPT>
              <PARAM NAME="_file" VALUE="./mess.txt">
              <PARAM NAME="file" VALUE="s">
              <PARAM NAME="cSep" VALUE=";">
              <PARAM NAME="speed" VALUE="2">
              <PARAM NAME="delay" VALUE="30">
              <PARAM NAME="local" VALUE="true">
              <PARAM NAME="bgcolor" VALUE="16744192">
              <PARAM NAME="Font1" VALUE="Verdana, 10, 0, 16777215">
              <PARAM NAME="Font2" VALUE="Verdana, 10, 2, 16777215">
              <?
$result = mysql_query("SELECT * FROM partidos ORDER BY fecha_creacion DESC LIMIT 5");
	if ($result !=0){
		$x=0;
		while($row = mysql_fetch_object($result)){
?> 
              <PARAM NAME="s<? echo $x ?>" VALUE="<? echo $row->fecha_partido." ".$row->rival." ".$row->resultado ?> ; ../../periodistica/index.html?id=<? echo $row->id ?>&inc=nota&tipo=noticia ; _self">
              <?
			$x++;
		}
	}
?>
            </APPLET></TD>
        </TR>
        <TR BGCOLOR="#FFFFFF"> 
          <TD><IMG SRC="img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
        </TR>
        <TR> 
          <TD><IMG SRC="img/banners/mastercard.gif" WIDTH="233" HEIGHT="33"></TD>
        </TR>
        <TR BGCOLOR="#FFFFFF"> 
          <TD><IMG SRC="img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
        </TR>
        <TR> 
          <TD>
            <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
              <TR>
                <TD WIDTH="54"><IMG SRC="img/clipart/<? if ($imasa[0]==""){echo "default/01.jpg";}else{echo $imasa[0]; } ?>" WIDTH="54" HEIGHT="78"></TD>
                <TD WIDTH="1" BGCOLOR="#FFFFFF"><IMG SRC="img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                <TD WIDTH="180">
                  <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0" HEIGHT="78">
                    <TR BGCOLOR="#FF7F00" ALIGN="RIGHT"> 
                      <TD HEIGHT="15">Noticias</TD>
                    </TR>
                    <TR BGCOLOR="#FFFFFF"> 
                      <TD HEIGHT="1"><IMG SRC="img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                    </TR>
                    <TR BGCOLOR="#323967" VALIGN="TOP"> 
                      <TD HEIGHT="62"><A HREF="#"><APPLET CODE="AcuteScroller.class" ARCHIVE="AcuteScroller.jar" WIDTH="178" HEIGHT="62" CODEBASE="./applets/inicio/">
                          <PARAM NAME="Message" VALUE="
        <markets> <h><? echo $noticiap[titulo] ?></h>
<? 
 		$num = 0;
		$words = explode ( " ", $noticiap[texto]); 
		while ( list(, $word) = each ($words) ) {
		  $num = strlen($word) + $num ;
		  if ($num < 60) {
		    echo "$word ";
		  } else {
		    break;
		  } 
		} 
?>...<link Load-Temp-Message='java.html'>Ver Más.</link></markets>

        <study> <h><? echo $noticias[titulo] ?></h><? 
 		$num = 0;
		$words = explode ( " ", $noticias[texto]); 
		while ( list(, $word) = each ($words) ) {
		  $num = strlen($word) + $num ;
		  if ($num < 60) {
		    echo "$word ";
		  } else {
		    break;
		  } 
		} 
?>...<link Load-Temp-Message='DummyLink.txt'>Ver Más</link></study>

<?
while ($row=mysql_fetch_object($notig)){ 
?>
        <weather> <h><? echo $row->titulo ?></h><? 
 		$num = 0;
		$words = explode ( " ", $row->texto); 
		while ( list(, $word) = each ($words) ) {
		  $num = strlen($word) + $num ;
		  if ($num < 60) {
		    echo "$word ";
		  } else {
		    break;
		  } 
		} 
?>...<link Load-Temp-Message='DummyLink.txt'>Ver Más</link></weather>
<?
}
?>

     ">
                          <PARAM NAME="Style" VALUE="
        <default
           Text-Size='9'
           Text-Color='ffffff'
           Background-Color='323967'
           Border-Type='full'
           Border-Width='0'
           Scroll-Pause='7000'
           Scroll-Speed='5'>
        <h Text-Size='10'
           Text-Color='888888'
           Padding-Top='6'>
        </h
           Padding-Bottom='3'>
        <link
           Text-Color='FF7F00'
           Text-Bold='true'
           Text-Underline='false'
           Padding-Top='3'
           Line-Break='true'
           Align='right'>
        <markets
           Section-Header='true'
           Background-Image=
           'img/Background-144x222-2.jpg'>
        <study
           Section-Header='true'
           Background-Image=
           'img/Background-144x222-3.jpg'>
        <weather
           Section-Header='true'
           Background-Image=
           'img/Background-144x222-4.jpg'>
     ">
                          <PARAM NAME="Domain-Keys" VALUE="16303,12294,12294,15439,15439">
                        </APPLET></A></TD>
                    </TR>
                  </TABLE>
                </TD>
              </TR>
            </TABLE>
          </TD>
        </TR>
        <TR BGCOLOR="#FFFFFF"> 
          <TD><IMG SRC="img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
        </TR>
        <TR> 
          <TD>
            <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
              <TR> 
                <TD WIDTH="159">
                  <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0" HEIGHT="78">
                    <TR BGCOLOR="#575757" ALIGN="CENTER"> 
                      <TD HEIGHT="15">Como invitado pepe</TD>
                    </TR>
                    <TR BGCOLOR="#FFFFFF"> 
                      <TD HEIGHT="1"><IMG SRC="img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                    </TR>
                    <TR BGCOLOR="#575757" VALIGN="TOP"> 
                      <TD HEIGHT="62">Pepe</TD>
                    </TR>
                  </TABLE>
                </TD>
                <TD WIDTH="1" BGCOLOR="#FFFFFF"><IMG SRC="img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                <TD WIDTH="75"><IMG SRC="img/general/spacer.gif" WIDTH="75" HEIGHT="75"></TD>
              </TR>
            </TABLE>
          </TD>
        </TR>
        <TR BGCOLOR="#FFFFFF"> 
          <TD><IMG SRC="img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
        </TR>
      </TABLE>
    </TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="235" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR BGCOLOR="#323967"> 
    <TD><IMG SRC="img/general/concursos.gif" WIDTH="235" HEIGHT="17" USEMAP="#Map" BORDER="0"><MAP NAME="Map"><AREA SHAPE="RECT" COORDS="111,3,223,13" HREF="javascript:openwin('comunidad/registrate.html','registrate','width=400,height=300,scrollbars=1')"><AREA SHAPE="RECT" COORDS="15,3,92,13" HREF="#"></MAP></TD>
  </TR>
</TABLE>
