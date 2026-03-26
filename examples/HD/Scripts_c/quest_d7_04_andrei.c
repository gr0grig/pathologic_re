// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,FindActor/2,Trigger/2,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Grin|A:SetMessage|A:ClearReplies|A:AddReply|W:Untrust|W:all|W:idle|W:Smile|W:Neutral|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ood7AndreiPrisoned1|W:quest_d7_04|W:completed|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Andrei.png|W:ui/NPC_Andrei_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1f6
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbf vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x1ee vars=object
// @EVENT_26: op=0x1fa vars=string
// @EVENT_6: op=0x216 vars=
// @PE: 0x51,0xa9,0xbf,0x1ee,0x368,0x36e,0x378

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_823();
		var_11_bool = var_7_bool == (int)34738;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_878();
		}
		var_44_bool = var_7_bool == (int)37544;
		if(var_44_bool != 0) {
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_878();
		}
		var_48_bool = var_6_int == (int)34729;
		if(var_48_bool != 0) {
			var_49_bool = 0; var_50_object = Obj();
			var_50_object = var_1_object;
			func_888(var_50_object);
			if(var_49_bool != 0) {
				var_57_object = Obj(); var_58_object = Obj();
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_872();
				var_61_string = "";
				func_169(var_7_bool, "Grin");
				@@@var_0_object:SetMessage((int)533209);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)535195, (int)36867, (int)36866);
				@@@var_0_object:AddReply((int)535202, (int)36867, (int)36873);
				return 0;
			}
			var_85_string = "";
			func_169(var_7_bool, "Untrust");
			@@@var_0_object:SetMessage((int)533219);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533220, (int)-1, (int)34740);
			@@@var_0_object:AddReply((int)535201, (int)-1, (int)36872);
			return 0;
		}
		var_94_bool = var_6_int == (int)36867;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_169(var_7_bool, "Untrust");
			@@@var_0_object:SetMessage((int)535196);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535197, (int)36869, (int)36868);
			@@@var_0_object:AddReply((int)535200, (int)37527, (int)36871);
			return 0;
		}
		var_104_bool = var_6_int == (int)36869;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_169(var_7_bool, "Untrust");
			@@@var_0_object:SetMessage((int)535198);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535831, (int)37526, (int)37525);
			@@@var_0_object:AddReply((int)535828, (int)37538, (int)37522);
			return 0;
		}
		var_114_bool = var_6_int == (int)37526;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_169(var_7_bool, "Untrust");
			@@@var_0_object:SetMessage((int)535832);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535199, (int)37527, (int)36870);
			@@@var_0_object:AddReply((int)535194, (int)34731, (int)36865);
			return 0;
		}
		var_124_bool = var_6_int == (int)34731;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_169(var_7_bool, "Untrust");
			@@@var_0_object:SetMessage((int)533211);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533212, (int)34733, (int)34732);
			@@@var_0_object:AddReply((int)535834, (int)37538, (int)37528);
			return 0;
		}
		var_134_bool = var_6_int == (int)37538;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_169(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)535843);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535844, (int)37533, (int)37539);
			return 0;
		}
		var_141_bool = var_6_int == (int)37527;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_169(var_7_bool, "Untrust");
			@@@var_0_object:SetMessage((int)535833);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535835, (int)34733, (int)37529);
			@@@var_0_object:AddReply((int)535845, (int)37533, (int)37542);
			return 0;
		}
		var_151_bool = var_6_int == (int)34733;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533213);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533214, (int)34735, (int)34734);
			@@@var_0_object:AddReply((int)535842, (int)34735, (int)37537);
			return 0;
		}
		var_161_bool = var_6_int == (int)34735;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_169(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533215);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533216, (int)37533, (int)34736);
			return 0;
		}
		var_168_bool = var_6_int == (int)37533;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_169(var_7_bool, "Untrust");
			@@@var_0_object:SetMessage((int)535838);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535840, (int)37536, (int)37535);
			@@@var_0_object:AddReply((int)535846, (int)-1, (int)37544);
			return 0;
		}
		var_178_bool = var_6_int == (int)37536;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_169(var_7_bool, "Untrust");
			@@@var_0_object:SetMessage((int)535841);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533218, (int)-1, (int)34738);
			return 0;
		}
		var_3_string = true;
		var_184_bool = 0;
		func_979(var_184_bool);
		if(var_184_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc0";
	
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
			func_550(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_830(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_533;
		var_0_object = false;
	}
Label_533:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_550(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_830(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_502:
	Hold();
	goto Label_502;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_552(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_973(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_971(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_975(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_977(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_954(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_830(Obj());
	var_81_object = var_80_object;
	func_639(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_243_bool = var_17_bool == 0; //@nz
	if(var_243_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_621();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_900()
{
	var_14_object = Obj(); var_15_object = Obj();
	CreateDiaryEntry(var_15_object, (int)640, (int)2, (int)533226);
	var_19_bool = 0; var_20_object = Obj(); var_21_int = 0;
	var_15_object = var_20_object;
	func_926(var_19_bool, var_20_object, (int)637);
	return 2;
}
EMIT "Stack[-1] = 0";


func_836(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_46_cvector | var_46_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_49_float;
	return 2;
}


func_777(var_219_string)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0;
	lshHasAnimation(var_223_bool, var_219_string);
	var_226_bool = var_223_bool;
	if(var_226_bool != 0) {
		lshGetAnimTimes(var_219_string, var_224_float, var_225_float);
		lshPlayAnimation(var_224_float, var_225_float, (bool)0);
	} else {
		var_229_int = "Can't find lsh animation : " + var_219_string;
		Trace(var_229_int);
	}
	return 6;
	
}


func_971(var_67_int)
{
	var_67_int = 515529;
	return 0;
}


func_973(var_66_int)
{
	var_66_int = 502855;
	return 0;
}


func_846(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0;
	GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
	return 2;
}


func_975(var_68_string)
{
	var_68_string = "ui/NPC_Andrei.png";
	return 0;
}


func_913(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj();
	GetDiaryRoot(var_30_object);
	var_31_bool = var_30_object == 0; //@nz
	if(var_31_bool != 0) {
		Trace("Can't retrieve diary root");
		var_28_object = 0;
		return 2;
	}
	var_30_object = var_28_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_977(var_69_string)
{
	var_69_string = "ui/NPC_Andrei_b.png";
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_bool = 0; var_182_object = Obj();
		var_182_object = var_1_object;
		func_888(var_182_object);
		if(var_181_bool != 0) {
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_872();
			var_193_string = "";
			func_169(var_175_object, "Grin");
			@@@var_0_object:SetMessage((int)533209);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535195, (int)36867, (int)36866);
			@@@var_0_object:AddReply((int)535202, (int)36867, (int)36873);
		} else {
				var_235_string = "";
				func_169(var_175_object, "Untrust");
				@@@var_0_object:SetMessage((int)533219);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)533220, (int)-1, (int)34740);
				@@@var_0_object:AddReply((int)535201, (int)-1, (int)36872);
				goto Label_139;
		}
	}
Label_139:
	var_217_bool = 0;
	func_979(var_217_bool);
	if(var_217_bool != 0) {

	Label_143:
		lshWaitForAnimEnd();
		var_218_string = var_3_string;
		if(var_218_string != 0) {
		} else {
			var_219_string = "";
			var_219_string = var_2_object;
			func_777(var_219_string);
			goto Label_143;
	}
		PlayAnimation("all", "idle");

	Label_158:
		WaitForAnimEnd();
		var_232_string = var_3_string;
		if(var_232_string != 0) {
			goto Label_168;
		}
		PlayAnimation("all", "idle");
		goto Label_158;

	}
	goto Label_168;
	
Label_168:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_979(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_851(var_37_bool, var_38_string, var_39_string)
{
	var_40_object = Obj(); var_41_object = Obj();
	FindActor(var_41_object, var_38_string);
	var_42_bool = var_41_object == 0; //@ne
	if(var_42_bool != 0) {
		var_37_bool = 0;
		return 2;
	}
	Trigger(var_41_object, var_39_string);
	var_37_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_793(var_197_string, var_198_bool)
{
	var_201_bool = 0; var_202_float = 0; var_203_float = 0; var_204_bool = 0; var_205_float = 0; var_206_float = 0;
	lshHasAnimation(var_204_bool, var_197_string);
	var_207_bool = var_204_bool;
	if(var_207_bool != 0) {
		lshGetAnimTimes(var_197_string, var_205_float, var_206_float);
		lshPlayAnimation(var_205_float, var_206_float, var_198_bool);
	} else {
		var_209_int = "Can't find lsh animation : " + var_197_string;
		Trace(var_209_int);
	}
	return 6;
	
}


func_926(var_19_bool, var_20_object, var_21_int)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_int = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0;
	func_913(Obj());
	var_28_object = var_25_object;
	@@var_25_object:Find(var_21_int, var_26_object);
	var_33_bool = var_26_object == 0; //@nz
	if(var_33_bool != 0) {
		var_35_int = "Can't find diary parent with id: " + var_21_int;
		Trace(var_35_int);
		var_19_bool = 0;
		return 6;
	}
	@@var_26_object:AddChild(var_20_object);
	SendWorldWndMessage((int)7);
	@@var_20_object:GetCategory(var_27_int);
	SetDiarySection(var_27_int);
	var_19_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_734(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_863(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_743:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_743;
		}
	}
	var_147_bool = var_129_int == 0; //@nz
	if(var_147_bool != 0) {
		var_121_bool = 0;
		return 10;
	}
	var_131_int = 0;
	var_149_bool = var_129_int > (int)1;
	if(var_149_bool != 0) {
		irand(var_131_int, var_129_int);
	}
	var_151_int = var_131_int + (int)1;
	var_152_int = var_128_string + var_151_int;
	@@var_122_object:GetProperty(var_152_int, var_132_string);
	var_153_bool = 0; var_154_string = "";
	var_132_string = var_154_string;
	func_808(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_863(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_550(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_552(var_18_bool, var_19_object, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0;
	@@var_19_object:GetPosition(var_31_cvector);
	@@var_19_object:GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	var_39_float = var_39_float + var_30_float;
	SetByIndex(var_31_cvector, 1) = var_39_float;
	GetPosition(var_32_cvector);
	GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	var_40_float = var_40_float + var_30_float;
	SetByIndex(var_32_cvector, 1) = var_40_float;
	var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_42_int = var_33_cvector | var_33_cvector;
	var_43_float = sqrt(var_42_int);
	var_33_cvector = var_33_cvector / var_43_float;
	var_34_cvector = -var_33_cvector;
	var_44_float = var_33_cvector * var_20_float;
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_34_cvector ^ CVector(0.0, 1.0, 0.0);
	func_836(var_45_cvector, var_46_cvector);
	var_54_float = var_45_cvector * (int)25;
	var_55_int = var_44_float + var_54_float;
	var_35_cvector = var_55_int - CVector(0.0, 10.0, 0.0);
	var_36_cvector = var_32_cvector + var_35_cvector;
	IsOverrideActive(var_37_bool);
	var_57_bool = var_37_bool;
	if(var_57_bool != 0) {
		var_18_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_36_cvector, var_34_cvector, (bool)1);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_59_float, var_60_float);
	var_61_bool = 0;
	func_979(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_615;
		LookAsyncCamera("head");
	}
Label_615:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_169(var_2_object, var_193_string)
{
	var_194_bool = 0;
	func_979(var_194_bool);
	var_195_bool = var_194_bool == 0; //@nz
	if(var_195_bool != 0) {
		return 0;
	}
	var_196_bool = var_193_string == var_2_object;
	if(var_196_bool != 0) {
		return 0;
	}
	var_197_string = ""; var_198_bool = 0;
	var_193_string = var_197_string;
	var_200_bool = var_193_string == "";
	if(var_200_bool != 0) {
		var_198_bool = 0;
	} else {
		var_198_bool = 1;
	}
	func_793(var_197_string, var_198_bool);
	var_2_object = var_193_string;
	return 0;
	
}


func_808(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_979(var_117_bool);
	if(var_117_bool != 0) {
		lshHasSpeech(var_116_bool, var_114_string);
		var_118_bool = var_116_bool;
		if(var_118_bool != 0) {
			lshPlaySpeech(var_114_string);
			var_113_bool = 1;
			return 2;
		}
	}
	var_113_bool = 0;
	return 2;
}


func_872()
{
	SetVariable("ood7AndreiPrisoned1", (int)1);
	return 0;
}


func_621()
{
	var_245_bool = 0; var_246_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_248_bool = 0;
	func_979(var_248_bool);
	if(var_248_bool != 0) {
	} else {
		HasAnimationTrack(var_246_bool, "head");
		var_250_bool = var_246_bool;
		if(var_250_bool == 0) goto Label_638;
		UnlookAsync("head");
	}
Label_638:
	return 2;
	
}


func_878()
{
	func_900();
	var_37_bool = 0; var_38_string = ""; var_39_string = "";
	func_851(var_37_bool, "quest_d7_04", "completed");
	return 0;
}


func_823()
{
	var_9_bool = 0;
	func_979(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_888(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_846(var_183_int, "ood7AndreiPrisoned1");
	var_188_bool = var_183_int == (int)0;
	if(var_188_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_697(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_700:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_700;
		}
	}
	var_107_bool = var_98_int == 0; //@nz
	if(var_107_bool != 0) {
		var_90_bool = 0;
		return 10;
	}
	var_100_int = 0;
	var_109_bool = var_98_int > (int)1;
	if(var_109_bool != 0) {
		irand(var_100_int, var_98_int);
	}
	var_111_int = var_100_int + (int)1;
	var_112_int = var_97_string + var_111_int;
	@@var_91_object:GetProperty(var_112_int, var_101_string);
	var_113_bool = 0; var_114_string = "";
	var_101_string = var_114_string;
	func_808(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_954(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x3c9";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_830(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_639(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_697(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_734(var_121_bool, var_122_object);
			var_156_bool = var_121_bool == 0; //@nz
			if(var_156_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		irand(var_87_int, (int)2);
		var_158_int = var_87_int;
		if(var_158_int != 0) {
			var_161_int = var_86_int + (int)1;
			var_163_int = var_161_int % (int)3;
			SetVariable("voice_common", var_163_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_166_bool = 0; var_167_object = Obj();
		var_80_object = var_167_object;
		func_734(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_697(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_695;
	
Label_695:
	var_79_bool = 1;
	return 4;
	
}


