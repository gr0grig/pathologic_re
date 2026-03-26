// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetVariable/2,SetVariable/2,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:ood12Littleboy1|W:ood12Littleboy2|W:d12q01DankoKnowHeIsToy|W:player|W:ui/NPC_None.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x26c
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc0 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x261 vars=object
// @EVENT_26: op=0x27c vars=string
// @EVENT_5: op=0x293 vars=
// @EVENT_6: op=0x298 vars=
// @PE: 0x3f,0xb0,0xc0,0x261,0x331,0x363,0x369,0x36f,0x375,0x381

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_839();
		var_11_bool = var_7_bool == (int)16245;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_873();
		}
		var_17_bool = var_7_bool == (int)16256;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_873();
		}
		var_21_bool = var_6_int == (int)16209;
		if(var_21_bool != 0) {
			var_22_bool = 0; var_23_object = Obj();
			var_23_object = var_1_object;
			func_885(var_23_object);
			if(var_22_bool != 0) {
				var_30_object = Obj(); var_31_object = Obj();
				var_30_object = var_1_object;
				var_31_object = var_0_object;
				func_867();
				var_34_object = Obj(); var_35_object = Obj();
				var_34_object = var_1_object;
				var_35_object = var_0_object;
				func_879();
				var_38_string = "";
				func_176(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)14956);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)14957, (int)16211, (int)16210);
				@@@var_0_object:AddReply((int)14975, (int)16231, (int)16230);
				@@@var_0_object:AddReply((int)14977, (int)16233, (int)16232);
				return 0;
			}
			var_63_string = "";
			func_176(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14988);
			@@@var_0_object:ClearReplies();
			var_65_bool = 0; var_66_object = Obj();
			var_66_object = var_1_object;
			func_897(var_66_object);
			if(var_65_bool != 0) {
				@@@var_0_object:AddReply((int)14990, (int)16246, (int)16245);
			}
			var_74_bool = 0; var_75_object = Obj();
			var_75_object = var_1_object;
			func_897(var_75_object);
			if(var_74_bool != 0) {
				@@@var_0_object:AddReply((int)15000, (int)16257, (int)16256);
			}
			@@@var_0_object:AddReply((int)14989, (int)-1, (int)16244);
			return 0;
		}
		var_83_bool = var_6_int == (int)16257;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_176(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)15001);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15002, (int)16251, (int)16258);
			@@@var_0_object:AddReply((int)15003, (int)16248, (int)16260);
			return 0;
		}
		var_93_bool = var_6_int == (int)16246;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_176(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14991);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14992, (int)16248, (int)16247);
			@@@var_0_object:AddReply((int)14999, (int)16248, (int)16254);
			return 0;
		}
		var_103_bool = var_6_int == (int)16248;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_176(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14993);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14994, (int)-1, (int)16249);
			@@@var_0_object:AddReply((int)14995, (int)16251, (int)16250);
			return 0;
		}
		var_113_bool = var_6_int == (int)16251;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_176(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14996);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14997, (int)-1, (int)16252);
			@@@var_0_object:AddReply((int)14998, (int)-1, (int)16253);
			return 0;
		}
		var_123_bool = var_6_int == (int)16233;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_176(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14978);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14979, (int)16235, (int)16234);
			@@@var_0_object:AddReply((int)14987, (int)-1, (int)16242);
			return 0;
		}
		var_133_bool = var_6_int == (int)16235;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_176(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14980);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14981, (int)16237, (int)16236);
			@@@var_0_object:AddReply((int)14986, (int)-1, (int)16241);
			return 0;
		}
		var_143_bool = var_6_int == (int)16237;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_176(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14982);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14983, (int)-1, (int)16238);
			@@@var_0_object:AddReply((int)14984, (int)-1, (int)16239);
			@@@var_0_object:AddReply((int)14985, (int)-1, (int)16240);
			return 0;
		}
		var_156_bool = var_6_int == (int)16231;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_176(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14976);
			@@@var_0_object:ClearReplies();
			return 0;
		}
		var_160_bool = var_6_int == (int)16211;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_176(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14959, (int)16213, (int)16212);
			@@@var_0_object:AddReply((int)14974, (int)16213, (int)16228);
			return 0;
		}
		var_170_bool = var_6_int == (int)16213;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_176(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14960);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14961, (int)16215, (int)16214);
			@@@var_0_object:AddReply((int)14973, (int)16215, (int)16226);
			return 0;
		}
		var_180_bool = var_6_int == (int)16215;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_176(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14962);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14963, (int)16217, (int)16216);
			@@@var_0_object:AddReply((int)14968, (int)16222, (int)16221);
			return 0;
		}
		var_190_bool = var_6_int == (int)16222;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_176(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14969);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14970, (int)-1, (int)16223);
			@@@var_0_object:AddReply((int)14971, (int)-1, (int)16224);
			@@@var_0_object:AddReply((int)14972, (int)-1, (int)16225);
			return 0;
		}
		var_203_bool = var_6_int == (int)16217;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_176(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14964);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14965, (int)-1, (int)16218);
			@@@var_0_object:AddReply((int)14966, (int)-1, (int)16219);
			@@@var_0_object:AddReply((int)14967, (int)-1, (int)16220);
			return 0;
		}
		var_3_string = true;
		var_215_bool = 0;
		func_930(var_215_bool);
		if(var_215_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc1";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_751();
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
			func_680(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_846(var_14_object);
			RemoveActor(var_14_object);
		}
	}
	return 2;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_680(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_846(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_620:
	var_6_bool = 0;
	func_756(var_6_bool);
	var_9_bool = var_6_bool == 0; //@nz
	if(var_9_bool != 0) {
		Hold();
		goto Label_620;
	}
	Sleep((int)3);
	func_682();
	goto Label_620;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj();
	var_8_object = var_19_object;
	func_761(var_18_bool, var_19_object);
	var_58_bool = var_18_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_59_int = 0;
	func_926(var_59_int);
	@@var_14_object:SetNPCName(var_59_int);
	var_60_string = "";
	func_928(var_60_string);
	@@var_14_object:SetPhoto(var_60_string);
	var_61_int = 0;
	func_909(var_61_int);
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
	var_145_bool = var_17_bool == 0; //@nz
	if(var_145_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_45;
	}
	var_8_object = Obj();
	func_817();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_897(var_128_bool)
{
	var_130_int = 0; var_131_string = "";
	func_862(var_130_int, "ood12Littleboy2");
	var_133_bool = var_130_int == (int)0;
	if(var_133_bool != 0) {
		var_128_bool = 1;
		return 0;
	}
	var_128_bool = 0;
	return 0;
}


func_909(var_61_int)
{
	var_62_int = 0; var_63_int = 0;
	GetVariable("player", var_63_int);
	var_66_bool = var_63_int == (int)0;
	if(var_66_bool != 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x39c";
	}
	var_68_bool = var_63_int == (int)1;
	if(var_68_bool != 0) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
	return 2;
}


func_926(var_59_int)
{
	var_59_int = 3345;
	return 0;
}


func_928(var_60_string)
{
	var_60_string = "ui/NPC_None.png";
	return 0;
}


func_930(var_94_bool)
{
	var_94_bool = 0;
	return 0;
}


func_932(var_33_string, var_34_int)
{
	var_35_string = ""; var_36_string = "";
	var_37_int = var_34_int;
	if(var_37_int != 0) {
		"idle" = "idle" + var_34_int;
	}
	var_36_string = var_33_string;
	return 2;
}


func_680(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_682()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0;
	WaitForAnimEnd();
	var_25_bool = 0;
	func_756(var_25_bool);
	var_26_bool = var_25_bool == 0; //@nz
	if(var_26_bool != 0) {
		return 14;
	}
	func_939((int)0);
	var_27_int = var_18_int;
	var_19_int = 0;
	
Label_696:
	var_40_bool = 0;
	var_40_bool = 0;
	var_42_bool = var_19_int < (int)5;
	if(var_42_bool != 0) {
		var_43_bool = 0;
		func_756(var_43_bool);
		if(var_43_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		irand(var_20_int, (int)3);
		var_46_bool = var_20_int == (int)0;
		if(var_46_bool != 0) {
			var_47_int = var_18_int;
			if(var_47_int == 0) goto Label_729;
			irand(var_21_int, var_18_int);
			var_49_string = ""; var_50_int = 0;
			var_21_int = var_50_int;
			func_932(var_49_string, var_50_int);
			PlayAnimation("all", var_49_string);
			WaitForAnimEnd(var_22_bool);
			var_51_bool = var_22_bool == 0; //@nz
			if(var_51_bool != 0) {
			} else {
		} else {
				var_54_bool = var_20_int == (int)1;
				if(var_54_bool != 0) {
					rand(var_23_float, (int)4);
					var_57_int = var_23_float + (int)1;
					Sleep(var_57_int, var_24_bool);
					var_58_bool = var_24_bool == 0; //@nz
					if(var_58_bool != 0) {
						goto Label_750;
					}
					goto Label_747;
				}
				var_59_int = var_19_int;
				if(var_59_int == 0) goto Label_747;
				goto Label_750;
		}
		Label_747:
			var_19_int = var_19_int + (int)1;
			goto Label_696;

		}
	}
Label_750:
	return 14;
	
}


func_939(var_27_int)
{
	var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_bool = 0;
	var_30_int = 0;
	
Label_941:
	var_33_string = ""; var_34_int = 0;
	var_30_int = var_34_int;
	func_932(var_33_string, var_34_int);
	HasAnimation(var_31_bool, "all", var_33_string);
	var_38_bool = var_31_bool == 0; //@nz
	if(var_38_bool != 0) {
	} else {
		var_30_int = var_30_int + (int)1;
		goto Label_941;
	}
	var_30_int = var_27_int;
	return 4;
	
}


func_176(var_2_object, var_93_string)
{
	var_94_bool = 0;
	func_930(var_94_bool);
	var_95_bool = var_94_bool == 0; //@nz
	if(var_95_bool != 0) {
		return 0;
	}
	var_96_bool = var_93_string == var_2_object;
	if(var_96_bool != 0) {
		return 0;
	}
	var_97_string = "";
	var_93_string = var_97_string;
	func_821(var_97_string);
	var_2_object = var_93_string;
	return 0;
}


func_817()
{
	CameraSwitchToNormal();
	return 0;
}


func_821(var_97_string)
{
	var_98_float = 0; var_99_float = 0; var_100_float = 0; var_101_float = 0;
	var_103_int = "playing " + var_97_string;
	Trace(var_103_int);
	lshGetAnimTimes(var_97_string, var_100_float, var_101_float);
	lshPlayAnimation(var_100_float, var_101_float);
	var_105_int = "start: " + var_100_float;
	Trace(var_105_int);
	var_107_int = "end: " + var_101_float;
	Trace(var_107_int);
	return 4;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_77_bool = 0; var_78_object = Obj();
		var_78_object = var_1_object;
		func_885(var_78_object);
		if(var_77_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_867();
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_879();
			var_93_string = "";
			func_176(var_71_object, "Neutral");
			@@@var_0_object:SetMessage((int)14956);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14957, (int)16211, (int)16210);
			@@@var_0_object:AddReply((int)14975, (int)16231, (int)16230);
			@@@var_0_object:AddReply((int)14977, (int)16233, (int)16232);
		} else {
				var_126_string = "";
				func_176(var_71_object, "Neutral");
				@@@var_0_object:SetMessage((int)14988);
				@@@var_0_object:ClearReplies();
				var_128_bool = 0; var_129_object = Obj();
				var_129_object = var_1_object;
				func_897(var_129_object);
				if(var_128_bool != 0) {
					@@@var_0_object:AddReply((int)14990, (int)16246, (int)16245);
				}
				var_137_bool = 0; var_138_object = Obj();
				var_138_object = var_1_object;
				func_897(var_138_object);
				if(var_137_bool != 0) {
					@@@var_0_object:AddReply((int)15000, (int)16257, (int)16256);
				}
				@@@var_0_object:AddReply((int)14989, (int)-1, (int)16244);
				goto Label_146;
		}
	}
Label_146:
	var_118_bool = 0;
	func_930(var_118_bool);
	if(var_118_bool != 0) {

	Label_150:
		lshWaitForAnimEnd();
		var_119_string = var_3_string;
		if(var_119_string != 0) {
		} else {
			var_120_string = "";
			var_120_string = var_2_object;
			func_821(var_120_string);
			goto Label_150;
	}
		PlayAnimation("all", "idle");

	Label_165:
		WaitForAnimEnd();
		var_123_string = var_3_string;
		if(var_123_string != 0) {
			goto Label_175;
		}
		PlayAnimation("all", "idle");
		goto Label_165;

	}
	goto Label_175;
	
Label_175:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


func_839()
{
	var_9_bool = 0;
	func_930(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_846(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_852(var_43_cvector, var_44_cvector)
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


func_862(var_79_int, var_80_string)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable(var_80_string, var_82_int);
	var_82_int = var_79_int;
	return 2;
}


func_867()
{
	SetVariable("ood12Littleboy1", (int)1);
	return 0;
}


func_873()
{
	SetVariable("ood12Littleboy2", (int)1);
	return 0;
}


func_879()
{
	SetVariable("d12q01DankoKnowHeIsToy", (int)1);
	return 0;
}


func_751()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_756(var_6_bool)
{
	var_7_bool = 0; var_8_bool = 0;
	IsLoaded(var_8_bool);
	var_8_bool = var_6_bool;
	return 2;
}


func_885(var_77_bool)
{
	var_79_int = 0; var_80_string = "";
	func_862(var_79_int, "ood12Littleboy1");
	var_84_bool = var_79_int == (int)0;
	if(var_84_bool != 0) {
		var_77_bool = 1;
		return 0;
	}
	var_77_bool = 0;
	return 0;
}


func_761(var_18_bool, var_19_object)
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
	func_852(var_43_cvector, var_44_cvector);
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


