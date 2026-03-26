// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,TriggerWorld/2,SetVariable/2,GetInvItemByName/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:dreport is given|W:d7q01_dreport|W:ood7DBirdmask1|W:quest_d7_01|W:kill_player|W:d7q01|A:GetItemCount|W:bird_mask|W:bird_balahon|A:GetItem|A:IsItemSelected|W:branch|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x2cd
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe3 vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x2d1 vars=object
// @PE: 0x4a,0xcd,0xe3,0x2d1,0x39d,0x3a3,0x3ae,0x3b4,0x3bb,0x3c7,0x3d3,0x3dd

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_847();
		var_10_bool = var_6_int == (int)14497;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_931(var_12_object);
			var_35_object = Obj(); var_36_object = Obj();
			var_35_object = var_1_object;
			var_36_object = var_0_object;
			func_942();
			var_39_object = Obj(); var_40_object = Obj();
			var_39_object = var_1_object;
			var_40_object = var_0_object;
			func_925();
		}
		var_44_bool = var_6_int == (int)14502;
		if(var_44_bool != 0) {
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_925();
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_942();
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_931(var_50_object);
		}
		var_52_bool = var_6_int == (int)14513;
		if(var_52_bool != 0) {
			var_53_object = Obj(); var_54_object = Obj();
			var_53_object = var_1_object;
			var_54_object = var_0_object;
			func_948();
		}
		var_62_bool = var_6_int == (int)14517;
		if(var_62_bool != 0) {
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_object;
			func_948();
		}
		var_66_bool = var_6_int == (int)14539;
		if(var_66_bool != 0) {
			var_67_object = Obj(); var_68_object = Obj();
			var_67_object = var_1_object;
			var_68_object = var_0_object;
			func_948();
		}
		var_70_bool = var_5_int == (int)14490;
		if(var_70_bool != 0) {
			var_71_bool = 0;
			var_71_bool = 0;
			var_72_bool = 0; var_73_object = Obj();
			var_73_object = var_1_object;
			func_989(var_73_object);
			if(var_72_bool != 0) {
				var_80_bool = 0; var_81_object = Obj();
				var_81_object = var_1_object;
				func_967(var_81_object);
				if(var_80_bool != 0) {
					var_71_bool = 1;
				}
			}
			if(var_71_bool != 0) {
				var_86_string = "";
				func_205(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)513261);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513262, (int)14492, (int)14491);
				return 0;
			}
			var_107_bool = 0;
			var_107_bool = 0;
			var_108_bool = 0; var_109_object = Obj();
			var_109_object = var_1_object;
			func_955(var_109_object);
			if(var_108_bool != 0) {
				var_114_bool = 0; var_115_object = Obj();
				var_115_object = var_1_object;
				func_979(var_114_bool, var_115_object);
				if(var_114_bool != 0) {
					var_107_bool = 1;
				}
			}
			if(var_107_bool != 0) {
				var_152_string = "";
				func_205(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)513279);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513280, (int)14511, (int)14510);
				@@@var_0_object:AddReply((int)513284, (int)14515, (int)14514);
				return 0;
			}
			var_160_bool = 0; var_161_object = Obj();
			var_161_object = var_1_object;
			func_955(var_161_object);
			if(var_160_bool != 0) {
				var_162_string = "";
				func_205(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)513289);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513290, (int)14522, (int)14521);
				@@@var_0_object:AddReply((int)513304, (int)14538, (int)14535);
				@@@var_0_object:AddReply((int)513305, (int)-1, (int)14536);
				return 0;
			}
		}
		var_174_bool = var_5_int == (int)14522;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513291);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513292, (int)14524, (int)14523);
			@@@var_0_object:AddReply((int)513296, (int)14528, (int)14527);
			@@@var_0_object:AddReply((int)513300, (int)14532, (int)14531);
			return 0;
		}
		var_187_bool = var_5_int == (int)14532;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513301);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513302, (int)14540, (int)14533);
			@@@var_0_object:AddReply((int)513303, (int)14538, (int)14534);
			return 0;
		}
		var_197_bool = var_5_int == (int)14540;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513310, (int)14524, (int)14541);
			return 0;
		}
		var_204_bool = var_5_int == (int)14528;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513297);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513298, (int)-1, (int)14529);
			@@@var_0_object:AddReply((int)513299, (int)14538, (int)14530);
			return 0;
		}
		var_214_bool = var_5_int == (int)14524;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513295, (int)-1, (int)14526);
			@@@var_0_object:AddReply((int)513306, (int)14538, (int)14537);
			return 0;
		}
		var_224_bool = var_5_int == (int)14538;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513307);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513308, (int)-1, (int)14539);
			return 0;
		}
		var_231_bool = var_5_int == (int)14515;
		if(var_231_bool != 0) {
			var_232_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513286, (int)-1, (int)14516);
			@@@var_0_object:AddReply((int)513287, (int)-1, (int)14517);
			return 0;
		}
		var_241_bool = var_5_int == (int)14511;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513282, (int)-1, (int)14512);
			@@@var_0_object:AddReply((int)513283, (int)-1, (int)14513);
			return 0;
		}
		var_251_bool = var_5_int == (int)14492;
		if(var_251_bool != 0) {
			var_252_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513263);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513264, (int)14494, (int)14493);
			@@@var_0_object:AddReply((int)513269, (int)14506, (int)14498);
			@@@var_0_object:AddReply((int)513274, (int)14504, (int)14503);
			return 0;
		}
		var_264_bool = var_5_int == (int)14504;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513275);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513276, (int)14499, (int)14505);
			return 0;
		}
		var_271_bool = var_5_int == (int)14506;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513278, (int)14499, (int)14507);
			return 0;
		}
		var_278_bool = var_5_int == (int)14499;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513270);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513271, (int)14501, (int)14500);
			return 0;
		}
		var_285_bool = var_5_int == (int)14501;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513272);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513273, (int)-1, (int)14502);
			return 0;
		}
		var_292_bool = var_5_int == (int)14494;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513265);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513266, (int)14496, (int)14495);
			return 0;
		}
		var_299_bool = var_5_int == (int)14496;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_205(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513267);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513268, (int)-1, (int)14497);
			return 0;
		}
		var_3_string = true;
		var_305_bool = 0;
		func_1074(var_305_bool);
		if(var_305_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe4";
	
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
	
Label_717:
	Hold();
	goto Label_717;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0;
	var_0_object = var_7_object;
	var_17_bool = 0; var_18_object = Obj(); var_19_float = 0;
	var_7_object = var_18_object;
	func_729(var_17_bool, var_18_object, (float)130.0);
	var_64_bool = var_17_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	CreateDialog(var_13_object);
	var_65_int = 0;
	func_1068(var_65_int);
	@@var_13_object:SetNPCName(var_65_int);
	var_66_int = 0;
	func_1066(var_66_int);
	@@var_13_object:SetNPCDescription(var_66_int);
	var_67_string = "";
	func_1070(var_67_string);
	@@var_13_object:SetPhoto(var_67_string);
	var_68_string = "";
	func_1072(var_68_string);
	@@var_13_object:SetPhoto2(var_68_string);
	var_69_int = 0;
	func_1049(var_69_int);
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
	var_205_bool = var_16_bool == 0; //@nz
	if(var_205_bool != 0) {
		sync();
		@@var_13_object:IsDialogEnd(var_16_bool);
		goto Label_56;
	}
	var_7_object = Obj();
	func_798();
	StopDialog(var_13_object);
	@@var_13_object:GetReturnValue((int)-1);
	var_15_int = var_6_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_832(var_104_string, var_105_bool)
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


func_900(var_14_object, var_15_string, var_16_int)
{
	var_17_object = Obj(); var_18_object = Obj();
	CreateInvItem(var_18_object);
	@@var_18_object:SetItemName(var_15_string);
	var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0;
	var_14_object = var_19_object;
	var_18_object = var_20_object;
	var_16_int = var_21_int;
	func_881(var_19_object, var_20_object, var_21_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_967(var_94_bool)
{
	var_96_int = 0; var_97_string = "";
	func_864(var_96_int, "d7q01");
	var_99_bool = var_96_int == (int)1;
	if(var_99_bool != 0) {
		var_94_bool = 1;
		return 0;
	}
	var_94_bool = 0;
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
		func_989(var_87_object);
		if(var_86_bool != 0) {
			var_94_bool = 0; var_95_object = Obj();
			var_95_object = var_1_object;
			func_967(var_95_object);
			if(var_94_bool != 0) {
				var_85_bool = 1;
			}
		}
		if(var_85_bool != 0) {
			var_100_string = "";
			func_205(var_79_object, "Neutral");
			@@@var_0_object:SetMessage((int)513261);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513262, (int)14492, (int)14491);
		} else {
				var_139_bool = 0;
				var_139_bool = 0;
				var_140_bool = 0; var_141_object = Obj();
				var_141_object = var_1_object;
				func_955(var_141_object);
				if(var_140_bool != 0) {
					var_146_bool = 0; var_147_object = Obj();
					var_147_object = var_1_object;
					func_979(var_146_bool, var_147_object);
					if(var_146_bool != 0) {
						var_139_bool = 1;
					}
				}
				if(var_139_bool != 0) {
					var_184_string = "";
					func_205(var_79_object, "Neutral");
					@@@var_0_object:SetMessage((int)513279);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)513280, (int)14511, (int)14510);
					@@@var_0_object:AddReply((int)513284, (int)14515, (int)14514);
					goto Label_175;
				}
				var_192_bool = 0; var_193_object = Obj();
				var_193_object = var_1_object;
				func_955(var_193_object);
				if(var_192_bool != 0) {
					var_194_string = "";
					func_205(var_79_object, "Neutral");
					@@@var_0_object:SetMessage((int)513289);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)513290, (int)14522, (int)14521);
					@@@var_0_object:AddReply((int)513304, (int)14538, (int)14535);
					@@@var_0_object:AddReply((int)513305, (int)-1, (int)14536);
					goto Label_175;
				}
				return 0;
		}
	}
Label_175:
	var_121_bool = 0;
	func_1074(var_121_bool);
	if(var_121_bool != 0) {

	Label_179:
		lshWaitForAnimEnd();
		var_122_string = var_3_string;
		if(var_122_string != 0) {
		} else {
			var_123_string = "";
			var_123_string = var_2_object;
			func_816(var_123_string);
			goto Label_179;
	}
		PlayAnimation("all", "idle");

	Label_194:
		WaitForAnimEnd();
		var_136_string = var_3_string;
		if(var_136_string != 0) {
			goto Label_204;
		}
		PlayAnimation("all", "idle");
		goto Label_194;

	}
	goto Label_204;
	
Label_204:
	return 0;
	
}
EMIT "GOTO 0x4e";


func_205(var_2_object, var_100_string)
{
	var_101_bool = 0;
	func_1074(var_101_bool);
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
	func_832(var_104_string, var_105_bool);
	var_2_object = var_100_string;
	return 0;
	
}


func_847()
{
	var_8_bool = 0;
	func_1074(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_913(var_55_bool, var_56_string, var_57_string)
{
	var_58_object = Obj(); var_59_object = Obj();
	FindActor(var_59_object, var_56_string);
	var_60_bool = var_59_object == 0; //@ne
	if(var_60_bool != 0) {
		var_55_bool = 0;
		return 2;
	}
	Trigger(var_59_object, var_57_string);
	var_55_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_979(var_146_bool, var_147_object)
{
	var_148_bool = 0; var_149_object = Obj();
	var_147_object = var_149_object;
	func_1001(var_148_bool, var_149_object);
	if(var_148_bool != 0) {
		var_146_bool = 1;
		return 0;
	}
	var_146_bool = 0;
	return 0;
}


func_854(var_44_cvector, var_45_cvector)
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


func_1049(var_69_int)
{
	var_70_int = 0; var_71_int = 0;
	GetVariable("branch", var_71_int);
	var_74_bool = var_71_int == (int)0;
	if(var_74_bool != 0) {
		var_69_int = 1;
		return 2;
	EMIT "GOTO 0x428";
	}
	var_76_bool = var_71_int == (int)1;
	if(var_76_bool != 0) {
		var_69_int = 2;
		return 2;
	}
	var_69_int = 3;
	return 2;
}


func_729(var_17_bool, var_18_object, var_19_float)
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
	func_854(var_44_cvector, var_45_cvector);
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
	func_1074(var_60_bool);
	if(var_60_bool != 0) {
	} else {
		HasAnimationTrack(var_37_bool, "head");
		var_62_bool = var_37_bool;
		if(var_62_bool == 0) goto Label_792;
		LookAsyncCamera("head");
	}
Label_792:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_17_bool = 1;
	return 18;
	
}


func_925()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_798()
{
	var_207_bool = 0; var_208_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_210_bool = 0;
	func_1074(var_210_bool);
	if(var_210_bool != 0) {
	} else {
		HasAnimationTrack(var_208_bool, "head");
		var_212_bool = var_208_bool;
		if(var_212_bool == 0) goto Label_815;
		UnlookAsync("head");
	}
Label_815:
	return 2;
	
}


func_989(var_86_bool)
{
	var_88_int = 0; var_89_string = "";
	func_864(var_88_int, "ood7DBirdmask1");
	var_93_bool = var_88_int == (int)0;
	if(var_93_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_864(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
	return 2;
}


func_931(var_11_object)
{
	Trace("dreport is given");
	var_14_object = Obj(); var_15_string = ""; var_16_int = 0;
	var_11_object = var_14_object;
	func_900(var_14_object, "d7q01_dreport", (int)1);
	return 0;
}


func_869(var_30_int, var_31_int)
{
	var_32_object = Obj(); var_33_object = Obj();
	CreateIntVector(var_33_object);
	@@var_33_object:add(var_30_int);
	@@var_33_object:add(var_31_int);
	SendWorldWndMessage((int)3, var_33_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1001(var_148_bool, var_149_object)
{
	var_150_int = 0; var_151_int = 0; var_152_int = 0; var_153_bool = 0; var_154_bool = 0; var_155_int = 0; var_156_object = Obj(); var_157_int = 0; var_158_bool = 0; var_159_bool = 0; var_160_int = 0; var_161_int = 0; var_162_int = 0; var_163_bool = 0; var_164_bool = 0; var_165_int = 0; var_166_object = Obj(); var_167_int = 0; var_168_bool = 0; var_169_bool = 0;
	@@var_149_object:GetItemCount(var_160_int, (int)1);
	GetInvItemByName(var_161_int, "bird_mask");
	GetInvItemByName(var_162_int, "bird_balahon");
	var_163_bool = 0;
	var_164_bool = 0;
	var_165_int = 0;
	
Label_1014:
	var_173_bool = var_165_int < var_160_int;
	if(var_173_bool != 0) {
		@@var_149_object:GetItem(var_166_object, var_165_int, (int)1);
		@@var_166_object:GetItemID(var_167_int);
		var_175_bool = var_167_int == var_161_int;
		if(var_175_bool != 0) {
			@@var_149_object:IsItemSelected(var_168_bool, var_165_int, (int)1);
			var_177_bool = var_168_bool;
			if(var_177_bool != 0) {
				var_163_bool = 1;
			}
		} else {
			var_179_bool = var_167_int == var_162_int;
			if(var_179_bool == 0) goto Label_1038;
			@@var_149_object:IsItemSelected(var_169_bool, var_165_int, (int)1);
			var_181_bool = var_169_bool;
			if(var_181_bool == 0) goto Label_1038;
	}
		var_148_bool = 0;
		var_182_bool = var_163_bool;
		if(var_182_bool != 0) {
			var_183_bool = (bool)1;
			if(var_183_bool != 0) {
				var_148_bool = 1;
			}
		}
		var_166_object = 0;
		var_165_int = var_165_int + (int)1;
		goto Label_1014;
	}
	return 20;
	
}


func_1066(var_66_int)
{
	var_66_int = 515571;
	return 0;
}


func_1068(var_65_int)
{
	var_65_int = 504029;
	return 0;
}


func_1070(var_67_string)
{
	var_67_string = "ui/NPC_bmask.png";
	return 0;
}


func_942()
{
	SetVariable("ood7DBirdmask1", (int)1);
	return 0;
}


func_1072(var_68_string)
{
	var_68_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_816(var_123_string)
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


func_1074(var_60_bool)
{
	var_60_bool = 0;
	return 0;
}


func_881(var_19_object, var_20_object, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0;
	@@var_20_object:GetItemID(var_25_int);
	GetInvItemProperty(var_26_int, var_25_int, "Category");
	@@var_19_object:AddItem(var_27_bool, var_20_object, var_26_int, var_21_int);
	var_29_bool = var_27_bool == 0; //@nz
	if(var_29_bool != 0) {
		@@var_19_object:DropItems(var_20_object, var_21_int);
	} else {
		var_30_int = 0; var_31_int = 0;
		var_25_int = var_30_int;
		var_21_int = var_31_int;
		func_869(var_30_int, var_31_int);
	}
	return 6;
	
}


func_948()
{
	var_55_bool = 0; var_56_string = ""; var_57_string = "";
	func_913(var_55_bool, "quest_d7_01", "kill_player");
	return 0;
}


func_955(var_140_bool)
{
	var_142_int = 0; var_143_string = "";
	func_864(var_142_int, "d7q01");
	var_145_bool = var_142_int == (int)2;
	if(var_145_bool != 0) {
		var_140_bool = 1;
		return 0;
	}
	var_140_bool = 0;
	return 0;
}


