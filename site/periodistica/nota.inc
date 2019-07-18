
<?
	$not = mysql_query("SELECT * FROM noticia where id='$id'");  
   	$noticia = mysql_fetch_array($not);
?>

<TABLE WIDTH="508" BORDER="0" CELLSPACING="0" CELLPADDING="0" HEIGHT="23">
  <TR> 
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD WIDTH="490" BACKGROUND="../img/general/noticias/header_noti.jpg"><B> &nbsp;&nbsp;&nbsp;<? echo $noticia[titulo] ?></B> 
    </TD>
    <TD WIDTH="17"><IMG SRC="../img/general/noticias/header_noti_right.gif" WIDTH="17" HEIGHT="23"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="508" BORDER="0" CELLSPACING="0" CELLPADDING="0">
  <TR> 
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
    <TD BGCOLOR="#FF7F00" WIDTH="385" VALIGN="top" ALIGN="CENTER"> <BR>
      <TABLE WIDTH="95%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
        <TR>
          <TD><? echo $noticia[texto] ?></TD>
        </TR>
      </TABLE>
    </TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
<? $imas=mysql_query("SELECT nombre_arch, ancho, alto FROM fotos WHERE id='$noticia[id_foto1]'");
	$imasa=mysql_fetch_array($imas); ?>
    <TD BGCOLOR="#FF7F00" WIDTH="120" VALIGN="top"> 
      <TABLE WIDTH="100%" BORDER="0" CELLSPACING="0" CELLPADDING="0">
        <TR>
          <TD><IMG SRC="../img/clipart/<? if ($imasa[0]==""){echo "default/01.jpg";}else{echo $imasa[0]; } ?>" WIDTH="120" HEIGHT="240"></TD>
        </TR>
      </TABLE>
      <? include "menu.inc"; ?>
    </TD>
    <TD BGCOLOR="#FFFFFF" WIDTH="1"><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
<TABLE WIDTH="508" BORDER="0" CELLSPACING="0" CELLPADDING="0" BGCOLOR="#FFFFFF">
  <TR> 
    <TD><IMG SRC="../img/general/spacer.gif" WIDTH="1" HEIGHT="1"></TD>
  </TR>
</TABLE>
