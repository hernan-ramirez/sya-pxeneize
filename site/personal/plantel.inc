<TABLE WIDTH="470" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR> 
    <TD> 
      <TABLE WIDTH="160" BORDER="0" CELLSPACING="0" CELLPADDING="0" VSPACE="0" HSPACE="0">
        <TR> 
          <TD WIDTH="1" BGCOLOR="#000000"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
          <TD WIDTH="145" BACKGROUND="../img/general/personal/naranja_titulo.gif" ALIGN="center">La 
            Campa&ntilde;a de Boca Jrs</TD>
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
        <TR ALIGN="CENTER"> 
          <TD>
                 <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                    <TR BGCOLOR="#323967">                      
                <TD>Integrantes de los Planteles</TD>
                    </TR>
                  </TABLE> 
            
            <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
              <TR> 
                <TD>
<?
$sql=mysql_query("SELECT * FROM jugadores WHERE equipo ='9' ORDER BY apellido");
$num=mysql_num_rows($sql);
$x=1;
while($row=mysql_fetch_object($sql)){
?>
                  <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                    <TR> 
                      <TD BGCOLOR="#323967" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                      <TD> 
                        <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                          <TR> 
                            <TD><FONT COLOR="#000000"><A HREF="javascript:openwin('ficha_jugador.html?idjug=<? echo $row->id ?>','jugador','width=422,height=290,scrollbars=1')">&nbsp;&nbsp;<? echo $row->apellido ?>&nbsp;<? echo $row->nombre ?></A></FONT></TD>
                          </TR>
                          <TR BGCOLOR="#323967"> 
                            <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                          </TR>
                        </TABLE>
                      </TD>
                      <TD BGCOLOR="#323967" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                    </TR>
                  </TABLE>
                  <?
	if($x==($num/2)){ echo "</TD><TD>"; }
	$x++;
}
?> </TD></TR>
            </TABLE>

          </TD>
        </TR>
      </TABLE>
      
    </TD>
    <TD BGCOLOR="#000000" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
