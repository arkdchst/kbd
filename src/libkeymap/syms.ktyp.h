/*
 * Keysyms whose KTYP is KT_LATIN or KT_LETTER and whose KVAL is 0..127.
 */
static const char *
iso646_syms[] = {
	"nul",
	"Control_a",
	"Control_b",
	"Control_c",
	"Control_d",
	"Control_e",
	"Control_f",
	"Control_g",
	"BackSpace",
	"Tab",
	"Linefeed",
	"Control_k",
	"Control_l",
	"Control_m",
	"Control_n",
	"Control_o",
	"Control_p",
	"Control_q",
	"Control_r",
	"Control_s",
	"Control_t",
	"Control_u",
	"Control_v",
	"Control_w",
	"Control_x",
	"Control_y",
	"Control_z",
	"Escape",
	"Control_backslash",
	"Control_bracketright",
	"Control_asciicircum",
	"Control_underscore",
	"space",
	"exclam",
	"quotedbl",
	"numbersign",
	"dollar",
	"percent",
	"ampersand",
	"apostrophe",
	"parenleft",
	"parenright",
	"asterisk",
	"plus",
	"comma",
	"minus",
	"period",
	"slash",
	"zero",
	"one",
	"two",
	"three",
	"four",
	"five",
	"six",
	"seven",
	"eight",
	"nine",
	"colon",
	"semicolon",
	"less",
	"equal",
	"greater",
	"question",
	"at",
	"A",
	"B",
	"C",
	"D",
	"E",
	"F",
	"G",
	"H",
	"I",
	"J",
	"K",
	"L",
	"M",
	"N",
	"O",
	"P",
	"Q",
	"R",
	"S",
	"T",
	"U",
	"V",
	"W",
	"X",
	"Y",
	"Z",
	"bracketleft",
	"backslash",
	"bracketright",
	"asciicircum",
	"underscore",
	"grave",
	"a",
	"b",
	"c",
	"d",
	"e",
	"f",
	"g",
	"h",
	"i",
	"j",
	"k",
	"l",
	"m",
	"n",
	"o",
	"p",
	"q",
	"r",
	"s",
	"t",
	"u",
	"v",
	"w",
	"x",
	"y",
	"z",
	"braceleft",
	"bar",
	"braceright",
	"asciitilde",
	"Delete",

	/* set_charset() fills in charset dependent strings here. */
	/* start with the latin1 defaults */
	"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
	"", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
	"nobreakspace",
	"exclamdown",
	"cent",
	"sterling",
	"currency",
	"yen",
	"brokenbar",
	"section",
	"diaeresis",
	"copyright",
	"ordfeminine",
	"guillemotleft",
	"notsign",
	"hyphen",
	"registered",
	"macron",
	"degree",
	"plusminus",
	"twosuperior",
	"threesuperior",
	"acute",
	"mu",
	"paragraph",
	"periodcentered",
	"cedilla",
	"onesuperior",
	"masculine",
	"guillemotright",
	"onequarter",
	"onehalf",
	"threequarters",
	"questiondown",
	"Agrave",
	"Aacute",
	"Acircumflex",
	"Atilde",
	"Adiaeresis",
	"Aring",
	"AE",
	"Ccedilla",
	"Egrave",
	"Eacute",
	"Ecircumflex",
	"Ediaeresis",
	"Igrave",
	"Iacute",
	"Icircumflex",
	"Idiaeresis",
	"ETH",
	"Ntilde",
	"Ograve",
	"Oacute",
	"Ocircumflex",
	"Otilde",
	"Odiaeresis",
	"multiply",
	"Ooblique",
	"Ugrave",
	"Uacute",
	"Ucircumflex",
	"Udiaeresis",
	"Yacute",
	"THORN",
	"ssharp",
	"agrave",
	"aacute",
	"acircumflex",
	"atilde",
	"adiaeresis",
	"aring",
	"ae",
	"ccedilla",
	"egrave",
	"eacute",
	"ecircumflex",
	"ediaeresis",
	"igrave",
	"iacute",
	"icircumflex",
	"idiaeresis",
	"eth",
	"ntilde",
	"ograve",
	"oacute",
	"ocircumflex",
	"otilde",
	"odiaeresis",
	"division",
	"oslash",
	"ugrave",
	"uacute",
	"ucircumflex",
	"udiaeresis",
	"yacute",
	"thorn",
	"ydiaeresis",
};



/*
 * Keysyms whose KTYP is KT_FN.
 */
static const char *
fn_syms[] = {
	"F1", 	"F2",	"F3",	"F4",	"F5",
	"F6",	"F7",	"F8",	"F9",	"F10",
	"F11",	"F12",	"F13",	"F14",	"F15",
	"F16",	"F17",	"F18",	"F19",	"F20",
	"Find",			/* also called: "Home" */
	"Insert",
	"Remove",
	"Select",		/* also called: "End" */
	"Prior",		/* also called: "PageUp" */
	"Next",			/* also called: "PageDown" */
	"Macro",
	"Help",
	"Do",
	"Pause",
	"F21",	"F22",	"F23",	"F24",	"F25",
	"F26",	"F27",	"F28",	"F29",	"F30",
	"F31",	"F32",	"F33",	"F34",	"F35",
	"F36",	"F37",	"F38",	"F39",	"F40",
	"F41",	"F42",	"F43",	"F44",	"F45",
	"F46",	"F47",	"F48",	"F49",	"F50",
	"F51",	"F52",	"F53",	"F54",	"F55",
	"F56",	"F57",	"F58",	"F59",	"F60",
	"F61",	"F62",	"F63",	"F64",	"F65",
	"F66",	"F67",	"F68",	"F69",	"F70",
	"F71",	"F72",	"F73",	"F74",	"F75",
	"F76",	"F77",	"F78",	"F79",	"F80",
	"F81",	"F82",	"F83",	"F84",	"F85",
	"F86",	"F87",	"F88",	"F89",	"F90",
	"F91",	"F92",	"F93",	"F94",	"F95",
	"F96",	"F97",	"F98",	"F99",	"F100",
	"F101",	"F102",	"F103",	"F104",	"F105",
	"F106",	"F107",	"F108",	"F109",	"F110",
	"F111",	"F112",	"F113",	"F114",	"F115",
	"F116",	"F117",	"F118",	"F119",	"F120",
	"F121",	"F122",	"F123",	"F124",	"F125",
	"F126",	"F127",	"F128",	"F129",	"F130",
	"F131",	"F132",	"F133",	"F134",	"F135",
	"F136",	"F137",	"F138",	"F139",	"F140",
	"F141",	"F142",	"F143",	"F144",	"F145",
	"F146",	"F147",	"F148",	"F149",	"F150",
	"F151",	"F152",	"F153",	"F154",	"F155",
	"F156",	"F157",	"F158",	"F159",	"F160",
	"F161",	"F162",	"F163",	"F164",	"F165",
	"F166",	"F167",	"F168",	"F169",	"F170",
	"F171",	"F172",	"F173",	"F174",	"F175",
	"F176",	"F177",	"F178",	"F179",	"F180",
	"F181",	"F182",	"F183",	"F184",	"F185",
	"F186",	"F187",	"F188",	"F189",	"F190",
	"F191",	"F192",	"F193",	"F194",	"F195",
	"F196",	"F197",	"F198",	"F199",	"F200",
	"F201",	"F202",	"F203",	"F204",	"F205",
	"F206",	"F207",	"F208",	"F209",	"F210",
	"F211",	"F212",	"F213",	"F214",	"F215",
	"F216",	"F217",	"F218",	"F219",	"F220",
	"F221",	"F222",	"F223",	"F224",	"F225",
	"F226",	"F227",	"F228",	"F229",	"F230",
	"F231",	"F232",	"F233",	"F234",	"F235",
	"F236",	"F237",	"F238",	"F239",	"F240",
	"F241",	"F242",	"F243",	"F244",	"F245",
	"F246"		/* there are 10 keys named Insert etc., total 256 */
};

/*
 * Keysyms whose KTYP is KT_SPEC.
 */
static const char *
spec_syms[] = {
	"VoidSymbol",
	"Return",
	"Show_Registers",
	"Show_Memory",
	"Show_State",
	"Break",
	"Last_Console",
	"Caps_Lock",
	"Num_Lock",
	"Scroll_Lock",
	"Scroll_Forward",
	"Scroll_Backward",
	"Boot",
	"Caps_On",
	"Compose",
	"SAK",
	"Decr_Console",
	"Incr_Console",
	"KeyboardSignal",
	"Bare_Num_Lock"
};

/*
 * Keysyms whose KTYP is KT_PAD.
 */
static const char *
pad_syms[] = {
	"KP_0",
	"KP_1",
	"KP_2",
	"KP_3",
	"KP_4",
	"KP_5",
	"KP_6",
	"KP_7",
	"KP_8",
	"KP_9",
	"KP_Add",
	"KP_Subtract",
	"KP_Multiply",
	"KP_Divide",
	"KP_Enter",
	"KP_Comma",
	"KP_Period",
	"KP_MinPlus"
};

/*
 * Keysyms whose KTYP is KT_DEAD.
 */
static const char *
dead_syms[] = {
	"dead_grave",
	"dead_acute",
	"dead_circumflex",
	"dead_tilde",
	"dead_diaeresis",
	"dead_cedilla"
};

/*
 * Keysyms whose KTYP is KT_CONS.
 */
static const char *
cons_syms[] = {
	"Console_1",
	"Console_2",
	"Console_3",
	"Console_4",
	"Console_5",
	"Console_6",
	"Console_7",
	"Console_8",
	"Console_9",
	"Console_10",
	"Console_11",
	"Console_12",
	"Console_13",
	"Console_14",
	"Console_15",
	"Console_16",
	"Console_17",
	"Console_18",
	"Console_19",
	"Console_20",
	"Console_21",
	"Console_22",
	"Console_23",
	"Console_24",
	"Console_25",
	"Console_26",
	"Console_27",
	"Console_28",
	"Console_29",
	"Console_30",
	"Console_31",
	"Console_32",
	"Console_33",
	"Console_34",
	"Console_35",
	"Console_36",
	"Console_37",
	"Console_38",
	"Console_39",
	"Console_40",
	"Console_41",
	"Console_42",
	"Console_43",
	"Console_44",
	"Console_45",
	"Console_46",
	"Console_47",
	"Console_48",
	"Console_49",
	"Console_50",
	"Console_51",
	"Console_52",
	"Console_53",
	"Console_54",
	"Console_55",
	"Console_56",
	"Console_57",
	"Console_58",
	"Console_59",
	"Console_60",
	"Console_61",
	"Console_62",
	"Console_63"
};

/*
 * Keysyms whose KTYP is KT_CUR.
 */
static const char *
cur_syms[] = {
	"Down",
	"Left",
	"Right",
	"Up"
};

/*
 * Keysyms whose KTYP is KT_SHIFT.
 */
static const char *
shift_syms[] = {
	"Shift",
	"AltGr",
	"Control",
	"Alt",
	"ShiftL",
	"ShiftR",
	"CtrlL",
	"CtrlR",
	"CapsShift"
};

/*
 * Keysyms whose KTYP is KT_ASCII.
 */
static const char *
ascii_syms[] = {
	"Ascii_0",
	"Ascii_1",
	"Ascii_2",
	"Ascii_3",
	"Ascii_4",
	"Ascii_5",
	"Ascii_6",
	"Ascii_7",
	"Ascii_8",
	"Ascii_9",
	"Hex_0",
	"Hex_1",
	"Hex_2",
	"Hex_3",
	"Hex_4",
	"Hex_5",
	"Hex_6",
	"Hex_7",
	"Hex_8",
	"Hex_9",
	"Hex_A",
	"Hex_B",
	"Hex_C",
	"Hex_D",
	"Hex_E",
	"Hex_F"
};

/*
 * Keysyms whose KTYP is KT_LOCK.
 */
static const char *
lock_syms[] = {
	"Shift_Lock",
	"AltGr_Lock",
	"Control_Lock",
	"Alt_Lock",
	"ShiftL_Lock",
	"ShiftR_Lock",
	"CtrlL_Lock",
	"CtrlR_Lock",
	"CapsShift_Lock"
};

/*
 * Keysyms whose KTYP is KT_SLOCK.
 */
static const char *
sticky_syms[] = {
	"SShift",
	"SAltGr",
	"SControl",
	"SAlt",
	"SShiftL",
	"SShiftR",
	"SCtrlL",
	"SCtrlR",
	"SCapsShift"
};

/*
 * Keysyms whose KTYP is KT_BRL.
 */
static const char *
brl_syms[] = {
	"Brl_blank",
	"Brl_dot1",
	"Brl_dot2",
	"Brl_dot3",
	"Brl_dot4",
	"Brl_dot5",
	"Brl_dot6",
	"Brl_dot7",
	"Brl_dot8",
	"Brl_dot9",
	"Brl_dot10"
};
