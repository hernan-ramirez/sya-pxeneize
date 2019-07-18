      <TABLE WIDTH="223" BORDER="0" CELLSPACING="0" CELLPADDING="0">
        <TR BGCOLOR="#323967" VALIGN="top"> 
          <TD><IMG SRC="../img/menu/encuestas.gif" WIDTH="223" HEIGHT="19"></TD>
        </TR>
      </TABLE>


<TABLE WIDTH="223" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR>
    <TD>
      <TABLE WIDTH="221" BORDER="0" CELLSPACING="0" CELLPADDING="0">
        <?
$sql=mysql_query("SELECT id, pregunta, respuestas FROM encuesta_preguntas WHERE nivel='actual'");
$row=mysql_fetch_array($sql);
?> 
        <FORM NAME="encuesta" METHOD="post" ACTION="../include/encuesta_ow.html" TARGET="encuesta">
          <TR> 
            <TD BGCOLOR="#FFFFFF"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
            <TD WIDTH="219" VALIGN="top"> 
              <TABLE WIDTH="221" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                <TR ALIGN="CENTER"> 
                  <TD BGCOLOR="#FF7F00"><FONT COLOR="#FFFFFF"><? echo $row[pregunta] ?></FONT></TD>
                </TR>
                <TR> 
                  <TD BGCOLOR="#FFFFFF"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                </TR>
                <?
$respuestas=strtok($row[respuestas], ";");
$x=1;
while ($respuestas){
	$respuesta[$x]=$respuestas;
	$respuestas=strtok(";");
?> 
                <TR> 
                  <TD BGCOLOR="#FF7F00"> 
                    <TABLE WIDTH="221" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                      <TR>
                        <TD WIDTH="10%" ALIGN="CENTER"><FONT COLOR="#FFFFFF"><? echo $x ?>)</FONT></TD>
                        <TD WIDTH="80%" ALIGN="right"><FONT COLOR="#FFFFFF"><? echo $respuesta[$x] ?></FONT></TD>
                        <TD WIDTH="10%"> 
                          <INPUT TYPE="RADIO" NAME="voto" VALUE="<? echo $respuesta[$x] ?>" STYLE="background-color:#FF7F00">
                        </TD>
                      </TR>
                    </TABLE>
                  </TD>
                </TR>
                <TR> 
                  <TD BGCOLOR="#FFFFFF"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                </TR>
                <?
	$x++;
}
?> 
              </TABLE>
            </TD>
            <TD BGCOLOR="#FFFFFF"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
          </TR>
        </FORM>
      </TABLE>
      <TABLE WIDTH="223" BORDER="0" CELLSPACING="0" CELLPADDING="0">
        <?
$respuestas=strtok($row[respuestas], ";");
$x=1;
while ($respuestas){
	$respuesta[$x]=$respuestas;
	$respuestas=strtok(";");
?> <?
	$x++;
}
?> 
        <TR> 
          <TD BGCOLOR="#FFFFFF" WIDTH="1" ALIGN="right"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"> 
          </TD>
          <TD BGCOLOR="#000000" WIDTH="231" ALIGN="right"><IMG SRC="../img/menu/encuestas_res.gif" WIDTH="110" HEIGHT="13" HSPACE="3" USEMAP="#Map" BORDER="0"><MAP NAME="Map"><AREA SHAPE="RECT" COORDS="2,2,40,11" HREF="#" onClick="javascript:sub()"><AREA SHAPE="RECT" COORDS="42,2,105,13" HREF="javascript:openwin('../include/encuesta_ow.html','encuesta','width=306,height=200,scrollbars=0')"></MAP></TD>
          <TD BGCOLOR="#FFFFFF" WIDTH="1" ALIGN="right"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
        </TR>
      </TABLE>
      <TABLE WIDTH="223" BORDER="0" CELLSPACING="0" CELLPADDING="0">
        <TR BGCOLOR="#FFFFFF"> 
          <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
        </TR>
      </TABLE>
    </TD>
  </TR>
</TABLE>
