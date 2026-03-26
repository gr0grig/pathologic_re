// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,TriggerWorld/2,SetVariable/2,GetInvItemByName/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:d7q01|W:ood7UBirdmask1|W:ureport is given|W:d7q01_ureport|W:quest_d7_01|W:kill_player|W:sobor_teleport|A:GetItemCount|W:bird_mask|W:bird_balahon|A:GetItem|A:IsItemSelected|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Adding diary entry|W:ui/NPC_Black.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x27b
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe1 vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x27f vars=object
// @PE: 0x3f,0xd1,0xe1,0x27f,0x2bf,0x311,0x317,0x320,0x326,0x331,0x338,0x33f,0x34b,0x357,0x361

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_725();
		var_10_bool = var_6_int == (int)14419;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_800();
			var_15_object = Obj(); var_16_object = Obj();
			var_15_object = var_1_object;
			var_16_object = var_0_object;
			func_806(var_16_object);
			var_34_object = Obj(); var_35_object = Obj();
			var_34_object = var_1_object;
			var_35_object = var_0_object;
			func_785();
		}
		var_39_bool = var_6_int == (int)14487;
		if(var_39_bool != 0) {
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_817();
		}
		var_49_bool = var_6_int == (int)14432;
		if(var_49_bool != 0) {
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_817();
		}
		var_53_bool = var_6_int == (int)14562;
		if(var_53_bool != 0) {
			var_54_object = Obj(); var_55_object = Obj();
			var_54_object = var_1_object;
			var_55_object = var_0_object;
			func_817();
		}
		var_57_bool = var_6_int == (int)14563;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_824();
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_object;
			func_791();
		}
		var_93_bool = var_5_int == (int)13343;
		if(var_93_bool != 0) {
			var_94_bool = 0;
			var_94_bool = 0;
			var_95_bool = 0; var_96_object = Obj();
			var_96_object = var_1_object;
			func_843(var_96_object);
			if(var_95_bool != 0) {
				var_103_bool = 0; var_104_object = Obj();
				var_104_object = var_1_object;
				func_865(var_104_object);
				if(var_103_bool != 0) {
					var_94_bool = 1;
				}
			}
			if(var_94_bool != 0) {
				var_109_string = "";
				func_209(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)12188);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12189, (int)14396, (int)13344);
				return 0;
			}
			var_128_bool = 0;
			var_128_bool = 0;
			var_129_bool = 0; var_130_object = Obj();
			var_130_object = var_1_object;
			func_855(var_129_bool, var_130_object);
			if(var_129_bool != 0) {
				var_167_bool = 0; var_168_object = Obj();
				var_168_object = var_1_object;
				func_831(var_168_object);
				if(var_167_bool != 0) {
					var_128_bool = 1;
				}
			}
			if(var_128_bool != 0) {
				var_173_string = "";
				func_209(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)13197);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13198, (int)14433, (int)14421);
				@@@var_0_object:AddReply((int)13199, (int)14428, (int)14422);
				@@@var_0_object:AddReply((int)13200, (int)14424, (int)14423);
				@@@var_0_object:AddReply((int)13330, (int)-1, (int)14562);
				@@@var_0_object:AddReply((int)13331, (int)-1, (int)14563);
				return 0;
			}
			var_190_bool = 0; var_191_object = Obj();
			var_191_object = var_1_object;
			func_831(var_191_object);
			if(var_190_bool != 0) {
				var_192_string = "";
				func_209(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)13175);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13177, (int)14398, (int)14397);
				@@@var_0_object:AddReply((int)13195, (int)14411, (int)14417);
				@@@var_0_object:AddReply((int)13193, (int)-1, (int)14415);
				return 0;
			}
		}
		var_204_bool = var_5_int == (int)14398;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_209(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13178);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13179, (int)14402, (int)14399);
			@@@var_0_object:AddReply((int)13180, (int)14403, (int)14400);
			@@@var_0_object:AddReply((int)13181, (int)14404, (int)14401);
			return 0;
		}
		var_217_bool = var_5_int == (int)14404;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_209(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13184);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13189, (int)-1, (int)14409);
			@@@var_0_object:AddReply((int)13190, (int)14411, (int)14410);
			return 0;
		}
		var_227_bool = var_5_int == (int)14403;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_209(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13183);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13187, (int)-1, (int)14407);
			@@@var_0_object:AddReply((int)13188, (int)14411, (int)14408);
			return 0;
		}
		var_237_bool = var_5_int == (int)14402;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_209(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13182);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13185, (int)14411, (int)14405);
			@@@var_0_object:AddReply((int)13186, (int)-1, (int)14406);
			return 0;
		}
		var_247_bool = var_5_int == (int)14411;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_209(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13191);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13192, (int)-1, (int)14414);
			return 0;
		}
		var_254_bool = var_5_int == (int)14424;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_209(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13201);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13202, (int)14429, (int)14425);
			@@@var_0_object:AddReply((int)13203, (int)14433, (int)14426);
			@@@var_0_object:AddReply((int)13204, (int)14428, (int)14427);
			return 0;
		}
		var_267_bool = var_5_int == (int)14429;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_209(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13206);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13207, (int)-1, (int)14430);
			return 0;
		}
		var_274_bool = var_5_int == (int)14428;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_209(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13205);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13208, (int)-1, (int)14431);
			@@@var_0_object:AddReply((int)13209, (int)-1, (int)14432);
			return 0;
		}
		var_284_bool = var_5_int == (int)14433;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_209(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13210);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13211, (int)-1, (int)14434);
			@@@var_0_object:AddReply((int)13260, (int)-1, (int)14487);
			return 0;
		}
		var_294_bool = var_5_int == (int)14396;
		if(var_294_bool != 0) {
			var_295_string = "";
			func_209(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13176);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13196, (int)-1, (int)14419);
			return 0;
		}
		var_3_string = true;
		var_300_bool = 0;
		func_1004(var_300_bool);
		if(var_300_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe2";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj();
	var_5_object = var_7_object;
	TaskCall(0);
	func_0(var_8_object, var_6_int, var_7_object);
	TaskReturn();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_635:
	Hold();
	goto Label_635;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0;
	var_0_object = var_7_object;
	var_17_bool = 0; var_18_object = Obj();
	var_7_object = var_18_object;
	func_647(var_17_bool, var_18_object);
	var_57_bool = var_17_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	CreateDialog(var_13_object);
	var_58_int = 0;
	func_1000(var_58_int);
	@@var_13_object:SetNPCName(var_58_int);
	var_59_string = "";
	func_1002(var_59_string);
	@@var_13_object:SetPhoto(var_59_string);
	var_60_int = 0;
	func_967(var_60_int);
	@@var_13_object:SetPlayerName(var_60_int);
	IsOverrideActive(var_14_bool);
	var_68_bool = var_14_bool;
	if(var_68_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	DoDialog(var_13_object);
	var_69_object = Obj(); var_70_object = Obj();
	var_7_object = var_69_object;
	var_13_object = var_70_object;
	TaskCall(1);
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object);
	TaskReturn();
	@@var_13_object:IsDialogEnd(var_16_bool);
	
Label_45:
	var_193_bool = var_16_bool == 0; //@nz
	if(var_193_bool != 0) {
		sync();
		@@var_13_object:IsDialogEnd(var_16_bool);
		goto Label_45;
	}
	var_7_object = Obj();
	func_703();
	StopDialog(var_13_object);
	@@var_13_object:GetReturnValue((int)-1);
	var_15_int = var_6_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_707(var_95_string)
{
	var_96_float = 0; var_97_float = 0; var_98_float = 0; var_99_float = 0;
	var_101_int = "playing " + var_95_string;
	Trace(var_101_int);
	lshGetAnimTimes(var_95_string, var_98_float, var_99_float);
	lshPlayAnimation(var_98_float, var_99_float);
	var_103_int = "start: " + var_98_float;
	Trace(var_103_int);
	var_105_int = "end: " + var_99_float;
	Trace(var_105_int);
	return 4;
}


func_773(var_42_bool, var_43_string, var_44_string)
{
	var_45_object = Obj(); var_46_object = Obj();
	FindActor(var_46_object, var_43_string);
	var_47_bool = var_46_object == 0; //@ne
	if(var_47_bool != 0) {
		var_42_bool = 0;
		return 2;
	}
	Trigger(var_46_object, var_44_string);
	var_42_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_647(var_17_bool, var_18_object)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0;
	@@var_18_object:GetPosition(var_28_cvector);
	@@var_18_object:GetEyesHeight(var_27_float);
	var_35_float = GetByIndex(var_28_cvector, 1);
	var_35_float = var_35_float + var_27_float;
	SetByIndex(var_28_cvector, 1) = var_35_float;
	GetPosition(var_29_cvector);
	GetEyesHeight(var_27_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	var_36_float = var_36_float + var_27_float;
	SetByIndex(var_29_cvector, 1) = var_36_float;
	var_30_cvector = var_28_cvector - var_29_cvector;
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (float)0;
	var_38_int = var_30_cvector | var_30_cvector;
	var_39_float = sqrt(var_38_int);
	var_30_cvector = var_30_cvector / var_39_float;
	var_31_cvector = -var_30_cvector;
	var_41_float = var_30_cvector * (int)70;
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	var_43_cvector = var_31_cvector ^ CVector(0.0, 1.0, 0.0);
	func_732(var_42_cvector, var_43_cvector);
	var_51_float = var_42_cvector * (int)25;
	var_52_int = var_41_float + var_51_float;
	var_32_cvector = var_52_int - CVector(0.0, 10.0, 0.0);
	var_33_cvector = var_29_cvector + var_32_cvector;
	IsOverrideActive(var_34_bool);
	var_54_bool = var_34_bool;
	if(var_54_bool != 0) {
		var_17_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_33_cvector, var_31_cvector);
	var_55_float = GetByIndex(var_32_cvector, 0);
	var_56_float = GetByIndex(var_32_cvector, 2);
	Rotate(var_55_float, var_56_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_17_bool = 1;
	return 16;
}


func_967(var_60_int)
{
	var_61_int = 0; var_62_int = 0;
	GetVariable("player", var_62_int);
	var_65_bool = var_62_int == (int)0;
	if(var_65_bool != 0) {
		var_60_int = 200001;
		return 2;
	EMIT "GOTO 0x3d6";
	}
	var_67_bool = var_62_int == (int)1;
	if(var_67_bool != 0) {
		var_60_int = 200002;
		return 2;
	}
	var_60_int = 200003;
	return 2;
}


func_843(var_77_bool)
{
	var_79_int = 0; var_80_string = "";
	func_742(var_79_int, "d7q01");
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_bool = 1;
		return 0;
	}
	var_77_bool = 0;
	return 0;
}


func_785()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_703()
{
	CameraSwitchToNormal();
	return 0;
}


func_209(var_2_object, var_91_string)
{
	var_92_bool = 0;
	func_1004(var_92_bool);
	var_93_bool = var_92_bool == 0; //@nz
	if(var_93_bool != 0) {
		return 0;
	}
	var_94_bool = var_91_string == var_2_object;
	if(var_94_bool != 0) {
		return 0;
	}
	var_95_string = "";
	var_91_string = var_95_string;
	func_707(var_95_string);
	var_2_object = var_91_string;
	return 0;
}


func_831(var_157_bool)
{
	var_159_int = 0; var_160_string = "";
	func_742(var_159_int, "d7q01");
	var_162_bool = var_159_int == (int)2;
	if(var_162_bool != 0) {
		var_157_bool = 1;
		return 0;
	}
	var_157_bool = 0;
	return 0;
}


func_725()
{
	var_8_bool = 0;
	func_1004(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_791()
{
	SetVariable("d7q01", (int)3);
	func_984();
	return 0;
}


func_855(var_119_bool, var_120_object)
{
	var_121_bool = 0; var_122_object = Obj();
	var_120_object = var_122_object;
	func_877(var_121_bool, var_122_object);
	if(var_121_bool != 0) {
		var_119_bool = 1;
		return 0;
	}
	var_119_bool = 0;
	return 0;
}


func_984()
{
	var_67_object = Obj(); var_68_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_68_object, (int)169, (int)1, (int)15418);
	var_73_bool = 0; var_74_object = Obj(); var_75_int = 0;
	var_68_object = var_74_object;
	func_938(var_73_bool, var_74_object, (int)165);
	return 2;
}
EMIT "Stack[-1] = 0";


func_732(var_42_cvector, var_43_cvector)
{
	var_45_float = 0; var_46_float = 0;
	var_47_int = var_43_cvector | var_43_cvector;
	var_46_float = sqrt(var_47_int);
	var_48_float = 9.999999974752427e-07;
	var_49_bool = var_46_float < var_48_float;
	if(var_49_bool != 0) {
		var_42_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_42_cvector = var_43_cvector / var_46_float;
	return 2;
}


func_925(var_82_object)
{
	var_83_object = Obj(); var_84_object = Obj();
	GetDiaryRoot(var_84_object);
	var_85_bool = var_84_object == 0; //@nz
	if(var_85_bool != 0) {
		Trace("Can't retrieve diary root");
		var_82_object = 0;
		return 2;
	}
	var_84_object = var_82_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_800()
{
	SetVariable("ood7UBirdmask1", (int)1);
	return 0;
}


func_865(var_85_bool)
{
	var_87_int = 0; var_88_string = "";
	func_742(var_87_int, "ood7UBirdmask1");
	var_90_bool = var_87_int == (int)0;
	if(var_90_bool != 0) {
		var_85_bool = 1;
		return 0;
	}
	var_85_bool = 0;
	return 0;
}


func_806(var_15_object)
{
	Trace("ureport is given");
	var_18_object = Obj(); var_19_string = ""; var_20_int = 0;
	var_15_object = var_18_object;
	func_760(var_18_object, "d7q01_ureport", (int)1);
	return 0;
}


func_742(var_79_int, var_80_string)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable(var_80_string, var_82_int);
	var_82_int = var_79_int;
	return 2;
}


func_1000(var_58_int)
{
	var_58_int = 4029;
	return 0;
}


func_938(var_73_bool, var_74_object, var_75_int)
{
	var_76_object = Obj(); var_77_object = Obj(); var_78_int = 0; var_79_object = Obj(); var_80_object = Obj(); var_81_int = 0;
	func_925(Obj());
	var_82_object = var_79_object;
	@@var_79_object:Find(var_75_int, var_80_object);
	var_87_bool = var_80_object == 0; //@nz
	if(var_87_bool != 0) {
		var_89_int = "Can't find diary parent with id: " + var_75_int;
		Trace(var_89_int);
		var_73_bool = 0;
		return 6;
	}
	@@var_80_object:AddChild(var_74_object);
	SetVariable("player_diary", (int)1);
	@@var_74_object:GetCategory(var_81_int);
	SetDiarySection(var_81_int);
	var_73_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1002(var_59_string)
{
	var_59_string = "ui/NPC_Black.png";
	return 0;
}


func_747(var_23_object, var_24_object, var_25_int)
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0;
	@@var_24_object:GetItemID(var_29_int);
	GetInvItemProperty(var_30_int, var_29_int, "Category");
	@@var_23_object:AddItem(var_31_bool, var_24_object, var_30_int, var_25_int);
	var_33_bool = var_31_bool == 0; //@nz
	if(var_33_bool != 0) {
		@@var_23_object:DropItems(var_24_object, var_25_int);
	}
	return 6;
}


func_1004(var_92_bool)
{
	var_92_bool = 0;
	return 0;
}


func_877(var_121_bool, var_122_object)
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_bool = 0; var_127_bool = 0; var_128_int = 0; var_129_object = Obj(); var_130_int = 0; var_131_bool = 0; var_132_bool = 0; var_133_int = 0; var_134_int = 0; var_135_int = 0; var_136_bool = 0; var_137_bool = 0; var_138_int = 0; var_139_object = Obj(); var_140_int = 0; var_141_bool = 0; var_142_bool = 0;
	@@var_122_object:GetItemCount(var_133_int, (int)1);
	GetInvItemByName(var_134_int, "bird_mask");
	GetInvItemByName(var_135_int, "bird_balahon");
	var_136_bool = 0;
	var_137_bool = 0;
	var_138_int = 0;
	
Label_890:
	var_146_bool = var_138_int < var_133_int;
	if(var_146_bool != 0) {
		@@var_122_object:GetItem(var_139_object, var_138_int, (int)1);
		@@var_139_object:GetItemID(var_140_int);
		var_148_bool = var_140_int == var_134_int;
		if(var_148_bool != 0) {
			@@var_122_object:IsItemSelected(var_141_bool, var_138_int, (int)1);
			var_150_bool = var_141_bool;
			if(var_150_bool != 0) {
				var_136_bool = 1;
			}
		} else {
			var_152_bool = var_140_int == var_135_int;
			if(var_152_bool == 0) goto Label_914;
			@@var_122_object:IsItemSelected(var_142_bool, var_138_int, (int)1);
			var_154_bool = var_142_bool;
			if(var_154_bool == 0) goto Label_914;
	}
		var_121_bool = 0;
		var_155_bool = var_136_bool;
		if(var_155_bool != 0) {
			var_156_bool = (bool)1;
			if(var_156_bool != 0) {
				var_121_bool = 1;
			}
		}
		var_139_object = 0;
		var_138_int = var_138_int + (int)1;
		goto Label_890;
	}
	return 20;
	
}


func_760(var_18_object, var_19_string, var_20_int)
{
	var_21_object = Obj(); var_22_object = Obj();
	CreateInvItem(var_22_object);
	@@var_22_object:SetItemName(var_19_string);
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0;
	var_18_object = var_23_object;
	var_22_object = var_24_object;
	var_20_int = var_25_int;
	func_747(var_23_object, var_24_object, var_25_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_817()
{
	var_42_bool = 0; var_43_string = ""; var_44_string = "";
	func_773(var_42_bool, "quest_d7_01", "kill_player");
	return 0;
}


func_824()
{
	var_60_bool = 0; var_61_string = ""; var_62_string = "";
	func_773(var_60_bool, "quest_d7_01", "sobor_teleport");
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object;
	var_1_object = var_69_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_76_bool = 0;
		var_76_bool = 0;
		var_77_bool = 0; var_78_object = Obj();
		var_78_object = var_1_object;
		func_843(var_78_object);
		if(var_77_bool != 0) {
			var_85_bool = 0; var_86_object = Obj();
			var_86_object = var_1_object;
			func_865(var_86_object);
			if(var_85_bool != 0) {
				var_76_bool = 1;
			}
		}
		if(var_76_bool != 0) {
			var_91_string = "";
			func_209(var_70_object, "Neutral");
			@@@var_0_object:SetMessage((int)12188);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12189, (int)14396, (int)13344);
		} else {
				var_118_bool = 0;
				var_118_bool = 0;
				var_119_bool = 0; var_120_object = Obj();
				var_120_object = var_1_object;
				func_855(var_119_bool, var_120_object);
				if(var_119_bool != 0) {
					var_157_bool = 0; var_158_object = Obj();
					var_158_object = var_1_object;
					func_831(var_158_object);
					if(var_157_bool != 0) {
						var_118_bool = 1;
					}
				}
				if(var_118_bool != 0) {
					var_163_string = "";
					func_209(var_70_object, "Neutral");
					@@@var_0_object:SetMessage((int)13197);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)13198, (int)14433, (int)14421);
					@@@var_0_object:AddReply((int)13199, (int)14428, (int)14422);
					@@@var_0_object:AddReply((int)13200, (int)14424, (int)14423);
					@@@var_0_object:AddReply((int)13330, (int)-1, (int)14562);
					@@@var_0_object:AddReply((int)13331, (int)-1, (int)14563);
					goto Label_179;
				}
				var_180_bool = 0; var_181_object = Obj();
				var_181_object = var_1_object;
				func_831(var_181_object);
				if(var_180_bool != 0) {
					var_182_string = "";
					func_209(var_70_object, "Neutral");
					@@@var_0_object:SetMessage((int)13175);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)13177, (int)14398, (int)14397);
					@@@var_0_object:AddReply((int)13195, (int)14411, (int)14417);
					@@@var_0_object:AddReply((int)13193, (int)-1, (int)14415);
					goto Label_179;
				}
				return 0;
		}
	}
Label_179:
	var_110_bool = 0;
	func_1004(var_110_bool);
	if(var_110_bool != 0) {

	Label_183:
		lshWaitForAnimEnd();
		var_111_string = var_3_string;
		if(var_111_string != 0) {
		} else {
			var_112_string = "";
			var_112_string = var_2_object;
			func_707(var_112_string);
			goto Label_183;
	}
		PlayAnimation("all", "idle");

	Label_198:
		WaitForAnimEnd();
		var_115_string = var_3_string;
		if(var_115_string != 0) {
			goto Label_208;
		}
		PlayAnimation("all", "idle");
		goto Label_198;

	}
	goto Label_208;
	
Label_208:
	return 0;
	
}
EMIT "GOTO 0x43";


