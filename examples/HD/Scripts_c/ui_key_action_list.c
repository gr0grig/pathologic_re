// @IMPORTS: SetNeedUpdate/1,CaptureKeyboard/0,CaptureMouse/0,GetKeyboardState/1,Trace/1,IsValidVirtualKey/2,Unbind/1,Bind/2,ReleaseKeyboard/0,ReleaseMouse/0,SendMessageToParent/1,StretchBlit/5,GetTextWidth/3,Print/7,CreateIntVector/1,CreateStringVector/1,CreateKeyEnumerator/1,GetKeyName/2,CreateObjectVector/1,GetBindType/2,GetBindAction/2,GetBindCommand/2,GetWindowSize/2,ClientToScreen/2,EnableClipping/1,SetOwnerDraw/1,ProcessEvents/0,SendMessage/2,GetStringByID/2
// @STRINGS: A:size|W:GetKeyboardState fail|A:GetKeyState|A:get|W:wrong key code|W:scrollbar|W:whitepixel|W:default|W: , |A:add|A:Next|W:qsave|W:qload|A:clear|W:AddKeyToAction fail
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,int,int,int,object,object,object,object,object,int,bool,bool params=0
// @EVENT_1: op=0x1f vars=float
// @EVENT_2: op=0x9d vars=int,int
// @EVENT_6: op=0xa9 vars=int,int
// @EVENT_3: op=0xb5 vars=int,int
// @EVENT_7: op=0xc1 vars=int,int
// @EVENT_15: op=0xcd vars=int,int,float
// @EVENT_0: op=0x236 vars=
// @EVENT_200: op=0x24e vars=int,string,object
// @PE: 0x16,0x93,0x9d,0xa9,0xb5,0xc1,0xcd,0xda,0xdc,0xde,0x24e

task_0_event_1(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_int = 0;
	var_22_bool = 0;
	func_20(var_21_int, var_22_bool);
	var_23_bool = var_22_bool == 0; //@nz
	if(var_23_bool != 0) {
		return 8;
	}
	GetKeyboardState(var_18_object);
	var_24_bool = var_18_object == 0; //@nz
	if(var_24_bool != 0) {
		Trace("GetKeyboardState fail");
		return 8;
	}
	var_19_int = 0;
	
Label_47:
	var_27_bool = var_19_int < (int)512;
	if(var_27_bool != 0) {
		IsValidVirtualKey(var_20_bool, var_19_int);
		var_28_bool = var_20_bool;
		if(var_28_bool != 0) {
			@@var_18_object:GetKeyState(var_21_int, var_19_int);
			var_30_int = var_21_int & (int)128;
			if(var_30_int != 0) {
				var_31_bool = var_12_bool;
				if(var_31_bool != 0) {
					var_32_int = 0;
					var_19_int = var_32_int;
					func_73(var_16_bool, var_17_int, var_18_object, var_19_int, var_20_bool, var_21_int, var_32_int);
				}
				return 8;
			}
			goto Label_67;
		}
	Label_67:
		var_19_int = var_19_int + (int)1;
		goto Label_47;
	}
	var_12_bool = true;
	return 8;
}
EMIT "Stack[-4] = 0";


task_0_event_2(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_int)
{
	var_15_bool = 0;
	func_20(var_14_int, var_15_bool);
	var_16_bool = var_15_bool == 0; //@nz
	if(var_16_bool != 0) {
		var_17_int = 0; var_18_int = 0;
		var_13_int = var_17_int;
		var_14_int = var_18_int;
		func_617(var_17_int, var_18_int);
	}
	return 0;
}


task_0_event_6(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_int)
{
	var_15_bool = 0;
	func_20(var_14_int, var_15_bool);
	var_16_bool = var_15_bool == 0; //@nz
	if(var_16_bool != 0) {
		var_17_int = 0; var_18_int = 0;
		var_13_int = var_17_int;
		var_14_int = var_18_int;
		func_651(var_17_int, var_18_int);
	}
	return 0;
}


task_0_event_3(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_int)
{
	var_15_bool = 0;
	func_20(var_14_int, var_15_bool);
	var_16_bool = var_15_bool == 0; //@nz
	if(var_16_bool != 0) {
		var_17_int = 0; var_18_int = 0;
		var_13_int = var_17_int;
		var_14_int = var_18_int;
		func_634(var_17_int, var_18_int);
	}
	return 0;
}


task_0_event_7(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_int)
{
	var_15_bool = 0;
	func_20(var_14_int, var_15_bool);
	var_16_bool = var_15_bool == 0; //@nz
	if(var_16_bool != 0) {
		var_17_int = 0; var_18_int = 0;
		var_13_int = var_17_int;
		var_14_int = var_18_int;
		func_668(var_17_int, var_18_int);
	}
	return 0;
}


task_0_event_15(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_int, var_15_float)
{
	var_16_bool = 0;
	func_20(var_15_float, var_16_bool);
	var_17_bool = var_16_bool == 0; //@nz
	if(var_17_bool != 0) {
		var_18_int = 0; var_19_int = 0; var_20_float = 0;
		var_13_int = var_18_int;
		var_14_int = var_19_int;
		var_15_float = var_20_float;
		func_605(var_19_int, var_20_float);
	}
	return 0;
}


task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool)
{
	var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0;
	func_13(var_20_int, (int)0);
	var_21_int = var_17_int;
	func_18((int)0);
	var_24_int = var_18_int;
	var_19_int = 0;
	
Label_576:
	var_25_bool = var_19_int < var_17_int;
	if(var_25_bool != 0) {
		var_26_float = var_19_int * var_18_int;
		var_20_int = var_26_float + var_0_int;
		var_27_int = 0; var_28_int = 0; var_29_int = 0;
		var_19_int = var_27_int;
		var_20_int = var_29_int;
		func_226(var_16_int, var_17_int, var_18_int, var_19_int, var_20_int, var_27_int, (int)0, var_29_int);
		var_19_int = var_19_int + (int)1;
		goto Label_576;
	}
	return 8;
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool, var_13_int, var_14_string, var_15_object)
{
	var_16_string = "";
	func_224(var_16_string);
	var_17_bool = var_14_string == var_16_string;
	if(var_17_bool != 0) {
		var_18_int = -var_13_int;
		var_19_int = 0;
		func_701(var_19_int);
		var_24_int = var_19_int - var_2_int;
		var_25_float = var_18_int * var_24_int;
		var_0_int = var_25_float / (int)100;
	}
	return 0;
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool)
{
	SetNeedUpdate((bool)1);
	var_11_bool = false;
	var_12_bool = false;
	var_10_int = -1;
	func_312(var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool);
	func_547(var_8_object, var_9_object, var_10_int, var_11_bool, var_12_bool);
	return 0;
}


func_651(var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_int = 0; var_23_int = 0;
	var_17_int = var_22_int;
	var_18_int = var_23_int;
	func_685(var_21_int, var_22_int, var_23_int);
	var_21_int = var_20_int;
	var_36_bool = var_20_int != (int)-1;
	if(var_36_bool != 0) {
		var_37_int = 0; var_38_int = 0; var_39_int = 0;
		var_20_int = var_37_int;
		var_17_int = var_38_int;
		var_18_int = var_39_int;
		func_220();
	}
	return 2;
}


func_524(var_5_object, var_7_object, var_96_int, var_97_int)
{
	var_98_int = 0; var_99_int = 0; var_100_int = 0; var_101_object = Obj(); var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_object = Obj();
	@@@var_5_object:size(var_102_int);
	var_103_int = 0;
	
Label_528:
	var_106_bool = var_103_int < var_102_int;
	if(var_106_bool != 0) {
		@@@var_5_object:get(var_104_int, var_103_int);
		var_107_bool = var_96_int == var_104_int;
		if(var_107_bool != 0) {
			@@@var_7_object:get(var_105_object, var_103_int);
			@@var_105_object:add(var_97_int);
			return 8;
		EMIT "Stack[-1] = 0";
		}
		var_103_int = var_103_int + (int)1;
		goto Label_528;
	}
	Trace("AddKeyToAction fail");
	return 8;
}


func_13(var_5_object, var_125_int)
{
	var_126_int = 0; var_127_int = 0;
	@@@var_5_object:size(var_127_int);
	var_127_int = var_125_int;
	return 2;
}


func_18(var_128_int)
{
	var_128_int = 17;
	return 0;
}


func_147(var_10_int, var_37_int)
{
	var_41_bool = var_10_int == (int)-1;
	if(var_41_bool != 0) {
		var_42_int = 0;
		var_37_int = var_42_int;
		func_22(var_37_int, var_38_int, var_39_int, var_42_int);
		goto Label_156;
	}
Label_156:
	return 0;
}


func_20(var_11_bool, var_16_bool)
{
	var_16_bool = var_11_bool;
	return 0;
}


func_22(var_10_int, var_11_bool, var_12_bool, var_42_int)
{
	var_10_int = var_42_int;
	var_11_bool = true;
	var_12_bool = false;
	CaptureKeyboard();
	CaptureMouse();
	return 0;
}


func_668(var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_int = 0; var_23_int = 0;
	var_17_int = var_22_int;
	var_18_int = var_23_int;
	func_685(var_21_int, var_22_int, var_23_int);
	var_21_int = var_20_int;
	var_36_bool = var_20_int != (int)-1;
	if(var_36_bool != 0) {
		var_37_int = 0; var_38_int = 0; var_39_int = 0;
		var_20_int = var_37_int;
		var_17_int = var_38_int;
		var_18_int = var_39_int;
		func_222();
	}
	return 2;
}


func_547(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int)
{
	GetWindowSize(var_1_int, var_2_int);
	ClientToScreen((int)0, (int)0);
	var_0_int = 0;
	EnableClipping((bool)1);
	SetOwnerDraw((bool)1);
	func_709(var_11_bool, var_12_bool);
	ProcessEvents();
	return 0;
}


func_301(var_5_object, var_6_object, var_7_object, var_24_int, var_25_int)
{
	var_26_object = Obj(); var_27_object = Obj();
	@@@var_5_object:add(var_24_int);
	@@@var_6_object:add(var_25_int);
	CreateIntVector(var_27_object);
	@@@var_7_object:add(var_27_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_685(var_0_int, var_21_int, var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0;
	var_27_int = var_23_int - var_0_int;
	func_18((int)0);
	var_30_int = var_28_int;
	var_29_int = var_27_int / var_28_int;
	var_31_int = 0;
	func_13(var_29_int, var_31_int);
	var_34_bool = var_29_int >= var_31_int;
	if(var_34_bool != 0) {
		var_21_int = -1;
		return 6;
	}
	var_29_int = var_21_int;
	return 6;
}


func_312(var_5_object, var_6_object, var_7_object, var_8_object, var_9_object)
{
	var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_string = ""; var_18_object = Obj(); var_19_bool = 0; var_20_int = 0; var_21_string = "";
	CreateIntVector(var_8_object);
	CreateStringVector(var_9_object);
	CreateKeyEnumerator(var_18_object);
	
Label_319:
	if((bool)1 != 0) {
		@@var_18_object:Next(var_19_bool, var_20_int);
		var_23_bool = var_19_bool == 0; //@nz
		if(var_23_bool != 0) {
		} else {
			@@@var_8_object:add(var_20_int);
			GetKeyName(var_21_string, var_20_int);
			@@@var_9_object:add(var_21_string);
			goto Label_319;
		}
	}
	CreateIntVector(var_5_object);
	CreateIntVector(var_6_object);
	CreateObjectVector(var_7_object);
	var_24_int = 0; var_25_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)0, (int)33);
	var_28_int = 0; var_29_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)1, (int)34);
	var_30_int = 0; var_31_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)2, (int)35);
	var_32_int = 0; var_33_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)3, (int)36);
	var_34_int = 0; var_35_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)4, (int)37);
	var_36_int = 0; var_37_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)5, (int)38);
	var_38_int = 0; var_39_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)7, (int)40);
	var_40_int = 0; var_41_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)8, (int)41);
	var_42_int = 0; var_43_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)9, (int)42);
	var_44_int = 0; var_45_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)10, (int)43);
	var_46_int = 0; var_47_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)11, (int)44);
	var_48_int = 0; var_49_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)20, (int)54);
	var_50_int = 0; var_51_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)18, (int)55);
	var_52_int = 0; var_53_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)12, (int)45);
	var_54_int = 0; var_55_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)13, (int)46);
	var_56_int = 0; var_57_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)14, (int)47);
	var_58_int = 0; var_59_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)15, (int)48);
	var_60_int = 0; var_61_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)16, (int)49);
	var_62_int = 0; var_63_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)17, (int)50);
	var_64_int = 0; var_65_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)21, (int)56);
	var_66_int = 0; var_67_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)100, (int)52);
	var_68_int = 0; var_69_int = 0;
	func_301(var_19_bool, var_20_int, var_21_string, (int)101, (int)53);
	func_454(var_21_string);
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_701(var_124_int)
{
	var_125_int = 0;
	func_13(var_124_int, var_125_int);
	var_128_int = 0;
	func_18(var_128_int);
	var_124_int = var_125_int * var_128_int;
	return 0;
}


func_709(var_0_int, var_2_int)
{
	var_122_int = 0; var_123_int = 0;
	var_124_int = 0;
	func_701(var_124_int);
	var_123_int = var_124_int - var_2_int;
	var_130_bool = var_123_int < (int)0;
	if(var_130_bool != 0) {
		var_123_int = 0;
	}
	var_131_int = -var_0_int;
	var_132_bool = var_131_int > var_123_int;
	if(var_132_bool != 0) {
		var_0_int = -var_123_int;
	} else {
			var_143_bool = var_0_int > (int)0;
			if(var_143_bool == 0) goto Label_727;
			var_0_int = 0;
	}
Label_727:
	var_134_bool = var_123_int == (int)0;
	if(var_134_bool != 0) {
		var_136_string = "";
		func_224(var_136_string);
		SendMessage((int)16384, var_136_string);
	} else {
		var_137_int = -var_0_int;
		var_139_float = var_137_int * (int)100;
		var_140_float = var_139_float / var_123_int;
		var_141_string = "";
		func_224(var_141_string);
		SendMessage(var_140_float, var_141_string);

	}
	return 2;
	
}


func_454(var_8_object)
{
	var_70_int = 0; var_71_int = 0; var_72_int = 0; var_73_int = 0; var_74_int = 0; var_75_string = ""; var_76_int = 0; var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0; var_81_string = "";
	func_509(var_80_int, var_81_string);
	@@@var_8_object:size(var_76_int);
	var_77_int = 0;
	
Label_461:
	var_90_bool = var_77_int < var_76_int;
	if(var_90_bool != 0) {
		@@@var_8_object:get(var_78_int, var_77_int);
		GetBindType(var_79_int, var_78_int);
		var_92_bool = var_79_int == (int)0;
		if(var_92_bool != 0) {
			goto Label_505;
		EMIT "GOTO 0x1f9";

		Label_505:
			var_77_int = var_77_int + (int)1;
			goto Label_461;
		}
		var_95_bool = var_79_int == (int)1;
		if(var_95_bool != 0) {
			GetBindAction(var_80_int, var_78_int);
			var_96_int = 0; var_97_int = 0;
			var_80_int = var_96_int;
			var_77_int = var_97_int;
			func_524(var_80_int, var_81_string, var_96_int, var_97_int);
			goto Label_505;
		}
		var_111_bool = var_79_int == (int)2;
		if(var_111_bool == 0) goto Label_505;
		GetBindCommand(var_81_string, var_78_int);
		var_113_bool = var_81_string == "qsave";
		if(var_113_bool != 0) {
			var_114_int = 0; var_115_int = 0;
			var_77_int = var_115_int;
			func_524(var_80_int, var_81_string, (int)100, var_115_int);
			goto Label_505;
		}
		var_117_bool = var_81_string == "qload";
		if(var_117_bool == 0) goto Label_505;
		var_118_int = 0; var_119_int = 0;
		var_77_int = var_119_int;
		func_524(var_80_int, var_81_string, (int)101, var_119_int);
	}
	return 12;
}


func_73(var_5_object, var_7_object, var_8_object, var_10_int, var_11_bool, var_12_bool, var_32_int)
{
	var_33_bool = 0; var_34_int = 0; var_35_object = Obj(); var_36_int = 0; var_37_bool = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_object = Obj(); var_45_int = 0; var_46_bool = 0; var_47_bool = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0;
	var_51_bool = 0;
	var_51_bool = 0;
	var_53_bool = var_32_int != (int)-1;
	if(var_53_bool != 0) {
		var_55_bool = var_32_int != (int)27;
		if(var_55_bool != 0) {
			var_51_bool = 1;
		}
	}
	if(var_51_bool != 0) {
		IsValidVirtualKey(var_42_bool, var_32_int);
		var_56_bool = var_42_bool;
		if(var_56_bool != 0) {
			@@@var_5_object:get(var_43_int, var_10_int);
			Unbind(var_32_int);
			@@@var_7_object:get(var_44_object, var_10_int);
			@@var_44_object:size(var_45_int);
			var_58_bool = var_32_int >= (int)256;
			if(var_58_bool != 0) {
				var_46_bool = 1;
			} else {
							var_46_bool = 0;
		}
						Trace("wrong key code");
		}
		var_48_int = 0;

	Label_103:
		var_59_bool = var_48_int < var_45_int;
		if(var_59_bool != 0) {
			@@var_44_object:get(var_49_int, var_48_int);
			@@@var_8_object:get(var_50_int, var_49_int);
			var_60_bool = var_46_bool;
			if(var_60_bool != 0) {
				var_62_bool = var_50_int >= (int)256;
				if(var_62_bool != 0) {
					Unbind(var_50_int);
				} else {
			} else {
					var_172_bool = var_50_int < (int)256;
					if(var_172_bool == 0) goto Label_123;
					Unbind(var_50_int);

			}
			Label_123:
				var_48_int = var_48_int + (int)1;
				goto Label_103;

			}
		}
		Bind(var_32_int, var_43_int);
		func_312(var_46_bool, var_47_bool, var_48_int, var_49_int, var_50_int);
		var_44_object = 0;
		goto Label_136;
	}
Label_136:
	var_10_int = -1;
	var_11_bool = false;
	var_12_bool = false;
	ReleaseKeyboard();
	ReleaseMouse();
	SendMessageToParent((int)1);
	return 18;
	
}


func_218()
{
	return 0;
}


func_220()
{
	return 0;
}


func_605(var_0_int, var_20_float)
{
	var_21_int = 0; var_22_int = 0;
	var_23_int = 0;
	func_18(var_23_int);
	var_24_float = var_20_float * var_23_int;
	var_22_int = var_24_float / (int)2;
	var_0_int = var_0_int + var_22_int;
	func_709(var_21_int, var_22_int);
	return 2;
}


func_222()
{
	return 0;
}


func_224(var_136_string)
{
	var_136_string = "scrollbar";
	return 0;
}


func_226(var_1_int, var_6_object, var_7_object, var_9_object, var_10_int, var_27_int, var_28_int, var_29_int)
{
	var_30_string = ""; var_31_int = 0; var_32_int = 0; var_33_string = ""; var_34_string = ""; var_35_object = Obj(); var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_string = ""; var_40_int = 0; var_41_string = ""; var_42_int = 0; var_43_int = 0; var_44_string = ""; var_45_string = ""; var_46_object = Obj(); var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_string = ""; var_51_int = 0;
	var_52_bool = var_27_int == var_10_int;
	if(var_52_bool != 0) {
		var_54_int = 0;
		func_18(var_54_int);
		StretchBlit("whitepixel", var_28_int, var_29_int, var_1_int, var_54_int);
		var_55_string = ""; var_56_int = 0;
		func_747(var_55_string, (int)108);
		var_55_string = var_41_string;
		GetTextWidth(var_42_int, "default", var_41_string);
		var_61_int = var_1_int - var_42_int;
		var_63_float = var_61_int / (int)2;
		var_64_int = var_28_int + var_63_float;
		Print("default", var_64_int, var_29_int, var_41_string, (float)0.250980406999588, (float)0.250980406999588, (float)0.250980406999588);
		return 22;
	}
	@@@var_6_object:get(var_43_int, var_27_int);
	var_68_string = ""; var_69_int = 0;
	var_43_int = var_69_int;
	func_747(var_68_string, var_69_int);
	var_68_string = var_44_string;
	@@@var_7_object:get(var_46_object, var_27_int);
	@@var_46_object:size(var_47_int);
	var_48_int = 0;
	
Label_266:
	var_70_bool = var_48_int < var_47_int;
	if(var_70_bool != 0) {
		var_71_int = var_48_int;
		if(var_71_int != 0) {
			var_45_string = var_45_string + " , ";
		}
		@@var_46_object:get(var_49_int, var_48_int);
		@@@var_9_object:get(var_50_string, var_49_int);
		var_45_string = var_45_string + var_50_string;
		var_48_int = var_48_int + (int)1;
		goto Label_266;
	}
	Print("default", var_28_int, var_29_int, var_44_string, (float)0.5568627715110779, (float)0.5568627715110779, (float)0.5568627715110779);
	var_78_int = var_47_int;
	if(var_78_int != 0) {
		GetTextWidth(var_51_int, "default", var_45_string);
		var_81_int = var_28_int + var_1_int;
		var_82_int = var_81_int - var_51_int;
		Print("default", var_82_int, var_29_int, var_45_string, (float)0.5568627715110779, (float)0.5568627715110779, (float)0.5568627715110779);
	}
	return 22;
}
EMIT "Stack[-6] = 0";


func_617(var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_int = 0; var_23_int = 0;
	var_17_int = var_22_int;
	var_18_int = var_23_int;
	func_685(var_21_int, var_22_int, var_23_int);
	var_21_int = var_20_int;
	var_36_bool = var_20_int != (int)-1;
	if(var_36_bool != 0) {
		var_37_int = 0; var_38_int = 0; var_39_int = 0;
		var_20_int = var_37_int;
		var_17_int = var_38_int;
		var_18_int = var_39_int;
		func_147(var_38_int, var_39_int);
	}
	return 2;
}


func_747(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = "";
	GetStringByID(var_58_string, var_56_int);
	var_58_string = var_55_string;
	return 2;
}


func_634(var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_int = 0; var_23_int = 0;
	var_17_int = var_22_int;
	var_18_int = var_23_int;
	func_685(var_21_int, var_22_int, var_23_int);
	var_21_int = var_20_int;
	var_36_bool = var_20_int != (int)-1;
	if(var_36_bool != 0) {
		var_37_int = 0; var_38_int = 0; var_39_int = 0;
		var_20_int = var_37_int;
		var_17_int = var_38_int;
		var_18_int = var_39_int;
		func_218();
	}
	return 2;
}


func_509(var_5_object, var_7_object)
{
	var_82_int = 0; var_83_int = 0; var_84_object = Obj(); var_85_int = 0; var_86_int = 0; var_87_object = Obj();
	@@@var_5_object:size(var_85_int);
	var_86_int = 0;
	
Label_513:
	var_88_bool = var_86_int < var_85_int;
	if(var_88_bool != 0) {
		@@@var_7_object:get(var_87_object, var_86_int);
		@@var_87_object:clear();
		var_87_object = 0;
		var_86_int = var_86_int + (int)1;
		goto Label_513;
	}
	return 6;
}


