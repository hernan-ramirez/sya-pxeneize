<?
$campeo=mysql_query("SELECT * FROM partidos_campeonato where id='$idcamp'");
$campeonato=mysql_fetch_array($campeo);
?>
 
<TABLE WIDTH="470" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR> 
    <TD> 
      <TABLE WIDTH="160" BORDER="0" CELLSPACING="0" CELLPADDING="0" VSPACE="0" HSPACE="0">
        <TR> 
          <TD WIDTH="1" BGCOLOR="#000000"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
          <TD WIDTH="145" BACKGROUND="../img/general/personal/naranja_titulo.gif" ALIGN="center"><? echo $campeonato[campeonato] ?></TD>
          <TD WIDTH="13"><IMG SRC="../img/general/personal/titulo_right.gif" WIDTH="14" HEIGHT="15"></TD>
        </TR>
      </TABLE>
    </TD>
  </TR>
</TABLE>
<TABLE WIDTH="470" BORDER="0" CELLSPACING="0" CELLPADDING="0" BGCOLOR="#000000">
  <TR> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="470" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR> 
    <TD BGCOLOR="#000000" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="468"> 
      <TABLE WIDTH="100%" BORDER="0" CELLSPACING="3" CELLPADDING="3">
        <TR>
          <TD>
            <P><FONT COLOR="#000000"><? echo $campeonato[texto] ?></FONT><BR>
            </P>
            <TABLE WIDTH="100%" BORDER="0" CELLSPACING="1" CELLPADDING="1">
              <TR BGCOLOR="#323967"> 
                <TD>
                  <TABLE WIDTH="100%" BORDER="0" CELLPADDING="1" CELLSPACING="1">
                    <TR ALIGN="center" BGCOLOR="#323967"> 
                      <TD WIDTH="80"> Fecha</TD>
                      <TD> L/V</TD>
                      <TD BGCOLOR="#323967"> Rival</TD>
                      <TD> Res.</TD>
                      <TD>Ficha</TD>
                    </TR>
                    <?
	$result = mysql_query("SELECT * FROM partidos where campeonato='$idcamp' ORDER By fecha_partido"); 
		if ($result != 0){ 
			while ($row = mysql_fetch_object($result)){
?> 
                    <TR BGCOLOR="#FFFFFF"> 
                      <TD WIDTH="80"><FONT COLOR="#323967"><? echo $row->fecha_partido ?></FONT></TD>
                      <TD ALIGN="center"><FONT COLOR="#323967"><? echo $row->local ?></FONT></TD>
                      <?
$riv=mysql_query("SELECT * FROM partidos_equipos where id=$row->rival");
$rival=mysql_fetch_array($riv);
?> 
                      <TD><FONT COLOR="#323967"><? echo $rival[equipo] ?></FONT></TD>
                      <TD ALIGN="center"><FONT COLOR="#323967"><? echo $row->resultado ?></FONT></TD>
                      <TD ALIGN="center"><FONT COLOR="#323967"><A HREF="javascript:openwin('ficha_partido.html?idpart=<? echo $row->id ?>','ficha','width=417,height=410,scrollbars=1')">-&gt;</A></FONT></TD>
                    </TR>
                    <?
	}
}
?> 
                  </TABLE>
                </TD>
              </TR>
            </TABLE>
          </TD>
        </TR>
      </TABLE>
      
    </TD>
    <TD BGCOLOR="#000000" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
