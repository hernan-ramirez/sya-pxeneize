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
            <TABLE WIDTH="100%" BORDER="0" CELLSPACING="2" CELLPADDING="2">
              <?

$x=1;
$sql=mysql_query("SELECT * FROM partidos_campeonato ORDER BY zona");
while($row=mysql_fetch_object($sql)){
	if($zona!=$row->zona){
		$zona=$row->zona;
			if($x==1 || $x==3){ echo "<TR VALIGN='TOP'>"; }
?> <TD WIDTH="50%"> 
                  <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                    <TR BGCOLOR="#323967"> 
                      <TD>Torneos <? echo $zona ?></TD>
                    </TR>
                  </TABLE>
                  <?
$par=mysql_query("SELECT * FROM partidos_campeonato WHERE zona='$zona' ");
while($row1=mysql_fetch_object($par)){
?> 
                  <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                    <TR> 
                      <TD BGCOLOR="#323967" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                      <TD> 
                        <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                          <TR> 
                            <TD><FONT COLOR="#000000">&nbsp;<A HREF="<? echo $PHP_SELF ?>?inc=torneos&idcamp=<? echo $row1->id ?>"> 
                              <? echo $row1->campeonato ?></A></FONT></TD>
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
		}
?>
                   </TD>
                
              <?

if($x==2 || $x==4){ echo "</TR>"; }
$x++;
	}
}
?>
             
            </TABLE>
          </TD>
        </TR>
      </TABLE>
      
    </TD>
    <TD BGCOLOR="#000000" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
