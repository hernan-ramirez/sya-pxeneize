
<TABLE WIDTH="120" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR BGCOLOR="#FFFFFF"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
  <TR BGCOLOR="#666666"> 
    <TD>&nbsp;</TD>
  </TR>
  <TR BGCOLOR="#FFFFFF"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
  <TR> 
    <TD> 
      <TABLE WIDTH="120" BORDER="0" CELLSPACING="0" CELLPADDING="0" BGCOLOR="#000000">
        <TR> 
          <TD WIDTH="30"><IMG SRC="../img/general/noticias/buscar.gif" WIDTH="30" HEIGHT="20"></TD>
          <TD WIDTH="90"> <A HREF="<? echo $PHP_SELF ?>?inc=mas&tipo=<? echo $tipo ?>">&nbsp;<FONT COLOR="#FFFFFF">M&aacute;s 
            <? echo $tipo ?>s</FONT></A></TD>
        </TR>
      </TABLE>
    </TD>
  </TR>
  <TR BGCOLOR="#FFFFFF"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
  <TR> 
    <TD> 
      <TABLE WIDTH="120" BORDER="0" CELLSPACING="0" CELLPADDING="0" BGCOLOR="#000000">
        <TR> 
          <TD WIDTH="30"><IMG SRC="../img/general/noticias/imprime.gif" WIDTH="30" HEIGHT="20"></TD>
          <TD WIDTH="90"> &nbsp;<A HREF="javascript:openwin('../include/print.html?id=<? echo $noticia[id] ?>&tipo=noticia','print','width=335,height=350,scrollbars=1')"><FONT COLOR="#FFFFFF">Imprimir</FONT></A></TD>
        </TR>
      </TABLE>
    </TD>
  </TR>
  <TR BGCOLOR="#FFFFFF"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
  <TR> 
    <TD> 
      <TABLE WIDTH="120" BORDER="0" CELLSPACING="0" CELLPADDING="0" BGCOLOR="#000000">
        <TR> 
          <TD WIDTH="30"><IMG SRC="../img/general/noticias/recomineda.gif" WIDTH="30" HEIGHT="20"></TD>
          <TD WIDTH="90"> &nbsp;<A HREF="javascript:openwin('../include/enviar.html?id=<? echo $noticia[id] ?>&tipo=noticia','enviar','width=408,height=270,scrollbars=0')"><FONT COLOR="#FFFFFF">Enviar</FONT></A></TD>
        </TR>
      </TABLE>
    </TD>
  </TR>
  <TR BGCOLOR="#FFFFFF"> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
