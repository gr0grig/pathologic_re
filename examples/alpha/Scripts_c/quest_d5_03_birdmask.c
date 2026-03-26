// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetVariable/2,FindActor/2,Trigger/2,GetGameTime/1,TriggerWorld/2,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_d5_03|W:completed|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:playsound|W:givemoney|W:ood5Birdmask1|A:GetProperty|A:SetProperty|W:money 50000 removed|W:d5q03BirdmaskBringMoneySelf|A:FindMark|A:Remove|W:d5q03BirdmaskGotoMladVlad|W:d5q03BirdmaskGotoViktor|W:d5q03MladVladSavePrisonersSelf|W:d5q03SavePrisoners|W:d5q03ViktorSavePrisonersSelf|A:SetReturnValue|W:d5q03|W:pt_map_uprava_prison|A:AddMark|W:pt_map_mladvlad|W:pt_map_viktor|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:player|W:Adding diary entry|W:ui/NPC_Black.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x21b
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc9 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x20b vars=object
// @EVENT_26: op=0x21f vars=string
// @EVENT_6: op=0x23b vars=
// @PE: 0x3f,0xb9,0xc9,0x20b,0x285,0x2c8,0x2ce,0x346,0x350,0x35c,0x368,0x374,0x380

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_667();
		var_11_bool = var_7_bool == (int)13729;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_741(var_13_object);
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_object;
			func_724(var_64_object);
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_712();
		}
		var_78_bool = var_7_bool == (int)13730;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_797();
		}
		var_113_bool = var_7_bool == (int)13735;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_724(var_115_object);
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_712();
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_741(var_119_object);
		}
		var_121_bool = var_7_bool == (int)13738;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_718();
		}
		var_127_bool = var_6_int == (int)13720;
		if(var_127_bool != 0) {
			var_128_bool = 0; var_129_object = Obj();
			var_129_object = var_1_object;
			func_860(var_129_object);
			if(var_128_bool != 0) {
				var_136_string = "";
				func_185(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12551);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12552, (int)13722, (int)13721);
				return 0;
			}
			var_155_string = "";
			func_185(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12562);
			@@@var_0_object:ClearReplies();
			var_157_bool = 0;
			var_157_bool = 0;
			var_158_bool = 0; var_159_object = Obj();
			var_159_object = var_1_object;
			func_838(var_158_bool, var_159_object);
			if(var_158_bool != 0) {
				var_167_bool = 0; var_168_object = Obj();
				var_168_object = var_1_object;
				func_896(var_168_object);
				if(var_167_bool != 0) {
					var_157_bool = 1;
				}
			}
			if(var_157_bool != 0) {
				@@@var_0_object:AddReply((int)12563, (int)13734, (int)13732);
			}
			var_176_bool = 0;
			var_176_bool = 0;
			var_177_bool = 0;
			var_177_bool = 0;
			var_178_bool = 0; var_179_object = Obj();
			var_179_object = var_1_object;
			func_848(var_179_object);
			if(var_178_bool != 0) {
				var_184_bool = 0; var_185_object = Obj();
				var_185_object = var_1_object;
				func_872(var_185_object);
				var_190_bool = var_184_bool == 0; //@nz
				if(var_190_bool != 0) {
					var_177_bool = 1;
				}
			}
			if(var_177_bool != 0) {
				var_191_bool = 0; var_192_object = Obj();
				var_192_object = var_1_object;
				func_884(var_192_object);
				var_197_bool = var_191_bool == 0; //@nz
				if(var_197_bool != 0) {
					var_176_bool = 1;
				}
			}
			if(var_176_bool != 0) {
				@@@var_0_object:AddReply((int)12567, (int)13737, (int)13736);
			}
			@@@var_0_object:AddReply((int)12564, (int)-1, (int)13733);
			return 0;
		}
		var_205_bool = var_6_int == (int)13737;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_185(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12568);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12609, (int)13785, (int)13784);
			return 0;
		}
		var_212_bool = var_6_int == (int)13785;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_185(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12610);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12569, (int)-1, (int)13738);
			return 0;
		}
		var_219_bool = var_6_int == (int)13734;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_185(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12565);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12566, (int)-1, (int)13735);
			return 0;
		}
		var_226_bool = var_6_int == (int)13722;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_185(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12553);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12554, (int)13724, (int)13723);
			@@@var_0_object:AddReply((int)12604, (int)13778, (int)13777);
			return 0;
		}
		var_236_bool = var_6_int == (int)13778;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_185(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12605);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12606, (int)13724, (int)13779);
			return 0;
		}
		var_243_bool = var_6_int == (int)13724;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_185(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12555);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12556, (int)13726, (int)13725);
			@@@var_0_object:AddReply((int)12607, (int)13726, (int)13781);
			return 0;
		}
		var_253_bool = var_6_int == (int)13726;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_185(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12557);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12558, (int)13728, (int)13727);
			return 0;
		}
		var_260_bool = var_6_int == (int)13728;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_185(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12559);
			@@@var_0_object:ClearReplies();
			var_263_bool = 0; var_264_object = Obj();
			var_264_object = var_1_object;
			func_838(var_263_bool, var_264_object);
			if(var_263_bool != 0) {
				@@@var_0_object:AddReply((int)12560, (int)-1, (int)13729);
			}
			@@@var_0_object:AddReply((int)12561, (int)-1, (int)13730);
			return 0;
		}
		var_3_string = true;
		var_271_bool = 0;
		func_1031(var_271_bool);
		if(var_271_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xca";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	var_164_bool = var_9_object == (int)1;
	if(var_164_bool != 0) {
		var_165_bool = 0; var_166_string = ""; var_167_string = "";
		func_695(var_165_bool, "quest_d5_03", "completed");
	}
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
			func_587(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_674(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_570;
		var_0_object = false;
	}
Label_570:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_587(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_674(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_539:
	Hold();
	goto Label_539;
}
EMIT "Return(); Pop(0)";


func_896(var_124_bool)
{
	var_126_int = 0; var_127_string = "";
	func_690(var_126_int, "d5q03");
	var_129_bool = var_126_int == (int)2;
	if(var_129_bool != 0) {
		var_124_bool = 1;
		return 0;
	}
	var_124_bool = 0;
	return 0;
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj();
	var_8_object = var_19_object;
	func_589(var_18_bool, var_19_object);
	var_58_bool = var_18_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_59_int = 0;
	func_1027(var_59_int);
	@@var_14_object:SetNPCName(var_59_int);
	var_60_string = "";
	func_1029(var_60_string);
	@@var_14_object:SetPhoto(var_60_string);
	var_61_int = 0;
	func_978(var_61_int);
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
	var_161_bool = var_17_bool == 0; //@nz
	if(var_161_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_45;
	}
	var_8_object = Obj();
	func_645();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1027(var_59_int)
{
	var_59_int = 4029;
	return 0;
}


func_1029(var_60_string)
{
	var_60_string = "ui/NPC_Black.png";
	return 0;
}


func_645()
{
	CameraSwitchToNormal();
	return 0;
}


func_1031(var_86_bool)
{
	var_86_bool = 0;
	return 0;
}


func_649(var_89_string)
{
	var_90_float = 0; var_91_float = 0; var_92_float = 0; var_93_float = 0;
	var_95_int = "playing " + var_89_string;
	Trace(var_95_int);
	lshGetAnimTimes(var_89_string, var_92_float, var_93_float);
	lshPlayAnimation(var_92_float, var_93_float);
	var_97_int = "start: " + var_92_float;
	Trace(var_97_int);
	var_99_int = "end: " + var_93_float;
	Trace(var_99_int);
	return 4;
}


func_908(var_117_bool, var_118_object)
{
	var_119_float = 0; var_120_float = 0;
	@@var_118_object:GetProperty("money", var_120_float);
	var_123_bool = var_120_float >= (int)50000;
	if(var_123_bool != 0) {
		var_117_bool = 1;
		return 2;
	}
	var_117_bool = 0;
	return 2;
}


func_919(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj();
	GetDiaryRoot(var_54_object);
	var_55_bool = var_54_object == 0; //@nz
	if(var_55_bool != 0) {
		Trace("Can't retrieve diary root");
		var_52_object = 0;
		return 2;
	}
	var_54_object = var_52_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_667()
{
	var_9_bool = 0;
	func_1031(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_797()
{
	var_81_object = Obj(); var_82_object = Obj();
	SetVariable("d5q03", (int)2);
	func_961(Obj());
	var_85_object = var_82_object;
	var_90_float = 0;
	func_707(var_90_float);
	@@var_82_object:AddMark("d5q03BirdmaskBringMoneySelf", "pt_map_uprava_prison", (int)0, (int)15372, var_90_float);
	var_97_float = 0;
	func_707(var_97_float);
	@@var_82_object:AddMark("d5q03BirdmaskGotoMladVlad", "pt_map_mladvlad", (int)0, (int)15374, var_97_float);
	var_102_float = 0;
	func_707(var_102_float);
	@@var_82_object:AddMark("d5q03BirdmaskGotoViktor", "pt_map_viktor", (int)0, (int)15373, var_102_float);
	func_995();
	return 2;
}
EMIT "Stack[-1] = 0";


func_674(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_932(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0;
	func_919(Obj());
	var_52_object = var_49_object;
	@@var_49_object:Find(var_45_int, var_50_object);
	var_57_bool = var_50_object == 0; //@nz
	if(var_57_bool != 0) {
		var_59_int = "Can't find diary parent with id: " + var_45_int;
		Trace(var_59_int);
		var_43_bool = 0;
		return 6;
	}
	@@var_50_object:AddChild(var_44_object);
	SetVariable("player_diary", (int)1);
	@@var_44_object:GetCategory(var_51_int);
	SetDiarySection(var_51_int);
	var_43_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_680(var_43_cvector, var_44_cvector)
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


func_690(var_79_int, var_80_string)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable(var_80_string, var_82_int);
	var_82_int = var_79_int;
	return 2;
}


func_695(var_165_bool, var_166_string, var_167_string)
{
	var_168_object = Obj(); var_169_object = Obj();
	FindActor(var_169_object, var_166_string);
	var_170_bool = var_169_object == 0; //@ne
	if(var_170_bool != 0) {
		var_165_bool = 0;
		return 2;
	}
	Trigger(var_169_object, var_167_string);
	var_165_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_185(var_2_object, var_85_string)
{
	var_86_bool = 0;
	func_1031(var_86_bool);
	var_87_bool = var_86_bool == 0; //@nz
	if(var_87_bool != 0) {
		return 0;
	}
	var_88_bool = var_85_string == var_2_object;
	if(var_88_bool != 0) {
		return 0;
	}
	var_89_string = "";
	var_85_string = var_89_string;
	func_649(var_89_string);
	var_2_object = var_85_string;
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_77_bool = 0; var_78_object = Obj();
		var_78_object = var_1_object;
		func_860(var_78_object);
		if(var_77_bool != 0) {
			var_85_string = "";
			func_185(var_71_object, "Neutral");
			@@@var_0_object:SetMessage((int)12551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12552, (int)13722, (int)13721);
		} else {
				var_112_string = "";
				func_185(var_71_object, "Neutral");
				@@@var_0_object:SetMessage((int)12562);
				@@@var_0_object:ClearReplies();
				var_114_bool = 0;
				var_114_bool = 0;
				var_115_bool = 0; var_116_object = Obj();
				var_116_object = var_1_object;
				func_838(var_115_bool, var_116_object);
				if(var_115_bool != 0) {
					var_124_bool = 0; var_125_object = Obj();
					var_125_object = var_1_object;
					func_896(var_125_object);
					if(var_124_bool != 0) {
						var_114_bool = 1;
					}
				}
				if(var_114_bool != 0) {
					@@@var_0_object:AddReply((int)12563, (int)13734, (int)13732);
				}
				var_133_bool = 0;
				var_133_bool = 0;
				var_134_bool = 0;
				var_134_bool = 0;
				var_135_bool = 0; var_136_object = Obj();
				var_136_object = var_1_object;
				func_848(var_136_object);
				if(var_135_bool != 0) {
					var_141_bool = 0; var_142_object = Obj();
					var_142_object = var_1_object;
					func_872(var_142_object);
					var_147_bool = var_141_bool == 0; //@nz
					if(var_147_bool != 0) {
						var_134_bool = 1;
					}
				}
				if(var_134_bool != 0) {
					var_148_bool = 0; var_149_object = Obj();
					var_149_object = var_1_object;
					func_884(var_149_object);
					var_154_bool = var_148_bool == 0; //@nz
					if(var_154_bool != 0) {
						var_133_bool = 1;
					}
				}
				if(var_133_bool != 0) {
					@@@var_0_object:AddReply((int)12567, (int)13737, (int)13736);
				}
				@@@var_0_object:AddReply((int)12564, (int)-1, (int)13733);
				goto Label_155;
		}
	}
Label_155:
	var_104_bool = 0;
	func_1031(var_104_bool);
	if(var_104_bool != 0) {

	Label_159:
		lshWaitForAnimEnd();
		var_105_string = var_3_string;
		if(var_105_string != 0) {
		} else {
			var_106_string = "";
			var_106_string = var_2_object;
			func_649(var_106_string);
			goto Label_159;
	}
		PlayAnimation("all", "idle");

	Label_174:
		WaitForAnimEnd();
		var_109_string = var_3_string;
		if(var_109_string != 0) {
			goto Label_184;
		}
		PlayAnimation("all", "idle");
		goto Label_174;

	}
	goto Label_184;
	
Label_184:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


func_961(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj();
	GetMainOutdoorScene(var_21_object);
	var_23_bool = var_21_object == 0; //@ne
	if(var_23_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_22_object = 0;
		var_22_object = var_18_object;
		return 4;
	}
	@@var_21_object:GetMap(var_22_object);
	var_22_object = var_18_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_707(var_90_float)
{
	var_91_float = 0; var_92_float = 0;
	GetGameTime(var_92_float);
	var_92_float = var_90_float;
	return 2;
}


func_838(var_115_bool, var_116_object)
{
	var_117_bool = 0; var_118_object = Obj();
	var_116_object = var_118_object;
	func_908(var_117_bool, var_118_object);
	if(var_117_bool != 0) {
		var_115_bool = 1;
		return 0;
	}
	var_115_bool = 0;
	return 0;
}


func_712()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_587(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_589(var_18_bool, var_19_object)
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
	func_680(var_43_cvector, var_44_cvector);
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


func_718()
{
	SetVariable("ood5Birdmask1", (int)1);
	return 0;
}


func_848(var_135_bool)
{
	var_137_int = 0; var_138_string = "";
	func_690(var_137_int, "ood5Birdmask1");
	var_140_bool = var_137_int == (int)0;
	if(var_140_bool != 0) {
		var_135_bool = 1;
		return 0;
	}
	var_135_bool = 0;
	return 0;
}


func_978(var_61_int)
{
	var_62_int = 0; var_63_int = 0;
	GetVariable("player", var_63_int);
	var_66_bool = var_63_int == (int)0;
	if(var_66_bool != 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x3e1";
	}
	var_68_bool = var_63_int == (int)1;
	if(var_68_bool != 0) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
	return 2;
}


func_724(var_63_object)
{
	var_65_float = 0; var_66_float = 0;
	@@var_63_object:GetProperty("money", var_66_float);
	var_66_float = var_66_float - (int)50000;
	var_70_bool = var_66_float < (int)0;
	if(var_70_bool != 0) {
		var_66_float = 0;
	}
	@@var_63_object:SetProperty("money", var_66_float);
	Trace("money 50000 removed");
	return 2;
}


func_860(var_77_bool)
{
	var_79_int = 0; var_80_string = "";
	func_690(var_79_int, "d5q03");
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_bool = 1;
		return 0;
	}
	var_77_bool = 0;
	return 0;
}


func_995()
{
	var_103_object = Obj(); var_104_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_104_object, (int)156, (int)2, (int)15367);
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0;
	var_104_object = var_110_object;
	func_932(var_109_bool, var_110_object, (int)154);
	return 2;
}
EMIT "Stack[-1] = 0";


func_741(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj();
	func_961(Obj());
	var_18_object = var_16_object;
	@@var_16_object:FindMark(var_17_object, "d5q03BirdmaskBringMoneySelf");
	var_26_object = var_17_object;
	if(var_26_object != 0) {
		@@var_17_object:Remove();
	}
	@@var_16_object:FindMark(var_17_object, "d5q03BirdmaskGotoMladVlad");
	var_28_object = var_17_object;
	if(var_28_object != 0) {
		@@var_17_object:Remove();
	}
	@@var_16_object:FindMark(var_17_object, "d5q03BirdmaskGotoViktor");
	var_30_object = var_17_object;
	if(var_30_object != 0) {
		@@var_17_object:Remove();
	}
	@@var_16_object:FindMark(var_17_object, "d5q03MladVladSavePrisonersSelf");
	var_32_object = var_17_object;
	if(var_32_object != 0) {
		@@var_17_object:Remove();
	}
	@@var_16_object:FindMark(var_17_object, "d5q03SavePrisoners");
	var_34_object = var_17_object;
	if(var_34_object != 0) {
		@@var_17_object:Remove();
	}
	@@var_16_object:FindMark(var_17_object, "d5q03ViktorSavePrisonersSelf");
	var_36_object = var_17_object;
	if(var_36_object != 0) {
		@@var_17_object:Remove();
	}
	func_1011();
	@@var_13_object:SetReturnValue((int)1);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_872(var_141_bool)
{
	var_143_int = 0; var_144_string = "";
	func_690(var_143_int, "d5q03");
	var_146_bool = var_143_int == (int)1000;
	if(var_146_bool != 0) {
		var_141_bool = 1;
		return 0;
	}
	var_141_bool = 0;
	return 0;
}


func_1011()
{
	var_37_object = Obj(); var_38_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_38_object, (int)157, (int)2, (int)15368);
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0;
	var_38_object = var_44_object;
	func_932(var_43_bool, var_44_object, (int)154);
	return 2;
}
EMIT "Stack[-1] = 0";


func_884(var_148_bool)
{
	var_150_int = 0; var_151_string = "";
	func_690(var_150_int, "d5q03");
	var_153_bool = var_150_int == (int)-1;
	if(var_153_bool != 0) {
		var_148_bool = 1;
		return 0;
	}
	var_148_bool = 0;
	return 0;
}


