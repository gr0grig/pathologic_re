// @GLOBALS: 0:int:,1:object:

task task_0
{
	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		if(var_11_bool == 10) {
			int var_14_int;
			func_1170(var_14_int);
			var_22_int = GlobalVars[0];
			if(var_14_int != var_22_int)
				func_155(var_11_bool);
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		@RequestClearPath(var_11_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		func_155(var_11_bool);
		object var_13_object;
		var_11_bool = var_13_object;
		func_1425();
	}

}


task task_1
{
	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		if(var_11_bool != 0)
			return 0;
		bool var_14_bool;
		func_338(var_14_bool, var_1_object);
		if(!var_14_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		@RequestClearPath(var_11_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		func_322(var_11_bool);
		object var_13_object;
		var_11_bool = var_13_object;
		func_1425();
	}

}


task task_2
{
	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		@RequestClearPath(var_11_bool);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool)
	{
		@Stop();
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		func_421(var_10_string, var_11_bool);
		object var_12_object;
		var_11_bool = var_12_object;
		func_1425();
	}

}


task task_3
{
}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int)
	{
		if(1 != 0) {
			func_1341();
			if(var_12_int == 10646) {
				object var_17_object = var_1_object;
				func_1439(var_0_bool);
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_bool;
				func_1427();
			}
			if(var_12_int == 10648) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_bool;
				func_1433();
				object var_46_object = var_1_object;
				func_1461(var_0_bool);
			}
			if(var_12_int == 10649) {
				object var_51_object; object var_52_object;
				var_51_object = var_1_object;
				var_52_object = var_0_bool;
				func_1433();
				object var_53_object = var_1_object;
				func_1466(var_0_bool);
			}
			if(var_12_int == 10669) {
				object var_58_object = var_1_object;
				func_1450(var_0_bool);
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_bool;
				func_1427();
			}
			if(var_11_int == 10641) {
				bool var_68_bool;
				func_1471(var_1_object);
				if(var_68_bool != 0) {
					func_654(var_12_int, "Neutral");
					var_0_bool->SetMessage(9667); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(9668, 10643, 10642); //@t
					var_0_bool->AddReply(9677, 10653, 10652); //@t
					return 0;
				}
				func_654(var_12_int, "Neutral");
				var_0_bool->SetMessage(9681); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9682, 10660, 10659); //@t
				var_0_bool->AddReply(9699, -1, 10678); //@t
				return 0;
			}
			if(var_11_int == 10660) {
				func_654(var_12_int, "Neutral");
				var_0_bool->SetMessage(9683); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9684, 10662, 10661); //@t
				var_0_bool->AddReply(9694, 10672, 10671); //@t
				var_0_bool->AddReply(9698, 10662, 10676); //@t
				return 0;
			}
			if(var_11_int == 10672) {
				func_654(var_12_int, "Neutral");
				var_0_bool->SetMessage(9695); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9696, 10665, 10673); //@t
				var_0_bool->AddReply(9697, -1, 10675); //@t
				return 0;
			}
			if(var_11_int == 10662) {
				func_654(var_12_int, "Neutral");
				var_0_bool->SetMessage(9685); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9686, -1, 10663); //@t
				var_0_bool->AddReply(9687, 10665, 10664); //@t
				return 0;
			}
			if(var_11_int == 10665) {
				func_654(var_12_int, "Neutral");
				var_0_bool->SetMessage(9688); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9689, -1, 10666); //@t
				var_0_bool->AddReply(9690, 10668, 10667); //@t
				return 0;
			}
			if(var_11_int == 10668) {
				func_654(var_12_int, "Neutral");
				var_0_bool->SetMessage(9691); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9692, -1, 10669); //@t
				var_0_bool->AddReply(9693, -1, 10670); //@t
				return 0;
			}
			if(var_11_int == 10653) {
				func_654(var_12_int, "Neutral");
				var_0_bool->SetMessage(9678); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9679, 10643, 10654); //@t
				var_0_bool->AddReply(9680, 10643, 10656); //@t
				return 0;
			}
			if(var_11_int == 10643) {
				func_654(var_12_int, "Neutral");
				var_0_bool->SetMessage(9669); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9670, 10645, 10644); //@t
				return 0;
			}
			if(var_11_int == 10645) {
				func_654(var_12_int, "Neutral");
				var_0_bool->SetMessage(9671); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9672, 10647, 10646); //@t
				var_0_bool->AddReply(9676, 10647, 10650); //@t
				return 0;
			}
			if(var_11_int == 10647) {
				func_654(var_12_int, "Neutral");
				var_0_bool->SetMessage(9673); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(9674, -1, 10648); //@t
				var_0_bool->AddReply(9675, -1, 10649); //@t
				return 0;
			}
			var_3_object = true;
			bool var_196_bool;
			func_1504(var_196_bool);
			if(var_196_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x29f";
	
	}

}


maintask task_6
{
	void init(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool)
	{
		var_11_int = GlobalVars[0];
		int var_12_int;
		func_1170(var_12_int);
		var_12_int = var_11_int;
		GlobalVars[0] = var_11_int;
	
		for(;;) {
			@Sleep(3);
			func_1069();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object)
	{
		func_1138();
		int var_14_int; object var_15_object;
		var_11_object = var_15_object;
		int var_13_int;
		func_996(var_13_int, var_14_int, var_15_object);
		var_14_int = var_13_int;
		if(var_13_int == 0) {
			bool var_136_bool;
			func_1389(var_136_bool, "quest_d4_01", "key1_done");
			object var_142_object;
			var_11_object = var_142_object;
			TaskCall(0);
			func_0(var_142_object);
			TaskReturn();
			object var_245_object;
			var_11_object = var_245_object;
			TaskCall(1);
			func_182(var_245_object);
			TaskReturn();
			object var_301_object;
			var_11_object = var_301_object;
			TaskCall(7);
			func_1151(var_301_object);
			TaskReturn();
		} else if(var_13_int == 1) {
			bool var_311_bool;
			func_1389(var_311_bool, "quest_d4_01", "key1_done");
			TaskCall(2);
			func_349();
			TaskReturn();
		}
	
	}

}


task task_7
{
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object)
{
}


void func_1408(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1401(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


// @pe
void func_0(object var_142_object)
{
	@SetTimer(10, 1);
	
	for(;;) {
		bool var_147_bool; object var_148_object;
		func_49(var_144_object, var_148_object, var_147_bool, var_148_object, (float)250, (float)3000, true, true);
		int var_230_int;
		func_1170(var_230_int);
		var_238_int = GlobalVars[0];
		if(var_230_int != var_238_int) {
		} else {
				@Sleep(1);
				int var_242_int;
				func_1170(var_242_int);
				var_243_int = GlobalVars[0];
				if(!(var_242_int != var_243_int)) goto Label_30;
		}
		for(;;) {
			@KillTimer(10);
			return 0;

		}

	Label_30:
	}
}


void func_1165(cvector var_17_cvector)
{
	cvector var_19_cvector;
	@GetPosition(var_19_cvector);
	var_19_cvector = var_17_cvector;
}


// @pe
void func_654(bool var_2_bool, string var_94_string)
{
	bool var_95_bool;
	func_1504(var_95_bool);
	if(!var_95_bool) //@nz
		return 0;
	if(var_94_string == var_2_bool)
		return 0;
	string var_98_string;
	func_1323(var_98_string);
	var_2_bool = var_98_string;
}


void func_1170(int var_12_int)
{
	object var_15_object;
	@GetScene(var_15_object);
	cvector var_17_cvector;
	func_1165(var_17_cvector);
	int var_16_int;
	var_15_object->GetRegionByPt(var_16_int, var_17_cvector);
	var_16_int = var_12_int;
}
EMIT "Stack[-2] = 0";


// @pe
void func_1427(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_1433(void)
{
	@SetVariable("ood4WhiteMask1", 1);
}


void func_155(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1181(bool var_193_bool, object var_194_object, string var_195_string)
{
	var_200_bool = IsFuncExist(var_194_object, "HasProperty", 2);
	if(!var_200_bool) { //@nz
		var_193_bool = false;
		return 2;
	}
	bool var_197_bool;
	var_194_object->HasProperty(var_195_string, var_197_bool);
	var_197_bool = var_193_bool;
}


// @pe
void func_1439(object var_17_object)
{
	@Trace("theaterkey is given");
	object var_20_object;
	var_17_object = var_20_object;
	func_1376(var_20_object, "d4q01_theater_key", 1);
}


void func_421(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


// @pe
void func_1319(void)
{
	@CameraSwitchToNormal();
}


void func_1193(bool var_186_bool, object var_187_object)
{
	bool var_189_bool;
	var_187_object->IsDead(var_189_bool);
	var_189_bool = var_186_bool;
}


// @pe
void func_1450(object var_58_object)
{
	@Trace("tvirin is given");
	object var_61_object;
	var_58_object = var_61_object;
	func_1376(var_61_object, "tvirin", 1);
}


// @pe
void func_171(bool var_169_bool, object var_170_object)
{
	object var_172_object;
	var_170_object = var_172_object;
	bool var_171_bool;
	func_1234(var_171_bool, var_172_object);
	var_171_bool = var_169_bool;
}


void func_1323(string var_98_string)
{
	@Trace("playing " + var_98_string);
	float var_101_float;
	float var_102_float;
	@lshGetAnimTimes(var_98_string, var_101_float, var_102_float);
	@lshPlayAnimation(var_101_float, var_102_float);
	@Trace("start: " + var_101_float);
	@Trace("end: " + var_102_float);
}


void func_1069(void)
{
	int var_30_int; int var_31_int; bool var_32_bool; float var_33_float; bool var_34_bool;
	@WaitForAnimEnd();
	bool var_35_bool;
	func_1258(var_35_bool);
	if(!var_35_bool) //@nz
		return 14;
	int var_39_int;
	func_1408(var_39_int);
	int var_28_int;
	var_39_int = var_28_int;
	int var_29_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_29_int < 5) {
			bool var_55_bool;
			func_1258(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			@irand(var_30_int, 3);
			if(var_30_int == 0) {
				if(var_28_int == 0) goto Label_1116;
				@irand(var_31_int, var_28_int);
				string var_61_string; int var_62_int;
				var_31_int = var_62_int;
				func_1401(var_61_string, var_62_int);
				@PlayAnimation("all", var_61_string);
				@WaitForAnimEnd(var_32_bool);
				if(!var_32_bool) { //@nz
				} else {
			} else {
			if(var_30_int == 1) {
				@rand(var_33_float, 4);
				@Sleep((var_33_float + 1), var_34_bool);
				if(!var_34_bool) { //@nz
					goto Label_1137;
				}
			} else if(var_29_int != 0) {
				goto Label_1137;
			}
			}
				var_29_int += 1;
			}
		}
	Label_1137:
		return 14;

	}
	
}


void func_1198(bool var_175_bool, object var_176_object)
{
	if(var_176_object == null) {
		var_175_bool = false;
		return 4;
	}
	bool var_182_bool = false;
	var_185_bool = IsFuncExist(var_176_object, "IsDead", 1);
	if(var_185_bool != 0) {
		bool var_186_bool; object var_187_object;
		var_176_object = var_187_object;
		func_1193(var_186_bool, var_187_object);
		if(var_186_bool != 0)
			var_182_bool = true;
	}
	if(var_182_bool != 0) {
		var_175_bool = false;
		return 4;
	}
	object var_179_object;
	@GetScene(var_179_object);
	if(var_179_object == null) {
		var_175_bool = false;
		return 4;
	}
	object var_180_object;
	var_176_object->GetScene(var_180_object);
	if(var_179_object != var_180_object) {
		var_175_bool = false;
		return 4;
	}
	var_175_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_49(bool var_0_bool, object var_1_object, bool var_147_bool, object var_148_object, float var_149_float, float var_150_float, bool var_151_bool, bool var_152_bool)
{
	bool var_161_bool; object var_163_object; cvector var_164_cvector; cvector var_165_cvector; float var_167_float; object var_168_object;
	var_0_bool = false;
	var_1_object = var_148_object;
	bool var_162_bool;
	var_152_bool = var_162_bool;
	
	for(;;) {
		bool var_169_bool; object var_170_object;
		var_148_object = var_170_object;
		func_171(var_169_bool, var_170_object);
		if(!var_169_bool) { //@nz
			var_147_bool = false;
			return 16;
		}
		var_148_object->GetPosition(var_164_cvector);
		@GetPosition(var_165_cvector);
		var_167_float = (var_164_cvector - var_165_cvector) | (var_164_cvector - var_165_cvector);
		bool var_206_bool = false;
		if(var_150_float > 0) {
			if(var_167_float > (var_150_float * var_150_float))
				var_206_bool = true;
		}
		if(var_206_bool != 0) {
			@Stop();
			var_147_bool = false;
			return 16;
		}
		if(var_167_float > (var_149_float * var_149_float)) {
			var_148_object->GetPFPosition(var_164_cvector);
			@FindPathTo(var_168_object, var_164_cvector);
			if(var_168_object != null) {
				var_168_object = var_163_object;
				var_168_object = null;
			}
			if(var_163_object != null) {
				if(var_162_bool == 0) goto Label_102;
				var_162_bool = false;
				@RotatePath(var_163_object, var_161_bool);
				if(!var_161_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_219_string;
						func_178(var_219_string);
						string var_220_string;
						func_180(var_220_string);
						@FollowPath(var_163_object, var_151_bool, var_161_bool, var_219_string, var_220_string);
						if(!var_161_bool) { //@nz
							if(var_0_bool == 0) goto Label_121;
							var_163_object = null;
						}
					EMIT "GOTO 0x7a";

					Label_121:
						} else {
					var_163_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_161_bool);
					if(!var_161_bool) { //@nz
						if(var_0_bool != 0) {
							var_163_object = null;
							goto Label_149;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_149;
		}
			var_168_object = null;
			goto Label_147;

		Label_147:
			var_163_object = null;

		}
	Label_149:
		for(;;) {
			var_147_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_178(string var_219_string)
{
	var_219_string = "walk";
}


void func_180(string var_220_string)
{
	var_220_string = "run";
}


void func_437(bool var_337_bool)
{
	var_337_bool = false;
}


// @pe
void func_1461(object var_47_object)
{
	var_47_object->SetReturnValue(0);
}


void func_439(void)
{
	int var_348_int; int var_349_int; bool var_350_bool; float var_351_float; bool var_352_bool;
	@WaitForAnimEnd();
	bool var_353_bool;
	func_1258(var_353_bool);
	if(!var_353_bool) //@nz
		return 14;
	int var_357_int;
	func_1408(var_357_int);
	int var_346_int;
	var_357_int = var_346_int;
	int var_347_int = 0;
	
	for(;;) {
		bool var_370_bool = false;
		if(var_347_int < 5) {
			bool var_373_bool;
			func_1258(var_373_bool);
			if(var_373_bool != 0)
				var_370_bool = true;
		}
		if(var_370_bool != 0) {
			@irand(var_348_int, 3);
			if(var_348_int == 0) {
				if(var_346_int == 0) goto Label_486;
				@irand(var_349_int, var_346_int);
				string var_379_string; int var_380_int;
				var_349_int = var_380_int;
				func_1401(var_379_string, var_380_int);
				@PlayAnimation("all", var_379_string);
				@WaitForAnimEnd(var_350_bool);
				if(!var_350_bool) { //@nz
				} else {
			} else {
			if(var_348_int == 1) {
				@rand(var_351_float, 4);
				@Sleep((var_351_float + 1), var_352_bool);
				if(!var_352_bool) { //@nz
					goto Label_507;
				}
			} else if(var_347_int != 0) {
				goto Label_507;
			}
			}
				var_347_int += 1;
			}
		}
	Label_507:
		return 14;

	}
	
}


// @pe
void func_182(object var_245_object)
{
	
	for(;;) {
		bool var_248_bool; object var_249_object;
		func_198(var_247_object, var_249_object, var_248_bool, var_249_object, (float)250, (float)3000, true, true);
		var_299_bool = !var_248_bool; //@nz
		if(var_299_bool == 0) goto Label_197;
		@Sleep(1);
	}
	
Label_197:
}


// @pe
void func_1466(object var_54_object)
{
	var_54_object->SetReturnValue(1);
}


// @pe
void func_571(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_79_object, object var_80_object)
{
	var_0_bool = var_80_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_86_bool;
		func_1471(var_79_object);
		if(var_86_bool != 0) {
			func_654(var_80_object, "Neutral");
			var_0_bool->SetMessage(9667); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(9668, 10643, 10642); //@t
			var_0_bool->AddReply(9677, 10653, 10652); //@t
		} else {
					func_654(var_80_object, "Neutral");
					var_0_bool->SetMessage(9681); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(9682, 10660, 10659); //@t
					var_0_bool->AddReply(9699, -1, 10678); //@t
		}
	}
	for(;;) {
		bool var_116_bool;
		func_1504(var_116_bool);
		if(var_116_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_1323(var_2_bool);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_653;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_653:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x23f";


void func_1341(void)
{
	bool var_14_bool;
	func_1504(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1471(bool var_86_bool)
{
	int var_88_int;
	func_1358(var_88_int, "ood4WhiteMask1");
	if(var_88_int == 0) {
		var_86_bool = true;
		return 0;
	}
	var_86_bool = false;
}


void func_322(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1348(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_198(bool var_0_bool, object var_1_object, bool var_248_bool, object var_249_object, float var_250_float, float var_251_float, bool var_252_bool, bool var_253_bool)
{
	bool var_262_bool; object var_264_object; cvector var_265_cvector; cvector var_266_cvector; float var_268_float; object var_269_object;
	var_0_bool = false;
	var_1_object = var_249_object;
	bool var_263_bool;
	var_253_bool = var_263_bool;
	
	for(;;) {
		bool var_270_bool; object var_271_object;
		var_249_object = var_271_object;
		func_338(var_270_bool, var_271_object);
		if(!var_270_bool) { //@nz
			var_248_bool = false;
			return 16;
		}
		var_249_object->GetPosition(var_265_cvector);
		@GetPosition(var_266_cvector);
		var_268_float = (var_265_cvector - var_266_cvector) | (var_265_cvector - var_266_cvector);
		bool var_275_bool = false;
		if(var_251_float > 0) {
			if(var_268_float > (var_251_float * var_251_float))
				var_275_bool = true;
		}
		if(var_275_bool != 0) {
			@Stop();
			var_248_bool = false;
			return 16;
		}
		if(var_268_float > (var_250_float * var_250_float)) {
			var_249_object->GetPFPosition(var_265_cvector);
			@FindPathTo(var_269_object, var_265_cvector);
			if(var_269_object != null) {
				var_269_object = var_264_object;
				var_269_object = null;
			}
			if(var_264_object != null) {
				if(var_263_bool == 0) goto Label_251;
				var_263_bool = false;
				@RotatePath(var_264_object, var_262_bool);
				if(!var_262_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_288_string;
						func_345(var_288_string);
						string var_289_string;
						func_347(var_289_string);
						@FollowPath(var_264_object, var_252_bool, var_262_bool, var_288_string, var_289_string);
						if(!var_262_bool) { //@nz
							if(var_0_bool == 0) goto Label_270;
							var_264_object = null;
						}
					EMIT "GOTO 0x10f";

					Label_270:
						} else {
					var_264_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_262_bool);
					if(!var_262_bool) { //@nz
						if(var_0_bool != 0) {
							var_264_object = null;
							goto Label_298;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_298;
		}
			var_269_object = null;
			goto Label_296;

		Label_296:
			var_264_object = null;

		}
	Label_298:
		for(;;) {
			var_248_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1483(int var_70_int)
{
	int var_72_int;
	@GetVariable("player", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 200001;
		return 2;
	EMIT "GOTO 0x5da";
	}
	if(var_72_int == 1) {
		var_70_int = 200002;
		return 2;
	}
	var_70_int = 200003;
}


void func_1358(int var_88_int, string var_89_string)
{
	int var_91_int;
	@GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
}


void func_1234(bool var_171_bool, object var_172_object)
{
	object var_176_object;
	var_172_object = var_176_object;
	bool var_175_bool;
	func_1198(var_175_bool, var_176_object);
	if(!var_175_bool) { //@nz
		var_171_bool = false;
		return 2;
	}
	bool var_193_bool; object var_194_object;
	func_1181(var_193_bool, var_194_object, "noaccess");
	if(!var_193_bool) { //@nz
		var_171_bool = true;
		return 2;
	}
	int var_174_int;
	var_194_object->GetProperty("noaccess", var_174_int);
	var_171_bool = var_174_int == 0;
}


// @pe
void func_338(bool var_270_bool, object var_271_object)
{
	object var_273_object;
	var_271_object = var_273_object;
	bool var_272_bool;
	func_1234(var_272_bool, var_273_object);
	var_272_bool = var_270_bool;
}


void func_1363(object var_25_object, object var_26_object, int var_27_int)
{
	int var_31_int;
	var_26_object->GetItemID(var_31_int);
	int var_32_int;
	@GetInvItemProperty(var_32_int, var_31_int, "Category");
	bool var_33_bool;
	var_25_object->AddItem(var_33_bool, var_26_object, var_32_int, var_27_int);
	if(!var_33_bool) //@nz
		var_25_object->DropItems(var_26_object, var_27_int);
}


void func_345(string var_288_string)
{
	var_288_string = "walk";
}


void func_347(string var_289_string)
{
	var_289_string = "run";
}


void func_1500(int var_68_int)
{
	var_68_int = 3354;
}


void func_349(void)
{
	
	for(;;) {
		func_357(var_314_bool, var_315_bool);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


void func_1502(string var_69_string)
{
	var_69_string = "ui/NPC_Black.png";
}


void func_1504(bool var_95_bool)
{
	var_95_bool = false;
}


void func_1376(object var_20_object, string var_21_string, int var_22_int)
{
	object var_24_object;
	@CreateInvItem(var_24_object);
	var_24_object->SetItemName(var_21_string);
	object var_25_object; object var_26_object; int var_27_int;
	var_20_object = var_25_object;
	var_24_object = var_26_object;
	var_22_int = var_27_int;
	func_1363(var_25_object, var_26_object, var_27_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_996(int var_14_int, object var_15_object, object var_18_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	TaskCall(4);
	int var_16_int;
	func_508(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	var_18_object = var_14_int;
}


void func_357(bool var_0_bool, object var_1_object)
{
	float var_323_float; cvector var_324_cvector; cvector var_325_cvector; float var_326_float; bool var_327_bool; object var_328_object; bool var_329_bool;
	@rand(var_323_float, 0.5);
	@Sleep(var_323_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_369:
				@GetPosition(var_325_cvector);
				@GetCameraFarDistance(var_326_float);
				@GetRandomPFPointInCircle(var_324_cvector, var_325_cvector, (var_326_float * 2.5), var_327_bool);
				if(var_327_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_369;
			}
				var_1_object = false;
		}
		}
		goto Label_386;

	Label_386:
		@FindShiftedPathTo(var_328_object, var_324_cvector);
		if(var_328_object != null) {
			@RotatePath(var_328_object, var_329_bool);
			if(var_329_bool != 0) {
				bool var_337_bool;
				func_437(var_337_bool);
				@FollowPath(var_328_object, var_337_bool, var_329_bool);
				var_328_object = null;
				if(var_329_bool != 0) {
					TaskCall(3);
					func_439();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_328_object = null;
	}
	
}


void func_1258(bool var_35_bool)
{
	bool var_37_bool;
	@IsLoaded(var_37_bool);
	var_37_bool = var_35_bool;
}


void func_1389(bool var_136_bool, string var_137_string, string var_138_string)
{
	object var_140_object;
	@FindActor(var_140_object, var_137_string);
	if(var_140_object == null)
		var_136_bool = false;
	@Trigger(var_140_object, var_138_string);
	var_136_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1263(bool var_27_bool, object var_28_object)
{
	cvector var_38_cvector;
	var_28_object->GetPosition(var_38_cvector);
	float var_37_float;
	var_28_object->GetEyesHeight(var_37_float);
	var_45_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_45_float + var_37_float);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	@GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_46_float + var_37_float);
	cvector var_40_cvector = var_38_cvector - var_39_cvector;
	var_47_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_49_float = sqrt(var_40_cvector | var_40_cvector);
	var_40_cvector /= var_49_float;
	cvector var_41_cvector = -var_40_cvector;
	cvector var_52_cvector;
	func_1348(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * 70) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector);
	var_65_float = GetByIndex(var_42_cvector, 0);
	var_66_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_65_float, var_66_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
}


void func_1138(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1143(object var_305_object)
{
	object var_307_object;
	var_305_object = var_307_object;
	TaskCall(4);
	int var_306_int;
	func_508(var_308_object, var_306_int, var_307_object);
	TaskReturn();
}


void func_1401(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_508(bool var_0_bool, int var_16_int, object var_17_object)
{
	var_0_bool = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_1263(var_27_bool, var_28_object);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_68_int;
	func_1500(var_68_int);
	var_23_object->SetNPCName(var_68_int);
	string var_69_string;
	func_1502(var_69_string);
	var_23_object->SetPhoto(var_69_string);
	int var_70_int;
	func_1483(var_70_int);
	var_23_object->SetPlayerName(var_70_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_79_object; object var_80_object;
	var_17_object = var_79_object;
	var_23_object = var_80_object;
	TaskCall(5);
	func_571(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_132_bool = !var_26_bool; //@nz
		if(var_132_bool == 0) goto Label_560;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_560:
	object var_133_object;
	var_17_object = var_133_object;
	func_1319();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_1151(object var_301_object)
{
	bool var_303_bool;
	
	for(;;) {
		@IsOverrideActive(var_303_bool);
		if(!var_303_bool) //@nz
			break;
	}
	object var_305_object;
	var_301_object = var_305_object;
	func_1143(var_305_object);
	@Hold();
}


