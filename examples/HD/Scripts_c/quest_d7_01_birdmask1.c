// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,TriggerWorld/2,SetVariable/2,GetInvItemByName/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:ood7UBirdmask1|W:ureport is given|W:d7q01_ureport|W:quest_d7_01|W:kill_player|W:d7q01|A:GetItemCount|W:bird_mask|W:bird_balahon|A:GetItem|A:IsItemSelected|W:branch|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x26b
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe8 vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x26f vars=object
// @PE: 0x4a,0xd2,0xe8,0x26f,0x33b,0x341,0x347,0x352,0x359,0x365,0x371,0x37b

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_749();
		var_10_bool = var_6_int == (int)14419;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_833();
			var_15_object = Obj(); var_16_object = Obj();
			var_15_object = var_1_object;
			var_16_object = var_0_object;
			func_839(var_16_object);
			var_39_object = Obj(); var_40_object = Obj();
			var_39_object = var_1_object;
			var_40_object = var_0_object;
			func_827();
		}
		var_44_bool = var_6_int == (int)14487;
		if(var_44_bool != 0) {
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_850();
		}
		var_54_bool = var_6_int == (int)14432;
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_object;
			func_850();
		}
		var_58_bool = var_6_int == (int)14414;
		if(var_58_bool != 0) {
			var_59_object = Obj(); var_60_object = Obj();
			var_59_object = var_1_object;
			var_60_object = var_0_object;
			func_850();
		}
		var_62_bool = var_5_int == (int)13343;
		if(var_62_bool != 0) {
			var_63_bool = 0;
			var_63_bool = 0;
			var_64_bool = 0; var_65_object = Obj();
			var_65_object = var_1_object;
			func_869(var_65_object);
			if(var_64_bool != 0) {
				var_72_bool = 0; var_73_object = Obj();
				var_73_object = var_1_object;
				func_891(var_73_object);
				if(var_72_bool != 0) {
					var_63_bool = 1;
				}
			}
			if(var_63_bool != 0) {
				var_78_string = "";
				func_210(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)512188);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512189, (int)14396, (int)13344);
				return 0;
			}
			var_99_bool = 0;
			var_99_bool = 0;
			var_100_bool = 0; var_101_object = Obj();
			var_101_object = var_1_object;
			func_881(var_100_bool, var_101_object);
			if(var_100_bool != 0) {
				var_138_bool = 0; var_139_object = Obj();
				var_139_object = var_1_object;
				func_857(var_139_object);
				if(var_138_bool != 0) {
					var_99_bool = 1;
				}
			}
			if(var_99_bool != 0) {
				var_144_string = "";
				func_210(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)513197);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513198, (int)14433, (int)14421);
				@@@var_0_object:AddReply((int)513199, (int)14428, (int)14422);
				@@@var_0_object:AddReply((int)513200, (int)14424, (int)14423);
				return 0;
			}
			var_155_bool = 0; var_156_object = Obj();
			var_156_object = var_1_object;
			func_857(var_156_object);
			if(var_155_bool != 0) {
				var_157_string = "";
				func_210(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)513175);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513177, (int)14398, (int)14397);
				@@@var_0_object:AddReply((int)513195, (int)14411, (int)14417);
				@@@var_0_object:AddReply((int)513193, (int)-1, (int)14415);
				return 0;
			}
		}
		var_169_bool = var_5_int == (int)14398;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_210(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513178);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513179, (int)14402, (int)14399);
			@@@var_0_object:AddReply((int)513180, (int)14403, (int)14400);
			@@@var_0_object:AddReply((int)513181, (int)14404, (int)14401);
			return 0;
		}
		var_182_bool = var_5_int == (int)14404;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_210(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513184);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513189, (int)-1, (int)14409);
			@@@var_0_object:AddReply((int)513190, (int)14411, (int)14410);
			return 0;
		}
		var_192_bool = var_5_int == (int)14403;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_210(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513183);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513187, (int)-1, (int)14407);
			@@@var_0_object:AddReply((int)513188, (int)14411, (int)14408);
			return 0;
		}
		var_202_bool = var_5_int == (int)14402;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_210(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513182);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513185, (int)14411, (int)14405);
			@@@var_0_object:AddReply((int)513186, (int)-1, (int)14406);
			return 0;
		}
		var_212_bool = var_5_int == (int)14411;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_210(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513191);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513192, (int)-1, (int)14414);
			return 0;
		}
		var_219_bool = var_5_int == (int)14424;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_210(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513201);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513202, (int)14429, (int)14425);
			@@@var_0_object:AddReply((int)513203, (int)14433, (int)14426);
			@@@var_0_object:AddReply((int)513204, (int)14428, (int)14427);
			return 0;
		}
		var_232_bool = var_5_int == (int)14429;
		if(var_232_bool != 0) {
			var_233_string = "";
			func_210(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513206);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513207, (int)-1, (int)14430);
			return 0;
		}
		var_239_bool = var_5_int == (int)14428;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_210(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513205);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513209, (int)-1, (int)14432);
			@@@var_0_object:AddReply((int)541590, (int)-1, (int)43759);
			return 0;
		}
		var_249_bool = var_5_int == (int)14433;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_210(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513210);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513211, (int)-1, (int)14434);
			@@@var_0_object:AddReply((int)513260, (int)-1, (int)14487);
			return 0;
		}
		var_259_bool = var_5_int == (int)14396;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_210(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513176);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513196, (int)-1, (int)14419);
			return 0;
		}
		var_3_string = true;
		var_265_bool = 0;
		func_976(var_265_bool);
		if(var_265_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe9";
	
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
	
Label_619:
	Hold();
	goto Label_619;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0;
	var_0_object = var_7_object;
	var_17_bool = 0; var_18_object = Obj(); var_19_float = 0;
	var_7_object = var_18_object;
	func_631(var_17_bool, var_18_object, (float)130.0);
	var_64_bool = var_17_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	CreateDialog(var_13_object);
	var_65_int = 0;
	func_970(var_65_int);
	@@var_13_object:SetNPCName(var_65_int);
	var_66_int = 0;
	func_968(var_66_int);
	@@var_13_object:SetNPCDescription(var_66_int);
	var_67_string = "";
	func_972(var_67_string);
	@@var_13_object:SetPhoto(var_67_string);
	var_68_string = "";
	func_974(var_68_string);
	@@var_13_object:SetPhoto2(var_68_string);
	var_69_int = 0;
	func_951(var_69_int);
	@@var_13_object:SetPlayerName(var_69_int);
	IsOverrideActive(var_14_bool);
	var_77_bool = var_14_bool;
	if(var_77_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	DoDialog(var_13_object);
	var_78_object = Obj(); var_79_object = Obj();
	var_7_object = var_78_object;
	var_13_object = var_79_object;
	TaskCall(1);
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object);
	TaskReturn();
	@@var_13_object:IsDialogEnd(var_16_bool);
	
Label_56:
	var_208_bool = var_16_bool == 0; //@nz
	if(var_208_bool != 0) {
		sync();
		@@var_13_object:IsDialogEnd(var_16_bool);
		goto Label_56;
	}
	var_7_object = Obj();
	func_700();
	StopDialog(var_13_object);
	@@var_13_object:GetReturnValue((int)-1);
	var_15_int = var_6_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_833()
{
	SetVariable("ood7UBirdmask1", (int)1);
	return 0;
}


func_771(var_34_int, var_35_int)
{
	var_36_object = Obj(); var_37_object = Obj();
	CreateIntVector(var_37_object);
	@@var_37_object:add(var_34_int);
	@@var_37_object:add(var_35_int);
	SendWorldWndMessage((int)3, var_37_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_891(var_94_bool)
{
	var_96_int = 0; var_97_string = "";
	func_766(var_96_int, "ood7UBirdmask1");
	var_99_bool = var_96_int == (int)0;
	if(var_99_bool != 0) {
		var_94_bool = 1;
		return 0;
	}
	var_94_bool = 0;
	return 0;
}


func_903(var_142_bool, var_143_object)
{
	var_144_int = 0; var_145_int = 0; var_146_int = 0; var_147_bool = 0; var_148_bool = 0; var_149_int = 0; var_150_object = Obj(); var_151_int = 0; var_152_bool = 0; var_153_bool = 0; var_154_int = 0; var_155_int = 0; var_156_int = 0; var_157_bool = 0; var_158_bool = 0; var_159_int = 0; var_160_object = Obj(); var_161_int = 0; var_162_bool = 0; var_163_bool = 0;
	@@var_143_object:GetItemCount(var_154_int, (int)1);
	GetInvItemByName(var_155_int, "bird_mask");
	GetInvItemByName(var_156_int, "bird_balahon");
	var_157_bool = 0;
	var_158_bool = 0;
	var_159_int = 0;
	
Label_916:
	var_167_bool = var_159_int < var_154_int;
	if(var_167_bool != 0) {
		@@var_143_object:GetItem(var_160_object, var_159_int, (int)1);
		@@var_160_object:GetItemID(var_161_int);
		var_169_bool = var_161_int == var_155_int;
		if(var_169_bool != 0) {
			@@var_143_object:IsItemSelected(var_162_bool, var_159_int, (int)1);
			var_171_bool = var_162_bool;
			if(var_171_bool != 0) {
				var_157_bool = 1;
			}
		} else {
			var_173_bool = var_161_int == var_156_int;
			if(var_173_bool == 0) goto Label_940;
			@@var_143_object:IsItemSelected(var_163_bool, var_159_int, (int)1);
			var_175_bool = var_163_bool;
			if(var_175_bool == 0) goto Label_940;
	}
		var_142_bool = 0;
		var_176_bool = var_157_bool;
		if(var_176_bool != 0) {
			var_177_bool = (bool)1;
			if(var_177_bool != 0) {
				var_142_bool = 1;
			}
		}
		var_160_object = 0;
		var_159_int = var_159_int + (int)1;
		goto Label_916;
	}
	return 20;
	
}


func_839(var_15_object)
{
	Trace("ureport is given");
	var_18_object = Obj(); var_19_string = ""; var_20_int = 0;
	var_15_object = var_18_object;
	func_802(var_18_object, "d7q01_ureport", (int)1);
	return 0;
}


func_968(var_66_int)
{
	var_66_int = 515571;
	return 0;
}


func_970(var_65_int)
{
	var_65_int = 504029;
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_78_object, var_79_object)
{
	var_0_object = var_79_object;
	var_1_object = var_78_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_85_bool = 0;
		var_85_bool = 0;
		var_86_bool = 0; var_87_object = Obj();
		var_87_object = var_1_object;
		func_869(var_87_object);
		if(var_86_bool != 0) {
			var_94_bool = 0; var_95_object = Obj();
			var_95_object = var_1_object;
			func_891(var_95_object);
			if(var_94_bool != 0) {
				var_85_bool = 1;
			}
		}
		if(var_85_bool != 0) {
			var_100_string = "";
			func_210(var_79_object, "Neutral");
			@@@var_0_object:SetMessage((int)512188);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512189, (int)14396, (int)13344);
		} else {
				var_139_bool = 0;
				var_139_bool = 0;
				var_140_bool = 0; var_141_object = Obj();
				var_141_object = var_1_object;
				func_881(var_140_bool, var_141_object);
				if(var_140_bool != 0) {
					var_178_bool = 0; var_179_object = Obj();
					var_179_object = var_1_object;
					func_857(var_179_object);
					if(var_178_bool != 0) {
						var_139_bool = 1;
					}
				}
				if(var_139_bool != 0) {
					var_184_string = "";
					func_210(var_79_object, "Neutral");
					@@@var_0_object:SetMessage((int)513197);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)513198, (int)14433, (int)14421);
					@@@var_0_object:AddReply((int)513199, (int)14428, (int)14422);
					@@@var_0_object:AddReply((int)513200, (int)14424, (int)14423);
					goto Label_180;
				}
				var_195_bool = 0; var_196_object = Obj();
				var_196_object = var_1_object;
				func_857(var_196_object);
				if(var_195_bool != 0) {
					var_197_string = "";
					func_210(var_79_object, "Neutral");
					@@@var_0_object:SetMessage((int)513175);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)513177, (int)14398, (int)14397);
					@@@var_0_object:AddReply((int)513195, (int)14411, (int)14417);
					@@@var_0_object:AddReply((int)513193, (int)-1, (int)14415);
					goto Label_180;
				}
				return 0;
		}
	}
Label_180:
	var_121_bool = 0;
	func_976(var_121_bool);
	if(var_121_bool != 0) {

	Label_184:
		lshWaitForAnimEnd();
		var_122_string = var_3_string;
		if(var_122_string != 0) {
		} else {
			var_123_string = "";
			var_123_string = var_2_object;
			func_718(var_123_string);
			goto Label_184;
	}
		PlayAnimation("all", "idle");

	Label_199:
		WaitForAnimEnd();
		var_136_string = var_3_string;
		if(var_136_string != 0) {
			goto Label_209;
		}
		PlayAnimation("all", "idle");
		goto Label_199;

	}
	goto Label_209;
	
Label_209:
	return 0;
	
}
EMIT "GOTO 0x4e";


func_972(var_67_string)
{
	var_67_string = "ui/NPC_bmask.png";
	return 0;
}


func_974(var_68_string)
{
	var_68_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_783(var_23_object, var_24_object, var_25_int)
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0;
	@@var_24_object:GetItemID(var_29_int);
	GetInvItemProperty(var_30_int, var_29_int, "Category");
	@@var_23_object:AddItem(var_31_bool, var_24_object, var_30_int, var_25_int);
	var_33_bool = var_31_bool == 0; //@nz
	if(var_33_bool != 0) {
		@@var_23_object:DropItems(var_24_object, var_25_int);
	} else {
		var_34_int = 0; var_35_int = 0;
		var_29_int = var_34_int;
		var_25_int = var_35_int;
		func_771(var_34_int, var_35_int);
	}
	return 6;
	
}


func_718(var_123_string)
{
	var_124_bool = 0; var_125_float = 0; var_126_float = 0; var_127_bool = 0; var_128_float = 0; var_129_float = 0;
	lshHasAnimation(var_127_bool, var_123_string);
	var_130_bool = var_127_bool;
	if(var_130_bool != 0) {
		lshGetAnimTimes(var_123_string, var_128_float, var_129_float);
		lshPlayAnimation(var_128_float, var_129_float, (bool)0);
	} else {
		var_133_int = "Can't find lsh animation : " + var_123_string;
		Trace(var_133_int);
	}
	return 6;
	
}


func_976(var_60_bool)
{
	var_60_bool = 0;
	return 0;
}


func_210(var_2_object, var_100_string)
{
	var_101_bool = 0;
	func_976(var_101_bool);
	var_102_bool = var_101_bool == 0; //@nz
	if(var_102_bool != 0) {
		return 0;
	}
	var_103_bool = var_100_string == var_2_object;
	if(var_103_bool != 0) {
		return 0;
	}
	var_104_string = ""; var_105_bool = 0;
	var_100_string = var_104_string;
	var_107_bool = var_100_string == "";
	if(var_107_bool != 0) {
		var_105_bool = 0;
	} else {
		var_105_bool = 1;
	}
	func_734(var_104_string, var_105_bool);
	var_2_object = var_100_string;
	return 0;
	
}


func_850()
{
	var_47_bool = 0; var_48_string = ""; var_49_string = "";
	func_815(var_47_bool, "quest_d7_01", "kill_player");
	return 0;
}


func_857(var_178_bool)
{
	var_180_int = 0; var_181_string = "";
	func_766(var_180_int, "d7q01");
	var_183_bool = var_180_int == (int)2;
	if(var_183_bool != 0) {
		var_178_bool = 1;
		return 0;
	}
	var_178_bool = 0;
	return 0;
}


func_734(var_104_string, var_105_bool)
{
	var_108_bool = 0; var_109_float = 0; var_110_float = 0; var_111_bool = 0; var_112_float = 0; var_113_float = 0;
	lshHasAnimation(var_111_bool, var_104_string);
	var_114_bool = var_111_bool;
	if(var_114_bool != 0) {
		lshGetAnimTimes(var_104_string, var_112_float, var_113_float);
		lshPlayAnimation(var_112_float, var_113_float, var_105_bool);
	} else {
		var_116_int = "Can't find lsh animation : " + var_104_string;
		Trace(var_116_int);
	}
	return 6;
	
}


func_802(var_18_object, var_19_string, var_20_int)
{
	var_21_object = Obj(); var_22_object = Obj();
	CreateInvItem(var_22_object);
	@@var_22_object:SetItemName(var_19_string);
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0;
	var_18_object = var_23_object;
	var_22_object = var_24_object;
	var_20_int = var_25_int;
	func_783(var_23_object, var_24_object, var_25_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_869(var_86_bool)
{
	var_88_int = 0; var_89_string = "";
	func_766(var_88_int, "d7q01");
	var_93_bool = var_88_int == (int)1;
	if(var_93_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_631(var_17_bool, var_18_object, var_19_float)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0;
	@@var_18_object:GetPosition(var_30_cvector);
	@@var_18_object:GetEyesHeight(var_29_float);
	var_38_float = GetByIndex(var_30_cvector, 1);
	var_38_float = var_38_float + var_29_float;
	SetByIndex(var_30_cvector, 1) = var_38_float;
	GetPosition(var_31_cvector);
	GetEyesHeight(var_29_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	var_39_float = var_39_float + var_29_float;
	SetByIndex(var_31_cvector, 1) = var_39_float;
	var_32_cvector = var_30_cvector - var_31_cvector;
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (float)0;
	var_41_int = var_32_cvector | var_32_cvector;
	var_42_float = sqrt(var_41_int);
	var_32_cvector = var_32_cvector / var_42_float;
	var_33_cvector = -var_32_cvector;
	var_43_float = var_32_cvector * var_19_float;
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_45_cvector = var_33_cvector ^ CVector(0.0, 1.0, 0.0);
	func_756(var_44_cvector, var_45_cvector);
	var_53_float = var_44_cvector * (int)25;
	var_54_int = var_43_float + var_53_float;
	var_34_cvector = var_54_int - CVector(0.0, 10.0, 0.0);
	var_35_cvector = var_31_cvector + var_34_cvector;
	IsOverrideActive(var_36_bool);
	var_56_bool = var_36_bool;
	if(var_56_bool != 0) {
		var_17_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_35_cvector, var_33_cvector, (bool)1);
	var_58_float = GetByIndex(var_34_cvector, 0);
	var_59_float = GetByIndex(var_34_cvector, 2);
	Rotate(var_58_float, var_59_float);
	var_60_bool = 0;
	func_976(var_60_bool);
	if(var_60_bool != 0) {
	} else {
		HasAnimationTrack(var_37_bool, "head");
		var_62_bool = var_37_bool;
		if(var_62_bool == 0) goto Label_694;
		LookAsyncCamera("head");
	}
Label_694:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_17_bool = 1;
	return 18;
	
}


func_749()
{
	var_8_bool = 0;
	func_976(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_815(var_47_bool, var_48_string, var_49_string)
{
	var_50_object = Obj(); var_51_object = Obj();
	FindActor(var_51_object, var_48_string);
	var_52_bool = var_51_object == 0; //@ne
	if(var_52_bool != 0) {
		var_47_bool = 0;
		return 2;
	}
	Trigger(var_51_object, var_49_string);
	var_47_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_881(var_140_bool, var_141_object)
{
	var_142_bool = 0; var_143_object = Obj();
	var_141_object = var_143_object;
	func_903(var_142_bool, var_143_object);
	if(var_142_bool != 0) {
		var_140_bool = 1;
		return 0;
	}
	var_140_bool = 0;
	return 0;
}


func_756(var_44_cvector, var_45_cvector)
{
	var_47_float = 0; var_48_float = 0;
	var_49_int = var_45_cvector | var_45_cvector;
	var_48_float = sqrt(var_49_int);
	var_50_float = 9.999999974752427e-07;
	var_51_bool = var_48_float < var_50_float;
	if(var_51_bool != 0) {
		var_44_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_44_cvector = var_45_cvector / var_48_float;
	return 2;
}


func_951(var_69_int)
{
	var_70_int = 0; var_71_int = 0;
	GetVariable("branch", var_71_int);
	var_74_bool = var_71_int == (int)0;
	if(var_74_bool != 0) {
		var_69_int = 1;
		return 2;
	EMIT "GOTO 0x3c6";
	}
	var_76_bool = var_71_int == (int)1;
	if(var_76_bool != 0) {
		var_69_int = 2;
		return 2;
	}
	var_69_int = 3;
	return 2;
}


func_827()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_700()
{
	var_210_bool = 0; var_211_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_213_bool = 0;
	func_976(var_213_bool);
	if(var_213_bool != 0) {
	} else {
		HasAnimationTrack(var_211_bool, "head");
		var_215_bool = var_211_bool;
		if(var_215_bool == 0) goto Label_717;
		UnlookAsync("head");
	}
Label_717:
	return 2;
	
}


func_766(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
	return 2;
}


