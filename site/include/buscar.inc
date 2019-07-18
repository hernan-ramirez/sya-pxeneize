<?
	if (!isset($paso)){ $paso=1; }
?> 
<TABLE WIDTH="508" BORDER="0" CELLSPACING="0" CELLPADDING="0" HEIGHT="23">
  <TR> 
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD WIDTH="490" BACKGROUND="../img/general/noticias/header_noti.jpg"><B> &nbsp;&nbsp;&nbsp;<FONT FACE="Verdana, Arial, Helvetica, sans-serif"><B><FONT SIZE="2">Buscar</FONT></B></FONT></B> 
    </TD>
    <TD WIDTH="17"><IMG SRC="../img/general/noticias/header_noti_right.gif" WIDTH="17" HEIGHT="23"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="508" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR> 
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD BGCOLOR="#FF7F00" WIDTH="385" VALIGN="top" ALIGN="CENTER"> <BR>
      <TABLE WIDTH="90%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
        <FORM NAME="buscar" METHOD="post" ACTION="<? echo $PHP_SELF ?>?paso=<? echo $paso ?>&inc=../include/buscar">
                <TR ALIGN="CENTER"> 
                  <TD> 
                    <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                      <TR BGCOLOR="#666666"> 
                        <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="14"></TD>
                      </TR>
                    </TABLE>
                    <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0" BGCOLOR="#FFFFFF">
                      <TR> 
                        <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                      </TR>
                    </TABLE>
                    <TABLE WIDTH="100%" BORDER="0" CELLSPACING="2" CELLPADDING="2" BGCOLOR="#000000">
                      <TR ALIGN="center"> 
                        <TD> 
                          <INPUT TYPE="text" NAME="palabra">
                          <INPUT TYPE="submit" NAME="buscar" VALUE="Buscar">
                        </TD>
                      </TR>
                    </TABLE>
                    <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0" BGCOLOR="#FFFFFF">
                      <TR> 
                        <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
                      </TR>
                    </TABLE>
                  </TD>
                </TR>
              </FORM>
              <? 
if (isset($palabra)){ 
?> 
              <TR ALIGN="CENTER"> 
                <TD> <BR>
                  <?
	$tot = mysql_query("SELECT * FROM noticia WHERE texto LIKE '%$palabra%' or titulo LIKE '%$palabra%'"); 
	$total=mysql_num_rows($tot);
	
?> Total de Noticias encontradas <? echo $total ?>: <?
	$rango=18;
	$rango_i=($rango*$paso)-$rango;
 	$pasos=$total/$rango;
	$x=1;
	while ($x<=($pasos+1)){
?> <A HREF="<? echo $PHP_SELF ?>?paso=<? echo $x ?>&palabra=<? echo $palabra ?>&inc=../include/buscar" <? if ($x==$paso){ echo "style='color:#323967'"; }else{ echo "style='color:#FFFFFF'"; } ?>><? echo $x ?>&nbsp;</A> 
                  <?
		$x++;
	}
?> <BR>
                  &nbsp; </TD>
              </TR>
              <?
	$result = mysql_query("SELECT * FROM noticia WHERE texto LIKE '%$palabra%' or titulo LIKE '%$palabra%' ORDER BY id LIMIT $rango_i,$rango"); 
	if (mysql_num_rows($result)!=0){
		while($row = mysql_fetch_object($result)){ 
?> 
              <TR ALIGN="CENTER"> 
                <TD> 
                  <TABLE WIDTH="95%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
                    <TR VALIGN="TOP"> 
                      <TD WIDTH="20%"><FONT COLOR="#000000"><? echo $row->fecha_creacion; ?>&nbsp;<IMG SRC="../img/general/blanco.gif" WIDTH="5" HEIGHT="5"></FONT></TD>
                      <TD WIDTH="80%"><A HREF="index.html?id=<? echo $row->id ?>&inc=nota&tipo=<? echo $row->tipo_contenido; ?>"><FONT COLOR="#FFFFFF"><? echo $row->titulo; ?></FONT></A></TD>
                    </TR>
                  </TABLE>
                </TD>
              </TR>
              <?
		}
	} else {
?> 
              <TR ALIGN="CENTER"> 
                <TD>No se encontr&oacute; resultado en su t&eacute;rmino de b&uacute;squeda</TD>
              </TR>
              <?
	}
}else{ 
?> 
              <TR ALIGN="CENTER"> 
                <TD>Ingres&aacute; tu b&uacute;squeda</TD>
              </TR>
              <?
}
?> 
            </TABLE>
            </TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <? $imas=mysql_query("SELECT nombre_arch, ancho, alto FROM fotos WHERE id='$noticia[id_foto1]'");
	$imasa=mysql_fetch_array($imas); ?> 
    <TD BGCOLOR="#FF7F00" WIDTH="120" VALIGN="top"> 
      <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
        <TR> 
          <TD><IMG SRC="../img/clipart/foto_buscar.jpg" WIDTH="120" HEIGHT="240"></TD>
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
<P>&nbsp;</P>
