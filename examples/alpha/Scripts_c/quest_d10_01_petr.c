// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ood10Petr1|W:d10q01|W:ood10Petr2|W:blueprint is given|W:d10q01_blueprint|W:ood10Petr3|W:d10q01MariaSavePetr|W:tvirin|A:GetItemCountOfType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:player|W:Adding diary entry|W:ui/NPC_Black.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x2c3
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdf vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x2bb vars=object
// @EVENT_26: op=0x2c7 vars=string
// @EVENT_6: op=0x2e3 vars=
// @PE: 0x3f,0xcf,0xdf,0x2bb,0x32d,0x379,0x37f,0x388,0x38e,0x3a0,0x3a6,0x3b2,0x3be,0x3ca,0x3d6,0x3e2,0x3ec,0x3f8

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_835();
		var_11_bool = var_7_bool == (int)14074;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_904();
		}
		var_17_bool = var_7_bool == (int)14080;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_895();
		}
		var_48_bool = var_7_bool == (int)16589;
		if(var_48_bool != 0) {
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_910(var_50_object);
		}
		var_80_bool = var_7_bool == (int)14081;
		if(var_80_bool != 0) {
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_928();
		}
		var_86_bool = var_6_int == (int)14054;
		if(var_86_bool != 0) {
			var_87_bool = 0;
			var_87_bool = 0;
			var_88_bool = 0; var_89_object = Obj();
			var_89_object = var_1_object;
			func_934(var_89_object);
			if(var_88_bool != 0) {
				var_96_bool = 0; var_97_object = Obj();
				var_97_object = var_1_object;
				func_946(var_97_object);
				if(var_96_bool != 0) {
					var_87_bool = 1;
				}
			}
			if(var_87_bool != 0) {
				var_102_object = Obj(); var_103_object = Obj();
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_889();
				var_106_string = "";
				func_207(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12853);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12854, (int)14056, (int)14055);
				return 0;
			}
			var_125_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12871);
			@@@var_0_object:ClearReplies();
			var_127_bool = 0;
			var_127_bool = 0;
			var_128_bool = 0; var_129_object = Obj();
			var_129_object = var_1_object;
			func_958(var_129_object);
			if(var_128_bool != 0) {
				var_134_bool = 0; var_135_object = Obj();
				var_135_object = var_1_object;
				func_970(var_135_object);
				if(var_134_bool != 0) {
					var_127_bool = 1;
				}
			}
			if(var_127_bool != 0) {
				@@@var_0_object:AddReply((int)12872, (int)14075, (int)14074);
			}
			var_143_bool = 0;
			var_143_bool = 0;
			var_144_bool = 0; var_145_object = Obj();
			var_145_object = var_1_object;
			func_982(var_145_object);
			if(var_144_bool != 0) {
				var_150_bool = 0; var_151_object = Obj();
				var_151_object = var_1_object;
				func_994(var_150_bool, var_151_object);
				if(var_150_bool != 0) {
					var_143_bool = 1;
				}
			}
			if(var_143_bool != 0) {
				@@@var_0_object:AddReply((int)15468, (int)16586, (int)16585);
			}
			var_162_bool = 0;
			var_162_bool = 0;
			var_163_bool = 0; var_164_object = Obj();
			var_164_object = var_1_object;
			func_1004(var_164_object);
			if(var_163_bool != 0) {
				var_169_bool = 0; var_170_object = Obj();
				var_170_object = var_1_object;
				func_1016(var_170_object);
				if(var_169_bool != 0) {
					var_162_bool = 1;
				}
			}
			if(var_162_bool != 0) {
				@@@var_0_object:AddReply((int)12879, (int)14082, (int)14081);
			}
			@@@var_0_object:AddReply((int)12890, (int)-1, (int)14092);
			return 0;
		}
		var_182_bool = var_6_int == (int)14082;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12880);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12881, (int)14084, (int)14083);
			return 0;
		}
		var_189_bool = var_6_int == (int)14084;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12883, (int)14086, (int)14085);
			return 0;
		}
		var_196_bool = var_6_int == (int)14086;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12885, (int)14088, (int)14087);
			return 0;
		}
		var_203_bool = var_6_int == (int)14088;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12886);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12887, (int)14090, (int)14089);
			return 0;
		}
		var_210_bool = var_6_int == (int)14090;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12888);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12889, (int)-1, (int)14091);
			return 0;
		}
		var_217_bool = var_6_int == (int)16586;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)15469);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15470, (int)16588, (int)16587);
			return 0;
		}
		var_224_bool = var_6_int == (int)16588;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)15471);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15472, (int)-1, (int)16589);
			return 0;
		}
		var_231_bool = var_6_int == (int)14075;
		if(var_231_bool != 0) {
			var_232_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12873);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12874, (int)14077, (int)14076);
			return 0;
		}
		var_238_bool = var_6_int == (int)14077;
		if(var_238_bool != 0) {
			var_239_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12875);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12876, (int)14079, (int)14078);
			return 0;
		}
		var_245_bool = var_6_int == (int)14079;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12877);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12878, (int)-1, (int)14080);
			return 0;
		}
		var_252_bool = var_6_int == (int)14056;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12855);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12856, (int)14058, (int)14057);
			return 0;
		}
		var_259_bool = var_6_int == (int)14058;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12857);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12858, (int)14061, (int)14059);
			@@@var_0_object:AddReply((int)12859, (int)14064, (int)14060);
			@@@var_0_object:AddReply((int)12868, (int)14070, (int)14069);
			return 0;
		}
		var_272_bool = var_6_int == (int)14064;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12863);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12864, (int)-1, (int)14065);
			return 0;
		}
		var_279_bool = var_6_int == (int)14061;
		if(var_279_bool != 0) {
			var_280_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12860);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12861, (int)14063, (int)14062);
			return 0;
		}
		var_286_bool = var_6_int == (int)14063;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12862);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12865, (int)14067, (int)14066);
			return 0;
		}
		var_293_bool = var_6_int == (int)14067;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12866);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12867, (int)14070, (int)14068);
			return 0;
		}
		var_300_bool = var_6_int == (int)14070;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_207(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12869);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12870, (int)-1, (int)14072);
			return 0;
		}
		var_3_string = true;
		var_306_bool = 0;
		func_1134(var_306_bool);
		if(var_306_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe0";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0;
	var_10_bool = var_6_string == "cleanup";
	if(var_10_bool != 0) {
		var_0_object = true;
		IsLoaded(var_8_bool);
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = var_8_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_bool = 0;
			func_755(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_842(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_738;
		var_0_object = false;
	}
Label_738:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_755(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_842(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_707:
	Hold();
	goto Label_707;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj();
	var_8_object = var_19_object;
	func_757(var_18_bool, var_19_object);
	var_58_bool = var_18_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_59_int = 0;
	func_1130(var_59_int);
	@@var_14_object:SetNPCName(var_59_int);
	var_60_string = "";
	func_1132(var_60_string);
	@@var_14_object:SetPhoto(var_60_string);
	var_61_int = 0;
	func_1081(var_61_int);
	@@var_14_object:SetPlayerName(var_61_int);
	IsOverrideActive(var_15_bool);
	var_69_bool = var_15_bool;
	if(var_69_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_70_object = Obj(); var_71_object = Obj();
	var_8_object = var_70_object;
	var_14_object = var_71_object;
	TaskCall(1);
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_45:
	var_179_bool = var_17_bool == 0; //@nz
	if(var_179_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_45;
	}
	var_8_object = Obj();
	func_813();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1028(var_150_bool, var_151_object)
{
	var_152_int = 0; var_153_int = 0;
	@@var_151_object:GetItemCountOfType(var_153_int, "tvirin");
	var_156_bool = var_153_int >= (int)5;
	if(var_156_bool != 0) {
		var_150_bool = 1;
		return 2;
	}
	var_150_bool = 0;
	return 2;
}


func_904()
{
	SetVariable("ood10Petr2", (int)1);
	return 0;
}


func_910(var_49_object)
{
	SetVariable("d10q01", (int)3);
	func_1114();
	Trace("blueprint is given");
	var_63_object = Obj(); var_64_string = ""; var_65_int = 0;
	var_49_object = var_63_object;
	func_876(var_63_object, "d10q01_blueprint", (int)1);
	return 0;
}


func_1039(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj();
	GetDiaryRoot(var_39_object);
	var_40_bool = var_39_object == 0; //@nz
	if(var_40_bool != 0) {
		Trace("Can't retrieve diary root");
		var_37_object = 0;
		return 2;
	}
	var_39_object = var_37_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1052(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0;
	func_1039(Obj());
	var_37_object = var_34_object;
	@@var_34_object:Find(var_30_int, var_35_object);
	var_42_bool = var_35_object == 0; //@nz
	if(var_42_bool != 0) {
		var_44_int = "Can't find diary parent with id: " + var_30_int;
		Trace(var_44_int);
		var_28_bool = 0;
		return 6;
	}
	@@var_35_object:AddChild(var_29_object);
	SetVariable("player_diary", (int)1);
	@@var_29_object:GetCategory(var_36_int);
	SetDiarySection(var_36_int);
	var_28_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_928()
{
	SetVariable("ood10Petr3", (int)1);
	return 0;
}


func_934(var_78_bool)
{
	var_80_int = 0; var_81_string = "";
	func_858(var_80_int, "ood10Petr1");
	var_85_bool = var_80_int == (int)0;
	if(var_85_bool != 0) {
		var_78_bool = 1;
		return 0;
	}
	var_78_bool = 0;
	return 0;
}


func_813()
{
	CameraSwitchToNormal();
	return 0;
}


func_817(var_100_string)
{
	var_101_float = 0; var_102_float = 0; var_103_float = 0; var_104_float = 0;
	var_106_int = "playing " + var_100_string;
	Trace(var_106_int);
	lshGetAnimTimes(var_100_string, var_103_float, var_104_float);
	lshPlayAnimation(var_103_float, var_104_float);
	var_108_int = "start: " + var_103_float;
	Trace(var_108_int);
	var_110_int = "end: " + var_104_float;
	Trace(var_110_int);
	return 4;
}


func_946(var_86_bool)
{
	var_88_int = 0; var_89_string = "";
	func_858(var_88_int, "d10q01MariaSavePetr");
	var_91_bool = var_88_int == (int)1;
	if(var_91_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_1081(var_61_int)
{
	var_62_int = 0; var_63_int = 0;
	GetVariable("player", var_63_int);
	var_66_bool = var_63_int == (int)0;
	if(var_66_bool != 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x448";
	}
	var_68_bool = var_63_int == (int)1;
	if(var_68_bool != 0) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
	return 2;
}


func_958(var_126_bool)
{
	var_128_int = 0; var_129_string = "";
	func_858(var_128_int, "d10q01");
	var_131_bool = var_128_int == (int)1;
	if(var_131_bool != 0) {
		var_126_bool = 1;
		return 0;
	}
	var_126_bool = 0;
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_77_bool = 0;
		var_77_bool = 0;
		var_78_bool = 0; var_79_object = Obj();
		var_79_object = var_1_object;
		func_934(var_79_object);
		if(var_78_bool != 0) {
			var_86_bool = 0; var_87_object = Obj();
			var_87_object = var_1_object;
			func_946(var_87_object);
			if(var_86_bool != 0) {
				var_77_bool = 1;
			}
		}
		if(var_77_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_889();
			var_96_string = "";
			func_207(var_71_object, "Neutral");
			@@@var_0_object:SetMessage((int)12853);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12854, (int)14056, (int)14055);
		} else {
				var_123_string = "";
				func_207(var_71_object, "Neutral");
				@@@var_0_object:SetMessage((int)12871);
				@@@var_0_object:ClearReplies();
				var_125_bool = 0;
				var_125_bool = 0;
				var_126_bool = 0; var_127_object = Obj();
				var_127_object = var_1_object;
				func_958(var_127_object);
				if(var_126_bool != 0) {
					var_132_bool = 0; var_133_object = Obj();
					var_133_object = var_1_object;
					func_970(var_133_object);
					if(var_132_bool != 0) {
						var_125_bool = 1;
					}
				}
				if(var_125_bool != 0) {
					@@@var_0_object:AddReply((int)12872, (int)14075, (int)14074);
				}
				var_141_bool = 0;
				var_141_bool = 0;
				var_142_bool = 0; var_143_object = Obj();
				var_143_object = var_1_object;
				func_982(var_143_object);
				if(var_142_bool != 0) {
					var_148_bool = 0; var_149_object = Obj();
					var_149_object = var_1_object;
					func_994(var_148_bool, var_149_object);
					if(var_148_bool != 0) {
						var_141_bool = 1;
					}
				}
				if(var_141_bool != 0) {
					@@@var_0_object:AddReply((int)15468, (int)16586, (int)16585);
				}
				var_160_bool = 0;
				var_160_bool = 0;
				var_161_bool = 0; var_162_object = Obj();
				var_162_object = var_1_object;
				func_1004(var_162_object);
				if(var_161_bool != 0) {
					var_167_bool = 0; var_168_object = Obj();
					var_168_object = var_1_object;
					func_1016(var_168_object);
					if(var_167_bool != 0) {
						var_160_bool = 1;
					}
				}
				if(var_160_bool != 0) {
					@@@var_0_object:AddReply((int)12879, (int)14082, (int)14081);
				}
				@@@var_0_object:AddReply((int)12890, (int)-1, (int)14092);
				goto Label_177;
		}
	}
Label_177:
	var_115_bool = 0;
	func_1134(var_115_bool);
	if(var_115_bool != 0) {

	Label_181:
		lshWaitForAnimEnd();
		var_116_string = var_3_string;
		if(var_116_string != 0) {
		} else {
			var_117_string = "";
			var_117_string = var_2_object;
			func_817(var_117_string);
			goto Label_181;
	}
		PlayAnimation("all", "idle");

	Label_196:
		WaitForAnimEnd();
		var_120_string = var_3_string;
		if(var_120_string != 0) {
			goto Label_206;
		}
		PlayAnimation("all", "idle");
		goto Label_196;

	}
	goto Label_206;
	
Label_206:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


func_835()
{
	var_9_bool = 0;
	func_1134(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_970(var_132_bool)
{
	var_134_int = 0; var_135_string = "";
	func_858(var_134_int, "ood10Petr2");
	var_137_bool = var_134_int == (int)0;
	if(var_137_bool != 0) {
		var_132_bool = 1;
		return 0;
	}
	var_132_bool = 0;
	return 0;
}


func_842(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1098()
{
	var_22_object = Obj(); var_23_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_23_object, (int)189, (int)1, (int)15474);
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0;
	var_23_object = var_29_object;
	func_1052(var_28_bool, var_29_object, (int)186);
	return 2;
}
EMIT "Stack[-1] = 0";


func_207(var_2_object, var_96_string)
{
	var_97_bool = 0;
	func_1134(var_97_bool);
	var_98_bool = var_97_bool == 0; //@nz
	if(var_98_bool != 0) {
		return 0;
	}
	var_99_bool = var_96_string == var_2_object;
	if(var_99_bool != 0) {
		return 0;
	}
	var_100_string = "";
	var_96_string = var_100_string;
	func_817(var_100_string);
	var_2_object = var_96_string;
	return 0;
}


func_848(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0;
	var_48_int = var_44_cvector | var_44_cvector;
	var_47_float = sqrt(var_48_int);
	var_49_float = 9.999999974752427e-07;
	var_50_bool = var_47_float < var_49_float;
	if(var_50_bool != 0) {
		var_43_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_43_cvector = var_44_cvector / var_47_float;
	return 2;
}


func_982(var_142_bool)
{
	var_144_int = 0; var_145_string = "";
	func_858(var_144_int, "d10q01");
	var_147_bool = var_144_int == (int)2;
	if(var_147_bool != 0) {
		var_142_bool = 1;
		return 0;
	}
	var_142_bool = 0;
	return 0;
}


func_1114()
{
	var_53_object = Obj(); var_54_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_54_object, (int)190, (int)1, (int)15475);
	var_59_bool = 0; var_60_object = Obj(); var_61_int = 0;
	var_54_object = var_60_object;
	func_1052(var_59_bool, var_60_object, (int)186);
	return 2;
}
EMIT "Stack[-1] = 0";


func_858(var_80_int, var_81_string)
{
	var_82_int = 0; var_83_int = 0;
	GetVariable(var_81_string, var_83_int);
	var_83_int = var_80_int;
	return 2;
}


func_863(var_68_object, var_69_object, var_70_int)
{
	var_71_int = 0; var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_int = 0; var_76_bool = 0;
	@@var_69_object:GetItemID(var_74_int);
	GetInvItemProperty(var_75_int, var_74_int, "Category");
	@@var_68_object:AddItem(var_76_bool, var_69_object, var_75_int, var_70_int);
	var_78_bool = var_76_bool == 0; //@nz
	if(var_78_bool != 0) {
		@@var_68_object:DropItems(var_69_object, var_70_int);
	}
	return 6;
}


func_994(var_148_bool, var_149_object)
{
	var_150_bool = 0; var_151_object = Obj();
	var_149_object = var_151_object;
	func_1028(var_150_bool, var_151_object);
	if(var_150_bool != 0) {
		var_148_bool = 1;
		return 0;
	}
	var_148_bool = 0;
	return 0;
}


func_1130(var_59_int)
{
	var_59_int = 4029;
	return 0;
}


func_1132(var_60_string)
{
	var_60_string = "ui/NPC_Black.png";
	return 0;
}


func_1004(var_161_bool)
{
	var_163_int = 0; var_164_string = "";
	func_858(var_163_int, "d10q01");
	var_166_bool = var_163_int == (int)3;
	if(var_166_bool != 0) {
		var_161_bool = 1;
		return 0;
	}
	var_161_bool = 0;
	return 0;
}


func_1134(var_97_bool)
{
	var_97_bool = 0;
	return 0;
}


func_876(var_63_object, var_64_string, var_65_int)
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateInvItem(var_67_object);
	@@var_67_object:SetItemName(var_64_string);
	var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0;
	var_63_object = var_68_object;
	var_67_object = var_69_object;
	var_65_int = var_70_int;
	func_863(var_68_object, var_69_object, var_70_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_755(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_757(var_18_bool, var_19_object)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0;
	@@var_19_object:GetPosition(var_29_cvector);
	@@var_19_object:GetEyesHeight(var_28_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	var_36_float = var_36_float + var_28_float;
	SetByIndex(var_29_cvector, 1) = var_36_float;
	GetPosition(var_30_cvector);
	GetEyesHeight(var_28_float);
	var_37_float = GetByIndex(var_30_cvector, 1);
	var_37_float = var_37_float + var_28_float;
	SetByIndex(var_30_cvector, 1) = var_37_float;
	var_31_cvector = var_29_cvector - var_30_cvector;
	var_38_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (float)0;
	var_39_int = var_31_cvector | var_31_cvector;
	var_40_float = sqrt(var_39_int);
	var_31_cvector = var_31_cvector / var_40_float;
	var_32_cvector = -var_31_cvector;
	var_42_float = var_31_cvector * (int)70;
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_44_cvector = var_32_cvector ^ CVector(0.0, 1.0, 0.0);
	func_848(var_43_cvector, var_44_cvector);
	var_52_float = var_43_cvector * (int)25;
	var_53_int = var_42_float + var_52_float;
	var_33_cvector = var_53_int - CVector(0.0, 10.0, 0.0);
	var_34_cvector = var_30_cvector + var_33_cvector;
	IsOverrideActive(var_35_bool);
	var_55_bool = var_35_bool;
	if(var_55_bool != 0) {
		var_18_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_34_cvector, var_32_cvector);
	var_56_float = GetByIndex(var_33_cvector, 0);
	var_57_float = GetByIndex(var_33_cvector, 2);
	Rotate(var_56_float, var_57_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 16;
}


func_1016(var_167_bool)
{
	var_169_int = 0; var_170_string = "";
	func_858(var_169_int, "ood10Petr3");
	var_172_bool = var_169_int == (int)0;
	if(var_172_bool != 0) {
		var_167_bool = 1;
		return 0;
	}
	var_167_bool = 0;
	return 0;
}


func_889()
{
	SetVariable("ood10Petr1", (int)1);
	return 0;
}


func_895()
{
	SetVariable("d10q01", (int)2);
	func_1098();
	return 0;
}


