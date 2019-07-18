<?
	if (!isset($paso)){ $paso=1; }
?> 
<TABLE WIDTH="508" BORDER="0" CELLSPACING="0" CELLPADDING="0" HEIGHT="23">
  <TR> 
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD WIDTH="490" BACKGROUND="../img/general/noticias/header_noti.jpg"><B> &nbsp;&nbsp;&nbsp;<FONT FACE="Verdana, Arial, Helvetica, sans-serif"><B>M&aacute;s 
      <? echo $tipo ?>s: </B></FONT></B> </TD>
    <TD WIDTH="17"><IMG SRC="../img/general/noticias/header_noti_right.gif" WIDTH="17" HEIGHT="23"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="508" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR> 
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD BGCOLOR="#FF7F00" WIDTH="385" VALIGN="top" ALIGN="CENTER"> <BR>
      <TABLE WIDTH="95%" BORDER="0" CELLSPACING="1" CELLPADDING="1">
        <TR ALIGN="CENTER"> 
          <TD><BR>
            <?
	$tot = mysql_query("SELECT * FROM noticia WHERE tipo_contenido='$tipo' ORDER BY fecha_creacion DESC LIMIT 30"); 
	$total=mysql_num_rows($tot);
	
?> &Uacute;ltimas 30 <? echo $tipo ?>s: <?
	$rango=15;
	$rango_i=($rango*$paso)-$rango;
 	$pasos=$total/$rango;
	$x=1;
	while ($x<=($pasos+1)){
?> <A HREF="<? echo $PHP_SELF ?>?paso=<? echo $x ?>&inc=mas&tipo=<? echo $tipo ?>" <? if ($x==$paso){ echo "style='color:#323967'"; }else{ echo "style='color:#FFFFFF'"; } ?>><? echo $x ?>&nbsp;</A> 
            <?
		$x++;
	}
?><BR>
            &nbsp; </TD>
        </TR>
      </TABLE>
      <TABLE WIDTH="95%" BORDER="0">
        <?
	$result = mysql_query("SELECT * FROM noticia WHERE tipo_contenido='$tipo' ORDER BY fecha_creacion DESC LIMIT $rango_i,$rango");  
		if ($result != 0){ 
			while ($row = mysql_fetch_object($result)){
?> 
        <TR VALIGN="TOP"> 
          <TD WIDTH="20%"><FONT COLOR="#000000"><? echo $row->fecha_creacion ?>&nbsp;<IMG SRC="../img/general/blanco.gif" WIDTH="5" HEIGHT="5"></FONT></TD>
          <TD WIDTH="80%"><A HREF="<? echo $PHP_SELF ?>?id=<? echo $row->id ?>&inc=nota&tipo=<? echo $tipo ?>"><FONT COLOR="#FFFFFF"><? echo $row->titulo ?></FONT></A></TD>
        </TR>
        <?
	}
}
?> 
      </TABLE>
      <P> <A HREF="<? echo $PHP_SELF ?>?inc=../include/buscar"><FONT COLOR="#FFFFFF">BUSCAR</FONT></A>
    </TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <? $imas=mysql_query("SELECT nombre_arch, ancho, alto FROM fotos WHERE id='$noticia[id_foto1]'");
	$imasa=mysql_fetch_array($imas); ?> 
    <TD BGCOLOR="#FF7F00" WIDTH="120" VALIGN="top"> 
      <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
        <TR> 
          <TD><IMG SRC="../img/general/noticias/patron_foto.jpg" WIDTH="120" HEIGHT="240"></TD>
        </TR>
      </TABLE>
      
    </TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="508" BORDER="0" CELLSPACING="0" CELLPADDING="0" BGCOLOR="#FFFFFF">
  <TR> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
