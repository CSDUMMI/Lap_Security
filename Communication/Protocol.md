<font face="FreeMono"><font size="6" style="font-size: 28pt">**Protocol for the Communication<font size="6" style="font-size: 28pt">of the Raspberry PI and Arduinos in the Lap_Security Project</font>**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**IDs for the different types of Arduinos**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**in the Network:**</font></font>

<table width="100%" cellpadding="4" cellspacing="0"><colgroup><col width="128*"> <col width="128*"></colgroup>

<tbody>

<tr valign="top">

<td width="50%" style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0.1cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">Name</font></font></td>

<td width="50%" style="border: 1px solid #000000; padding: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">Code</font></font></td>

</tr>

<tr valign="top">

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">Auth</font></font></td>

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">0</font></font></td>

</tr>

<tr valign="top">

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">Servo</font></font></td>

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">1</font></font></td>

</tr>

<tr valign="top">

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">Output</font></font></td>

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">2</font></font></td>

</tr>

<tr valign="top">

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">Server</font></font></td>

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">3</font></font></td>

</tr>

</tbody>

</table>

<font face="FreeMono"><font size="5" style="font-size: 18pt">**A sample Packet on the Network:**</font></font>

<table width="643" cellpadding="4" cellspacing="0"><colgroup><col width="59"> <col width="75"> <col width="136"> <col width="339"></colgroup>

<tbody>

<tr valign="top">

<td width="59" style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0.1cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">ID</font></font></td>

<td width="75" style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0.1cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">TYPE</font></font></td>

<td width="136" style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0.1cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">SIZE</font></font></td>

<td width="339" style="border: 1px solid #000000; padding: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">PAYLOAD</font></font></td>

</tr>

</tbody>

</table>

<table width="100%" cellpadding="4" cellspacing="0"><colgroup><col width="128*"> <col width="128*"></colgroup>

<tbody>

<tr valign="top">

<td width="50%" style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0.1cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">ID</font></font></td>

<td width="50%" style="border: 1px solid #000000; padding: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">1 Byte</font></font></td>

</tr>

<tr valign="top">

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">TYPE</font></font></td>

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">1 Byte</font></font></td>

</tr>

<tr valign="top">

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">SIZE</font></font></td>

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">4 Bytes</font></font></td>

</tr>

<tr valign="top">

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">PAYLOAD</font></font></td>

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">SIZE Bytes</font></font></td>

</tr>

</tbody>

</table>

<font face="FreeMono"><font size="5" style="font-size: 18pt">**TYPE describes how to parse the PAYLOAD,**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**these are the possible TYPE Values:**</font></font>

<table width="100%" cellpadding="4" cellspacing="0"><colgroup><col width="128*"> <col width="128*"></colgroup>

<tbody>

<tr valign="top">

<td width="50%" style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0.1cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">TYPE</font></font></td>

<td width="50%" style="border: 1px solid #000000; padding: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">Describition</font></font></td>

</tr>

<tr valign="top">

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">0</font></font></td>

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">RESPONSE</font></font></td>

</tr>

<tr valign="top">

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">1</font></font></td>

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">TIME</font></font></td>

</tr>

<tr valign="top">

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">2</font></font></td>

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">UNLOCKED</font></font></td>

</tr>

<tr valign="top">

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">3</font></font></td>

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">UNLOCK</font></font></td>

</tr>

<tr valign="top">

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">4</font></font></td>

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">SHOW</font></font></td>

</tr>

<tr valign="top">

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">5</font></font></td>

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">BEEP</font></font></td>

</tr>

<tr valign="top">

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"></td>

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0.1cm"></td>

</tr>

</tbody>

</table>

<font face="FreeMono"><font size="5" style="font-size: 18pt">**TYPE 0: RESPONSE**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**RESPONSE to an REQUEST, mostly to the TIME REQUEST. PAYLOAD: **</font></font>

<table width="643" cellpadding="4" cellspacing="0"><colgroup><col width="67"> <col width="558"></colgroup>

<tbody>

<tr valign="top">

<td width="67" style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0.1cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">TYPE</font></font></td>

<td width="558" style="border: 1px solid #000000; padding: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">RESPONSE-PAYLOAD</font></font></td>

</tr>

</tbody>

</table>

<font face="FreeMono"><font size="5" style="font-size: 18pt">**SIZES:**</font></font>

<table width="100%" cellpadding="4" cellspacing="0"><colgroup><col width="128*"> <col width="128*"></colgroup>

<tbody>

<tr valign="top">

<td width="50%" style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0.1cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">TYPE</font></font></td>

<td width="50%" style="border: 1px solid #000000; padding: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">1B</font></font></td>

</tr>

<tr valign="top">

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">RESPONSE-PAYLOAD</font></font></td>

<td width="50%" style="border-top: none; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: 1px solid #000000; padding-top: 0cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">SIZE-1</font></font></td>

</tr>

</tbody>

</table>

<font face="FreeMono"><font size="5" style="font-size: 18pt">**The is the TYPE of the REQUEST to this RESPONSE.**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**The RESPONSE-PAYLOAD is the data for the REQUEST.**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**TYPE 1\. TIME**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**TIME requests the current time of day, in hours. PAYLOAD is empty and SIZE 0.**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**It gets an RESPONSE with the followin RESPONSE-PAYLOAD:**</font></font>

<table width="100%" cellpadding="4" cellspacing="0"><colgroup><col width="256*"></colgroup>

<tbody>

<tr>

<td width="100%" valign="top" style="border: 1px solid #000000; padding: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">HOUR</font></font></td>

</tr>

</tbody>

</table>

<font face="FreeMono"><font size="5" style="font-size: 18pt">**HOUR is one Byte and just a number between 0 and 23.**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**TYPE 2: UNLOCKED**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**Only accepted if send by the AUTH Arduino.**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**It‘s PAYLOAD:**</font></font>

<table width="100%" cellpadding="4" cellspacing="0"><colgroup><col width="128*"> <col width="128*"></colgroup>

<tbody>

<tr valign="top">

<td width="50%" style="border-top: 1px solid #000000; border-bottom: 1px solid #000000; border-left: 1px solid #000000; border-right: none; padding-top: 0.1cm; padding-bottom: 0.1cm; padding-left: 0.1cm; padding-right: 0cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">AUTH-ID</font></font></td>

<td width="50%" style="border: 1px solid #000000; padding: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">TIME</font></font></td>

</tr>

</tbody>

</table>

<font face="FreeMono"><font size="5" style="font-size: 18pt">**AUTH-ID is the Number with wich the system was unlocked and is a uint of size 4 Bytes.**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**The TIME is a field with SIZE 1 Byte and holds a number between 0-23, defining the hour the system was unlocked.**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**If this is sent to the Raspberry Pi that in turn will sent UNLOCK Command to the Servo Arduino.**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**TYPE 3: UNLOCK**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**Sent by the Node withe Raspberry PI ID to th e Node with the Servo ID that is then unlocking the system.**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**PAYLOAD is empty and SIZE 0.**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">** TYPE 4: SHOW**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**Sents a String of ASCII Characters to be printed to the Screen.**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**PAYLOAD:**</font></font>

<table width="100%" cellpadding="4" cellspacing="0"><colgroup><col width="256*"></colgroup>

<tbody>

<tr>

<td width="100%" valign="top" style="border: 1px solid #000000; padding: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">STRING</font></font></td>

</tr>

</tbody>

</table>

<font face="FreeMono"><font size="5" style="font-size: 18pt">**The STRING can be of variable SIZE and its**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**maximum length is the maximum of the SIZE Field.**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**TYPE 5: BEEP**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**If this Command is sent to the Output Node that Node will activate the Buzzer for a certain time.**</font></font> <font face="FreeMono"><font size="5" style="font-size: 18pt">**PAYLOAD:**</font></font>

<table width="100%" cellpadding="4" cellspacing="0"><colgroup><col width="256*"></colgroup>

<tbody>

<tr>

<td width="100%" valign="top" style="border: 1px solid #000000; padding: 0.1cm"><font face="FreeMono"><font size="5" style="font-size: 18pt">TIME</font></font></td>

</tr>

</tbody>

</table>

<font face="FreeMono"><font size="5" style="font-size: 18pt">**TIME is a 4 Byte number, it defines how many miliseconds the Buzzer shall be on.**</font></font>
