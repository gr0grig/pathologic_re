// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		if(1 != 0) {
			func_852();
			if(var_11_object == 41172) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_933();
			}
			if(var_11_object == 41187) {
				object var_22_object; object var_23_object;
				var_22_object = var_1_object;
				var_23_object = var_0_object;
				func_926();
			}
			if(var_10_bool == 41171) {
				bool var_32_bool;
				func_939(var_32_bool, var_1_object);
				if(!var_32_bool) { //@nz
					func_227(var_11_object, "Neutral");
					var_0_object->SetMessage(539228); //@t
					var_0_object->ClearReplies(); //@t
					bool var_163_bool;
					func_973(var_1_object);
					if(var_163_bool != 0)
						var_0_object->AddReply(539229, 45272, 41172); //@t
					var_0_object->AddReply(539242, -1, 41185); //@t
					return 0;
				}
				bool var_177_bool;
				func_949(var_1_object);
				if(!var_177_bool) { //@nz
					func_227(var_11_object, "Neutral");
					var_0_object->SetMessage(541628); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(541629, 43802, 43801); //@t
					var_0_object->AddReply(541633, -1, 43805); //@t
					return 0;
				}
				bool var_192_bool = false;
				bool var_193_bool = false;
				bool var_194_bool;
				func_949(var_1_object);
				if(var_194_bool != 0) {
					bool var_196_bool;
					func_939(var_196_bool, var_1_object);
					if(var_196_bool != 0)
						var_193_bool = true;
				}
				if(var_193_bool != 0) {
					bool var_198_bool;
					func_961(var_1_object);
					if(var_198_bool != 0)
						var_192_bool = true;
				}
				if(var_192_bool != 0) {
					object var_204_object; object var_205_object;
					var_204_object = var_1_object;
					var_205_object = var_0_object;
					func_920();
					func_227(var_11_object, "Neutral");
					var_0_object->SetMessage(539243); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(539244, -1, 41187); //@t
					return 0;
				}
				func_227(var_11_object, "Neutral");
				var_0_object->SetMessage(539245); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539246, -1, 41189); //@t
				return 0;
			}
			if(var_10_bool == 43802) {
				func_227(var_11_object, "Neutral");
				var_0_object->SetMessage(541630); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541631, -1, 43803); //@t
				var_0_object->AddReply(541632, -1, 43804); //@t
				return 0;
			}
			if(var_10_bool == 45272) {
				func_227(var_11_object, "Neutral");
				var_0_object->SetMessage(542846); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542847, 45275, 45273); //@t
				var_0_object->AddReply(542848, -1, 45274); //@t
				return 0;
			}
			if(var_10_bool == 45275) {
				func_227(var_11_object, "Neutral");
				var_0_object->SetMessage(542849); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542850, -1, 45276); //@t
				var_0_object->AddReply(542851, 45278, 45277); //@t
				var_0_object->AddReply(542855, 45282, 45281); //@t
				return 0;
			}
			if(var_10_bool == 45282) {
				func_227(var_11_object, "Neutral");
				var_0_object->SetMessage(542856); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542857, -1, 45283); //@t
				return 0;
			}
			if(var_10_bool == 45278) {
				func_227(var_11_object, "Neutral");
				var_0_object->SetMessage(542852); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542853, -1, 45279); //@t
				var_0_object->AddReply(542854, -1, 45280); //@t
				return 0;
			}
			var_3_string = true;
			bool var_268_bool;
			func_918(var_268_bool);
			if(var_268_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfa";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		while(true != 0) {
			func_545(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(1);
		}
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		int var_11_int; int var_12_int;
		@GetVariable("k12q01TheaterIsVisited", var_12_int);
		if(!var_12_int) { //@nz
			func_610(var_11_int, var_12_int);
			int var_18_int; object var_19_object;
			var_10_object = var_19_object;
			TaskCall(0);
			func_0(var_20_object, var_18_int, var_19_object);
			TaskReturn();
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int)
	{
		if(var_10_int == 10) {
			bool var_13_bool;
			func_572(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_841(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_18_int, object var_19_object)
{
	var_0_object = var_19_object;
	bool var_29_bool; object var_30_object;
	var_19_object = var_30_object;
	func_723(var_29_bool, var_30_object, 130.0);
	if(!var_29_bool) { //@nz
		var_18_int = -2;
		return 8;
	}
	object var_25_object;
	@CreateDialog(var_25_object);
	int var_77_int;
	func_912(var_77_int);
	var_25_object->SetNPCName(var_77_int);
	int var_78_int;
	func_910(var_78_int);
	var_25_object->SetNPCDescription(var_78_int);
	string var_79_string;
	func_914(var_79_string);
	var_25_object->SetPhoto(var_79_string);
	string var_80_string;
	func_916(var_80_string);
	var_25_object->SetPhoto2(var_80_string);
	int var_81_int;
	func_991(var_81_int);
	var_25_object->SetPlayerName(var_81_int);
	bool var_26_bool;
	@IsOverrideActive(var_26_bool);
	if(var_26_bool != 0) {
		var_18_int = -2;
		return 8;
	}
	@DoDialog(var_25_object);
	object var_90_object; object var_91_object;
	var_19_object = var_90_object;
	var_25_object = var_91_object;
	TaskCall(1);
	func_74(var_92_object, var_93_object, var_94_string, var_95_bool, var_90_object, var_91_object);
	TaskReturn();
	bool var_28_bool;
	var_25_object->IsDialogEnd(var_28_bool);
	
	for(;;) {
		var_301_bool = !var_28_bool; //@nz
		if(var_301_bool == 0) goto Label_63;
		@sync();
		var_25_object->IsDialogEnd(var_28_bool);
	}
	
Label_63:
	object var_302_object;
	var_19_object = var_302_object;
	func_792();
	@StopDialog(var_25_object);
	var_25_object->GetReturnValue(-1);
	int var_27_int = var_18_int;
}
EMIT "Stack[-4] = 0";


void func_1164(bool var_147_bool)
{
	object var_152_object; int var_155_int;
	@CreateIntVector(var_152_object);
	object var_156_object;
	var_152_object = var_156_object;
	func_1041(var_156_object, false, -1);
	int var_153_int;
	var_152_object->size(var_153_int);
	int var_154_int = 0;
	
	while(var_154_int < var_153_int) {
		var_152_object->get(var_155_int, var_154_int);
		bool var_172_bool = true;
		bool var_173_bool; int var_174_int;
		var_155_int = var_174_int;
		func_1116(var_173_bool, var_174_int);
		if(var_173_bool != 1) {
			bool var_175_bool; int var_176_int;
			var_155_int = var_176_int;
			func_1106(var_175_bool, var_176_int);
			if(var_175_bool != 1)
				var_172_bool = false;
		}
		if(var_172_bool != 0)
			var_147_bool = false;
		var_154_int += 1;
	}
	
	var_147_bool = true;
}
EMIT "Stack[-4] = 0";


void func_910(int var_78_int)
{
	var_78_int = 515571;
}


void func_912(int var_77_int)
{
	var_77_int = 504029;
}


// @pe
void func_1041(object var_156_object, bool var_157_bool, int var_158_int)
{
	var_156_object->add(6);
	var_156_object->add(26);
	var_156_object->add(2);
	var_156_object->add(22);
	if(var_157_bool == false) {
		var_156_object->add(15);
		var_156_object->add(5);
		var_156_object->add(16);
	} else if(var_158_int != 0) {
		var_156_object->add(15);
	}
	
}


void func_914(string var_79_string)
{
	var_79_string = "ui/NPC_bmask.png";
}


void func_916(string var_80_string)
{
	var_80_string = "ui/NPC_bmask_b.png";
}


void func_918(bool var_72_bool)
{
	var_72_bool = false;
}


void func_792(void)
{
	bool var_304_bool;
	@CameraSwitchToNormal(true);
	bool var_306_bool;
	func_918(var_306_bool);
	if(var_306_bool != 0) {
	} else {
		@HasAnimationTrack(var_304_bool, "head");
		if(var_304_bool == 0) goto Label_809;
		@UnlookAsync("head");
	}
Label_809:
	
}


// @pe
void func_920(void)
{
	@SetVariable("ook12BirdmaskT1", 1);
}


// @pe
void func_926(void)
{
	bool var_24_bool;
	func_874(var_24_bool, "quest_k12_01", "init_theater");
}


// @pe
void func_545(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_718(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_624();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_933(void)
{
	@SetVariable("ook12BirdmaskT2", 1);
}


void func_810(string var_244_string)
{
	bool var_248_bool; float var_249_float; float var_250_float;
	@lshHasAnimation(var_248_bool, var_244_string);
	if(var_248_bool != 0) {
		@lshGetAnimTimes(var_244_string, var_249_float, var_250_float);
		@lshPlayAnimation(var_249_float, var_250_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_244_string);
	}
	
}


// @pe
void func_939(bool var_97_bool, object var_98_object)
{
	object var_100_object;
	var_98_object = var_100_object;
	func_985(var_100_object);
	bool var_99_bool;
	if(var_99_bool != 0) {
		var_97_bool = true;
		return 0;
	}
	var_97_bool = false;
}


// @pe
void func_1074(object var_112_object, bool var_113_bool)
{
	var_112_object->add(7);
	var_112_object->add(23);
	var_112_object->add(21);
	var_112_object->add(9);
	var_112_object->add(3);
	var_112_object->add(1);
	var_112_object->add(11);
	var_112_object->add(13);
	if(var_113_bool == false)
		var_112_object->add(25);
}


void func_1202(bool var_103_bool)
{
	object var_108_object; int var_111_int;
	@CreateIntVector(var_108_object);
	object var_112_object;
	var_108_object = var_112_object;
	func_1074(false, -1);
	int var_109_int;
	var_108_object->size(var_109_int);
	int var_110_int = 0;
	
	while(var_110_int < var_109_int) {
		var_108_object->get(var_111_int, var_110_int);
		bool var_127_bool = true;
		bool var_128_bool; int var_129_int;
		var_111_int = var_129_int;
		func_1116(var_128_bool, var_129_int);
		if(var_128_bool != 1) {
			bool var_137_bool; int var_138_int;
			var_111_int = var_138_int;
			func_1106(var_137_bool, var_138_int);
			if(var_137_bool != 1)
				var_127_bool = false;
		}
		if(var_127_bool != 0)
			var_103_bool = false;
		var_110_int += 1;
	}
	
	var_103_bool = true;
}
EMIT "Stack[-4] = 0";


// @pe
void func_949(bool var_260_bool)
{
	int var_262_int;
	func_869(var_262_int, "k12q01ChildsAreVisited");
	if(var_262_int != 0) {
		var_260_bool = true;
		return 0;
	}
	var_260_bool = false;
}


void func_826(string var_214_string, bool var_215_bool)
{
	bool var_221_bool; float var_222_float; float var_223_float;
	@lshHasAnimation(var_221_bool, var_214_string);
	if(var_221_bool != 0) {
		@lshGetAnimTimes(var_214_string, var_222_float, var_223_float);
		@lshPlayAnimation(var_222_float, var_223_float, var_215_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_214_string);
	}
	
}


void func_572(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_710(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_703(bool var_61_bool)
{
	var_61_bool = true;
}


// @pe
void func_961(bool var_281_bool)
{
	int var_283_int;
	func_869(var_283_int, "ook12BirdmaskT1");
	if(var_283_int == 0) {
		var_281_bool = true;
		return 0;
	}
	var_281_bool = false;
}


void func_705(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_710(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_841(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_90_object, object var_91_object)
{
	var_0_object = var_91_object;
	var_1_object = var_90_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_97_bool;
		func_939(var_97_bool, var_1_object);
		if(!var_97_bool) { //@nz
			func_227(var_91_object, "Neutral");
			var_0_object->SetMessage(539228); //@t
			var_0_object->ClearReplies(); //@t
			bool var_228_bool;
			func_973(var_1_object);
			if(var_228_bool != 0)
				var_0_object->AddReply(539229, 45272, 41172); //@t
			var_0_object->AddReply(539242, -1, 41185); //@t
		} else {
					bool var_260_bool;
					func_949(var_1_object);
					var_266_bool = !var_260_bool; //@nz
					if(var_266_bool == 0) goto Label_137;
					func_227(var_91_object, "Neutral");
					var_0_object->SetMessage(541628); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(541629, 43802, 43801); //@t
					var_0_object->AddReply(541633, -1, 43805); //@t
		}
	}
Label_197:
	for(;;) {
		bool var_242_bool;
		func_918(var_242_bool);
		if(var_242_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_810(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_226;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_226:
			return 0;

		}

	}
	
Label_137:
	bool var_275_bool = false;
	bool var_276_bool = false;
	bool var_277_bool;
	func_949(var_1_object);
	if(var_277_bool != 0) {
		bool var_279_bool;
		func_939(var_279_bool, var_1_object);
		if(var_279_bool != 0)
			var_276_bool = true;
	}
	if(var_276_bool != 0) {
		bool var_281_bool;
		func_961(var_1_object);
		if(var_281_bool != 0)
			var_275_bool = true;
	}
	if(var_275_bool != 0) {
		object var_287_object; object var_288_object;
		var_287_object = var_1_object;
		var_288_object = var_0_object;
		func_920();
		func_227(var_91_object, "Neutral");
		var_0_object->SetMessage(539243); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(539244, -1, 41187); //@t
		goto Label_197;
	}
	func_227(var_91_object, "Neutral");
	var_0_object->SetMessage(539245); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(539246, -1, 41189); //@t
	goto Label_197;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


// @pe
void func_973(bool var_228_bool)
{
	int var_230_int;
	func_869(var_230_int, "ook12BirdmaskT2");
	if(var_230_int == 0) {
		var_228_bool = true;
		return 0;
	}
	var_228_bool = false;
}


void func_718(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


void func_1106(bool var_137_bool, int var_138_int)
{
	int var_140_int;
	@GetVariable(("vol_" + var_138_int), var_140_int);
	var_137_bool = (var_140_int & 4) != 0;
}


void func_723(bool var_29_bool, object var_30_object, float var_31_float)
{
	cvector var_42_cvector; bool var_49_bool;
	var_30_object->GetPosition(var_42_cvector);
	float var_41_float;
	var_30_object->GetEyesHeight(var_41_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (var_50_float + var_41_float);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	@GetEyesHeight(var_41_float);
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (var_51_float + var_41_float);
	cvector var_44_cvector = var_42_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (float)0;
	var_54_float = sqrt(var_44_cvector | var_44_cvector);
	var_44_cvector /= var_54_float;
	cvector var_45_cvector = -var_44_cvector;
	cvector var_56_cvector;
	func_859(var_56_cvector, (var_45_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_46_cvector = ((var_44_cvector * var_31_float) + (var_56_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_48_bool;
	@IsOverrideActive(var_48_bool);
	if(var_48_bool != 0)
		var_29_bool = false;
	@StopWorld();
	@CameraTransit((var_43_cvector + var_46_cvector), var_45_cvector, true);
	var_70_float = GetByIndex(var_46_cvector, 0);
	var_71_float = GetByIndex(var_46_cvector, 2);
	@Rotate(var_70_float, var_71_float);
	bool var_72_bool;
	func_918(var_72_bool);
	if(var_72_bool != 0) {
	} else {
		@HasAnimationTrack(var_49_bool, "head");
		if(var_49_bool == 0) goto Label_786;
		@LookAsyncCamera("head");
	}
Label_786:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_29_bool = true;
	
}


void func_852(void)
{
	bool var_13_bool;
	func_918(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_1240(bool var_101_bool)
{
	var_101_bool = false;
	bool var_102_bool = false;
	bool var_103_bool;
	func_1202(var_103_bool);
	if(var_103_bool != 0) {
		bool var_147_bool;
		func_1164(var_147_bool);
		if(var_147_bool != 0)
			var_102_bool = true;
	}
	if(var_102_bool != 0) {
		bool var_178_bool;
		func_1126(var_178_bool);
		if(var_178_bool != 0)
			var_101_bool = true;
	}
}


// @pe
void func_985(bool var_99_bool)
{
	bool var_101_bool;
	func_1240(var_101_bool);
	var_101_bool = var_99_bool;
}


void func_859(cvector var_56_cvector, cvector var_57_cvector)
{
	float var_60_float = sqrt(var_57_cvector | var_57_cvector);
	if(var_60_float < 0.000001)
		var_56_cvector = [0.0, 0.0, 0.0];
	var_56_cvector = var_57_cvector / var_60_float;
}


void func_1116(bool var_128_bool, int var_129_int)
{
	int var_131_int;
	@GetVariable(("vol_" + var_129_int), var_131_int);
	var_128_bool = (var_131_int & 16) != 0;
}


void func_991(int var_81_int)
{
	int var_83_int;
	@GetVariable("branch", var_83_int);
	if(var_83_int == 0) {
		var_81_int = 1;
		return 2;
	EMIT "GOTO 0x3ee";
	}
	if(var_83_int == 1) {
		var_81_int = 2;
		return 2;
	}
	var_81_int = 3;
}


// @pe
void func_610(object var_2_object, string var_3_string)
{
	func_705();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_227(object var_2_object, string var_210_string)
{
	bool var_211_bool;
	func_918(var_211_bool);
	if(!var_211_bool) //@nz
		return 0;
	if(var_210_string == var_2_object)
		return 0;
	string var_214_string; bool var_215_bool;
	var_210_string = var_214_string;
	if(var_210_string == "")
		var_215_bool = false;
	else
		var_215_bool = true;
	func_826(var_214_string, var_215_bool);
	var_2_object = var_210_string;
	
}


void func_869(int var_230_int, string var_231_string)
{
	int var_233_int;
	@GetVariable(var_231_string, var_233_int);
	var_233_int = var_230_int;
}


void func_1126(bool var_178_bool)
{
	object var_183_object; int var_186_int;
	@CreateIntVector(var_183_object);
	object var_187_object;
	var_183_object = var_187_object;
	func_1008(var_187_object, false, -1);
	int var_184_int;
	var_183_object->size(var_184_int);
	int var_185_int = 0;
	
	while(var_185_int < var_184_int) {
		var_183_object->get(var_186_int, var_185_int);
		bool var_203_bool = true;
		bool var_204_bool; int var_205_int;
		var_186_int = var_205_int;
		func_1116(var_204_bool, var_205_int);
		if(var_204_bool != 1) {
			bool var_206_bool; int var_207_int;
			var_186_int = var_207_int;
			func_1106(var_206_bool, var_207_int);
			if(var_206_bool != 1)
				var_203_bool = false;
		}
		if(var_203_bool != 0)
			var_178_bool = false;
		var_185_int += 1;
	}
	
	var_178_bool = true;
}
EMIT "Stack[-4] = 0";


void func_874(bool var_24_bool, string var_25_string, string var_26_string)
{
	object var_28_object;
	@FindActor(var_28_object, var_25_string);
	if(var_28_object == null)
		var_24_bool = false;
	@Trigger(var_28_object, var_26_string);
	var_24_bool = true;
}
EMIT "Stack[-1] = 0";


void func_624(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_718(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_893(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_718(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_671;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_886(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_700;
				}
			} else if(var_28_int != 0) {
				goto Label_700;
			}
			}
					bool var_61_bool;
					func_703(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_695;
			}
		}
	Label_700:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_695:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


// @pe
void func_1008(object var_187_object, bool var_188_bool, int var_189_int)
{
	var_187_object->add(18);
	var_187_object->add(24);
	var_187_object->add(20);
	var_187_object->add(14);
	if(var_188_bool == false) {
		var_187_object->add(10);
		var_187_object->add(17);
		var_187_object->add(8);
	} else if(var_189_int != 1) {
		var_187_object->add(10);
	}
	
}


void func_886(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_893(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_886(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


