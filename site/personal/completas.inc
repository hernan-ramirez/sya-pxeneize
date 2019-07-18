 
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR BGCOLOR="#FFFFFF"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0" HEIGHT="18">
  <TR> 
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD WIDTH="478" ALIGN="right"><FONT FACE="Verdana, Arial, Helvetica, sans-serif"><B><FONT FACE="Verdana, Arial, Helvetica, sans-serif"><B><FONT COLOR="#FFFFFF">Estad&iacute;sticas 
      Completas </FONT>&nbsp;</B></FONT><FONT COLOR="#FFFFFF"> </FONT>&nbsp;&nbsp;</B></FONT></TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR BGCOLOR="#FFFFFF"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR> 
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD WIDTH="478" BGCOLOR="#000000" ALIGN="right">&nbsp;</TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR BGCOLOR="#FFFFFF"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0" HEIGHT="20">
  <TR> 
    <TD WIDTH="121" VALIGN="top"> 
      <TABLE WIDTH="121" BORDER="0" CELLSPACING="0" CELLPADDING="0">
        <TR> 
          <TD BGCOLOR="#FFFFFF" WIDTH="1" HEIGHT="355"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
          <TD HEIGHT="355" VALIGN="top"> 
            <TABLE WIDTH="120" BORDER="0" CELLSPACING="0" CELLPADDING="0">
              <TR BGCOLOR="#666666"> 
                <TD>&nbsp;</TD>
              </TR>
              <TR BGCOLOR="#FFFFFF"> 
                <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1" HSPACE="1"></TD>
              </TR>
              <TR BGCOLOR="#000000"> 
                <TD HEIGHT="80">&nbsp;</TD>
              </TR>
              <TR BGCOLOR="#666666"> 
                <TD HEIGHT="1" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
              </TR>
              <TR BGCOLOR="#000000"> 
                <TD HEIGHT="80">&nbsp;</TD>
              </TR>
              <TR BGCOLOR="#666666"> 
                <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
              </TR>
              <TR BGCOLOR="#000000"> 
                <TD HEIGHT="80">&nbsp;</TD>
              </TR>
              <TR BGCOLOR="#FFFFFF"> 
                <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1" HSPACE="1"></TD>
              </TR>
            </TABLE>
            <? include "menu.inc" ?> </TD>
        </TR>
      </TABLE>
    </TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD WIDTH="357" VALIGN="top"> 
      <TABLE WIDTH="100%" BORDER="0" CELLSPACING="2" CELLPADDING="2">
        <TR> 
          <TD> 
            <P><B><IMG SRC="../img/general/blanco.gif" WIDTH="5" HEIGHT="5"> Boca 
              Juniors </B></P>
            <DIV ALIGN="right">Torneos Locales: &nbsp;</DIV>
            <DIV ALIGN="right"> 
              <TABLE WIDTH="340" BORDER="0" CELLSPACING="0" CELLPADDING="0" ALIGN="center">
                <TR> 
                  <TD> 
                    <P></P>
                    <TABLE WIDTH="340" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                      <TR BGCOLOR="#FFFFFF"> 
                        <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                      </TR>
                    </TABLE>
                    <TABLE WIDTH="340" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                      <TR> 
                        <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                        <TD WIDTH="340"> 
                          <TABLE WIDTH="100%" BORDER="0" CELLSPACING="1" CELLPADDING="1">
                            <TR> 
                              <TD WIDTH="200" ALIGN="center" BGCOLOR="#000000">Motivo</TD>
                              <TD ALIGN="center" WIDTH="70" BGCOLOR="#000000">Partidos</TD>
                              <TD WIDTH="70" ALIGN="center" BGCOLOR="#000000">Goles</TD>
                            </TR>
                            <? 
	$totalp = 0;
	$totalg = 0;
	$zona = mysql_query("SELECT * from partidos_campeonato WHERE zona='local'");
	while($row=mysql_fetch_object($zona)){ 
		$part = mysql_query("SELECT * from partidos WHERE campeonato='$row->campeonato'");
		$partidos = mysql_num_rows($part);
		$g = mysql_query("SELECT * from partidos WHERE campeonato='$row->campeonato'");
			$cantidad=0;
			while($gol=mysql_fetch_object($g)){
			$cantidad=$cantidad+$gol->goles;
			}
?> 
                            <TR> 
                              <TD WIDTH="200" ALIGN="center" BGCOLOR="#666666"><A HREF="javascript:openwin('partidos_ow.html?id=<? echo $row->id ?>','Estadística','width=506,height=250,scrollbars=1')"> 
                                <FONT FACE="Ms Sans Serif" SIZE="1" COLOR="#FFFFFF"><? echo $row->campeonato ?> 
                                &nbsp; &gt;&gt; </FONT></A></TD>
                              <TD ALIGN="center" WIDTH="70" BGCOLOR="#666666"><? echo $partidos ?></TD>
                              <TD WIDTH="70" ALIGN="center" BGCOLOR="#666666"><? echo $cantidad ?></TD>
                            </TR>
                            <? 
		$totalp = $totalp+$partidos;
		$totalg = $totalg+$cantidad;
} 
	$ttp = $totalp;
	$ttg = $totalg;
?> 
                            <TR BGCOLOR="#555555"> 
                              <TD WIDTH="200" ALIGN="center"><B>TOTAL</B></TD>
                              <TD ALIGN="center" WIDTH="70"><B><? echo $totalp ?></B></TD>
                              <TD WIDTH="70" ALIGN="center"><B><? echo $totalg ?></B></TD>
                            </TR>
                          </TABLE>
                        </TD>
                        <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                      </TR>
                    </TABLE>
                    <TABLE WIDTH="340" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                      <TR BGCOLOR="#FFFFFF"> 
                        <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                      </TR>
                    </TABLE>
                  </TD>
                </TR>
              </TABLE>
              <BR>
              Copas Sudamericanas: &nbsp;<BR>
            </DIV>
            <TABLE WIDTH="340" BORDER="0" CELLSPACING="0" CELLPADDING="0" ALIGN="center">
              <TR> 
                <TD> 
                  <P></P>
                  <TABLE WIDTH="340" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                    <TR BGCOLOR="#FFFFFF"> 
                      <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                    </TR>
                  </TABLE>
                  <TABLE WIDTH="340" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                    <TR> 
                      <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                      <TD WIDTH="340"> 
                        <TABLE WIDTH="100%" BORDER="0" CELLSPACING="1" CELLPADDING="1">
                          <TR> 
                            <TD WIDTH="200" ALIGN="center" BGCOLOR="#000000">Motivo</TD>
                            <TD ALIGN="center" WIDTH="70" BGCOLOR="#000000">Partidos</TD>
                            <TD WIDTH="70" ALIGN="center" BGCOLOR="#000000">Goles</TD>
                          </TR>
                          <? 
	$totalp = 0;
	$totalg = 0;
	$zona = mysql_query("SELECT * from partidos_campeonato WHERE zona='sudamericanos'");
	while($row=mysql_fetch_object($zona)){ 
		$part = mysql_query("SELECT * from partidos WHERE campeonato='$row->campeonato'");
		$partidos = mysql_num_rows($part);
		$g = mysql_query("SELECT * from partidos WHERE campeonato='$row->campeonato'");
			$cantidad=0;
			while($gol=mysql_fetch_object($g)){
			$cantidad=$cantidad+$gol->goles;
			}
?> 
                          <TR> 
                            <TD WIDTH="200" ALIGN="center" BGCOLOR="#666666"><A HREF="javascript:openwin('partidos_ow.html?id=<? echo $row->id ?>','Estadística','width=506,height=250,scrollbars=1')"> 
                              <FONT FACE="Ms Sans Serif" SIZE="1" COLOR="#FFFFFF"><? echo $row->campeonato ?> 
                              &nbsp; &gt;&gt; </FONT></A></TD>
                            <TD ALIGN="center" WIDTH="70" BGCOLOR="#666666"><? echo $partidos ?></TD>
                            <TD WIDTH="70" ALIGN="center" BGCOLOR="#666666"><? echo $cantidad ?></TD>
                          </TR>
                          <? 
		$totalp = $totalp+$partidos;
		$totalg = $totalg+$cantidad;
} 

	$ttp = $ttp + $totalp;
	$ttg = $ttg + $totalg;

?> 
                          <TR BGCOLOR="#555555"> 
                            <TD WIDTH="200" ALIGN="center"><B>TOTAL</B></TD>
                            <TD ALIGN="center" WIDTH="70"><B><? echo $totalp ?></B></TD>
                            <TD WIDTH="70" ALIGN="center"><B><? echo $totalg ?></B></TD>
                          </TR>
                        </TABLE>
                      </TD>
                      <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                    </TR>
                  </TABLE>
                  <TABLE WIDTH="340" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                    <TR BGCOLOR="#FFFFFF"> 
                      <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                    </TR>
                  </TABLE>
                </TD>
              </TR>
            </TABLE>
            
            <DIV align="right"><BR>
              Copas Mundiales: &nbsp;<BR>
            </DIV>
            <TABLE width="340" border="0" cellspacing="0" cellpadding="0" align="center">
              <TR> 
                <TD> 
                  <P></P>
                  <TABLE width="340" border="0" cellspacing="0" cellpadding="0">
                    <TR bgcolor="#FFFFFF"> 
                      <TD><IMG src="../img/general/spacer.gif" width="1" height="1"></TD>
                    </TR>
                  </TABLE>
                  <TABLE width="340" border="0" cellspacing="0" cellpadding="0">
                    <TR> 
                      <TD bgcolor="#FFFFFF" width="1"><IMG src="../img/general/spacer.gif" width="1" height="1"></TD>
                      <TD width="340"> 
                        <TABLE width="100%" border="0" cellspacing="1" cellpadding="1">
                          <TR> 
                            <TD width="200" align="center" bgcolor="#000000">Motivo</TD>
                            <TD align="center" width="70" bgcolor="#000000">Partidos</TD>
                            <TD width="70" align="center" bgcolor="#000000">Goles</TD>
                          </TR>
                          <? 
	$totalp = 0;
	$totalg = 0;
	$zona = mysql_query("SELECT * from partidos_campeonato WHERE zona='internacional'");
	while($row=mysql_fetch_object($zona)){ 
		$part = mysql_query("SELECT * from partidos WHERE campeonato='$row->campeonato'");
		$partidos = mysql_num_rows($part);
		$g = mysql_query("SELECT * from partidos WHERE campeonato='$row->campeonato'");
			$cantidad=0;
			while($gol=mysql_fetch_object($g)){
			$cantidad=$cantidad+$gol->goles;
			}
?> 
                          <TR> 
                            <TD width="200" align="center" bgcolor="#666666"><A href="javascript:openwin('partidos_ow.html?id=<? echo $row->id ?>','Estadística','width=506,height=250,scrollbars=1')"> 
                              <FONT face="Ms Sans Serif" size="1" color="#FFFFFF"><? echo $row->campeonato ?> 
                              &nbsp; &gt;&gt; </FONT></A></TD>
                            <TD align="center" width="70" bgcolor="#666666"><? echo $partidos ?></TD>
                            <TD width="70" align="center" bgcolor="#666666"><? echo $cantidad ?></TD>
                          </TR>
                          <? 
		$totalp = $totalp+$partidos;
		$totalg = $totalg+$cantidad;
} 

	$ttp = $ttp + $totalp;
	$ttg = $ttg + $totalg;

?> 
                          <TR bgcolor="#555555"> 
                            <TD width="200" align="center"><B>TOTAL</B></TD>
                            <TD align="center" width="70"><B><? echo $totalp ?></B></TD>
                            <TD width="70" align="center"><B><? echo $totalg ?></B></TD>
                          </TR>
                        </TABLE>
                      </TD>
                      <TD bgcolor="#FFFFFF" width="1"><IMG src="../img/general/spacer.gif" width="1" height="1"></TD>
                    </TR>
                  </TABLE>
                  <TABLE width="340" border="0" cellspacing="0" cellpadding="0">
                    <TR bgcolor="#FFFFFF"> 
                      <TD><IMG src="../img/general/spacer.gif" width="1" height="1"></TD>
                    </TR>
                  </TABLE>
                </TD>
              </TR>
            </TABLE>
            <DIV align="right"><BR>
              Torneos Amistosos: &nbsp;<BR>
            </DIV>
            <TABLE width="340" border="0" cellspacing="0" cellpadding="0" align="center">
              <TR> 
                <TD> 
                  <P></P>
                  <TABLE width="340" border="0" cellspacing="0" cellpadding="0">
                    <TR bgcolor="#FFFFFF"> 
                      <TD><IMG src="../img/general/spacer.gif" width="1" height="1"></TD>
                    </TR>
                  </TABLE>
                  <TABLE width="340" border="0" cellspacing="0" cellpadding="0">
                    <TR> 
                      <TD bgcolor="#FFFFFF" width="1"><IMG src="../img/general/spacer.gif" width="1" height="1"></TD>
                      <TD width="340"> 
                        <TABLE width="100%" border="0" cellspacing="1" cellpadding="1">
                          <TR> 
                            <TD width="200" align="center" bgcolor="#000000">Motivo</TD>
                            <TD align="center" width="70" bgcolor="#000000">Partidos</TD>
                            <TD width="70" align="center" bgcolor="#000000">Goles</TD>
                          </TR>
                          <? 
	$totalp = 0;
	$totalg = 0;
	$zona = mysql_query("SELECT * from partidos_campeonato WHERE zona='amistosos'");
	while($row=mysql_fetch_object($zona)){ 
		$part = mysql_query("SELECT * from partidos WHERE campeonato='$row->campeonato'");
		$partidos = mysql_num_rows($part);
		$g = mysql_query("SELECT * from partidos WHERE campeonato='$row->campeonato'");
			$cantidad=0;
			while($gol=mysql_fetch_object($g)){
			$cantidad=$cantidad+$gol->goles;
			}
?> 
                          <TR> 
                            <TD width="200" align="center" bgcolor="#666666"><A href="javascript:openwin('partidos_ow.html?id=<? echo $row->id ?>','Estadística','width=506,height=250,scrollbars=1')"> 
                              <FONT face="Ms Sans Serif" size="1" color="#FFFFFF"><? echo $row->campeonato ?> 
                              &nbsp; &gt;&gt; </FONT></A></TD>
                            <TD align="center" width="70" bgcolor="#666666"><? echo $partidos ?></TD>
                            <TD width="70" align="center" bgcolor="#666666"><? echo $cantidad ?></TD>
                          </TR>
                          <? 
		$totalp = $totalp+$partidos;
		$totalg = $totalg+$cantidad;
} 

	$ttp = $ttp + $totalp;
	$ttg = $ttg + $totalg;

?> 
                          <TR bgcolor="#555555"> 
                            <TD width="200" align="center"><B>TOTAL</B></TD>
                            <TD align="center" width="70"><B><? echo $totalp ?></B></TD>
                            <TD width="70" align="center"><B><? echo $totalg ?></B></TD>
                          </TR>
                        </TABLE>
                      </TD>
                      <TD bgcolor="#FFFFFF" width="1"><IMG src="../img/general/spacer.gif" width="1" height="1"></TD>
                    </TR>
                  </TABLE>
                  <TABLE width="340" border="0" cellspacing="0" cellpadding="0">
                    <TR bgcolor="#FFFFFF"> 
                      <TD><IMG src="../img/general/spacer.gif" width="1" height="1"></TD>
                    </TR>
                  </TABLE>
                </TD>
              </TR>
            </TABLE>
            <P>&nbsp;</P>
            <P>&nbsp;</P>
          </TD>
        </TR>
      </TABLE>
      <IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
<TD BGCOLOR="#FFFFFF" WIDTH="1" BACKGROUND="../img/general/title_1.gif"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
              
  </TR>
</TABLE>
<TABLE WIDTH="480" BORDER="0" CELLSPACING="0" CELLPADDING="0" HEIGHT="1">
  <TR> 
    <TD WIDTH="120"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="358"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
