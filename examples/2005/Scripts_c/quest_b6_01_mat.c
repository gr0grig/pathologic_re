// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_1583();
			if(var_8_bool == 21809) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1711();
			}
			if(var_8_bool == 21822) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_1711();
			}
			if(var_8_bool == 21834) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_1711();
			}
			if(var_8_bool == 21895) {
				object var_50_object = var_1_object;
				func_1720(var_0_object);
				object var_91_object = var_1_object;
				func_1769(var_0_object);
				object var_117_object; object var_118_object;
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_1757();
				object var_121_object = var_1_object;
				func_1785(var_0_object);
			}
			if(var_8_bool == 21890) {
				object var_147_object = var_1_object;
				func_1720(var_0_object);
				object var_149_object = var_1_object;
				func_1769(var_0_object);
				object var_151_object = var_1_object;
				func_1785(var_0_object);
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_object;
				func_1757();
			}
			if(var_8_bool == 29926) {
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_object;
				func_1763();
			}
			if(var_7_cvector == 21800) {
				bool var_163_bool;
				func_1808(var_1_object);
				if(var_163_bool != 0) {
					object var_171_object; object var_172_object;
					var_171_object = var_1_object;
					var_172_object = var_0_object;
					func_1705();
					func_235(var_8_bool, "Neutral");
					var_0_object->SetMessage(520595); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520596, 21802, 21801); //@t
					var_0_object->AddReply(520621, 29795, 21829); //@t
					return 0;
				}
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520622); //@t
				var_0_object->ClearReplies(); //@t
				bool var_196_bool;
				func_1820(var_1_object);
				if(var_196_bool != 0)
					var_0_object->AddReply(520623, 21833, 21832); //@t
				bool var_205_bool = false;
				bool var_206_bool;
				func_1832(var_206_bool, var_1_object);
				if(var_206_bool != 0) {
					bool var_214_bool;
					func_1842(var_1_object);
					if(var_214_bool != 0)
						var_205_bool = true;
				}
				if(var_205_bool != 0)
					var_0_object->AddReply(520626, 21836, 21835); //@t
				bool var_223_bool = false;
				bool var_224_bool;
				func_1842(var_1_object);
				if(var_224_bool != 0) {
					bool var_226_bool;
					func_1854(var_226_bool, var_1_object);
					if(var_226_bool != 0)
						var_223_bool = true;
				}
				if(var_223_bool != 0)
					var_0_object->AddReply(520686, 21897, 21896); //@t
				bool var_240_bool;
				func_1796(var_1_object);
				if(var_240_bool != 0)
					var_0_object->AddReply(528534, 29927, 29926); //@t
				var_0_object->AddReply(520629, -1, 21838); //@t
				return 0;
			}
			if(var_7_cvector == 29927) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(528535); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528536, 29929, 29928); //@t
				return 0;
			}
			if(var_7_cvector == 29929) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(528537); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528538, 29931, 29930); //@t
				return 0;
			}
			if(var_7_cvector == 29931) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(528539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528540, 29933, 29932); //@t
				return 0;
			}
			if(var_7_cvector == 29933) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(528541); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528542, 29935, 29934); //@t
				return 0;
			}
			if(var_7_cvector == 29935) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(528543); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528544, 29937, 29936); //@t
				return 0;
			}
			if(var_7_cvector == 29937) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(528545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528546, -1, 29938); //@t
				return 0;
			}
			if(var_7_cvector == 21897) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520687); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520689, 21900, 21899); //@t
				var_0_object->AddReply(520688, -1, 21898); //@t
				return 0;
			}
			if(var_7_cvector == 21900) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520690); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520691, -1, 21901); //@t
				var_0_object->AddReply(520692, -1, 21902); //@t
				return 0;
			}
			if(var_7_cvector == 21836) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520627); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520628, 21885, 21837); //@t
				var_0_object->AddReply(520677, 21887, 21886); //@t
				return 0;
			}
			if(var_7_cvector == 21887) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520678); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520679, 21885, 21888); //@t
				return 0;
			}
			if(var_7_cvector == 21885) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520676); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520681, 21892, 21891); //@t
				var_0_object->AddReply(520680, -1, 21890); //@t
				return 0;
			}
			if(var_7_cvector == 21892) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520682); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520683, 21894, 21893); //@t
				var_0_object->AddReply(528420, 29803, 29802); //@t
				return 0;
			}
			if(var_7_cvector == 29803) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(528421); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528422, 21894, 29804); //@t
				return 0;
			}
			if(var_7_cvector == 21894) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520684); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520685, -1, 21895); //@t
				return 0;
			}
			if(var_7_cvector == 21833) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520624); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520625, -1, 21834); //@t
				return 0;
			}
			if(var_7_cvector == 21802) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520597); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528414, 29795, 29794); //@t
				return 0;
			}
			if(var_7_cvector == 29795) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(528415); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528416, 29798, 29797); //@t
				var_0_object->AddReply(528418, 21806, 29799); //@t
				return 0;
			}
			if(var_7_cvector == 29798) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(528417); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520598, 21804, 21803); //@t
				var_0_object->AddReply(520620, 21808, 21827); //@t
				return 0;
			}
			if(var_7_cvector == 21804) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520599); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520600, 21806, 21805); //@t
				return 0;
			}
			if(var_7_cvector == 21806) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520601); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520602, 21808, 21807); //@t
				var_0_object->AddReply(520605, 21811, 21810); //@t
				return 0;
			}
			if(var_7_cvector == 21811) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520606); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520607, 21813, 21812); //@t
				var_0_object->AddReply(520617, 21824, 21823); //@t
				return 0;
			}
			if(var_7_cvector == 21824) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520618); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520619, 21815, 21825); //@t
				return 0;
			}
			if(var_7_cvector == 21813) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520608); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520609, 21815, 21814); //@t
				var_0_object->AddReply(520616, -1, 21822); //@t
				return 0;
			}
			if(var_7_cvector == 21815) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520610); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520611, 21817, 21816); //@t
				var_0_object->AddReply(520615, 21817, 21821); //@t
				return 0;
			}
			if(var_7_cvector == 21817) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520612); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520613, 21808, 21818); //@t
				var_0_object->AddReply(520614, -1, 21820); //@t
				return 0;
			}
			if(var_7_cvector == 21808) {
				func_235(var_8_bool, "Neutral");
				var_0_object->SetMessage(520603); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520604, -1, 21809); //@t
				var_0_object->AddReply(528419, -1, 29801); //@t
				return 0;
			}
			var_3_string = true;
			bool var_473_bool;
			func_2026(var_473_bool);
			if(var_473_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x102";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_1042(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1590(var_13_object);
				@RemoveActor(var_13_object);
			}
		} else if(var_7_string == "restore") {
			var_1_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		if(var_1_object != 0) {
			object var_8_object;
			func_1590(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_1155();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_1170();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_1113();
			bool var_11_bool = false;
			bool var_12_bool;
			func_1327(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_1082(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_1062(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1590(var_53_object);
					var_53_object = var_52_object;
					func_1475(var_51_bool, var_52_object);
				}
			} else {
				func_1077(var_7_int);
				func_1104();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_1104();
		else
			func_1555("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_1295();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_1318(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_993(var_25_object);
			func_1555("Neutral");
			func_1113();
			func_1104();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_1327(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


// @pe
void func_1796(bool var_289_bool)
{
	int var_291_int;
	func_1606(var_291_int, "oob6Mat2");
	if(var_291_int == 0) {
		var_289_bool = true;
		return 0;
	}
	var_289_bool = false;
}


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1590(var_39_object);
	var_39_object = var_38_object;
	func_1417(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_1332(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_2020(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_2018(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_2022(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_2024(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_2001(var_183_int);
	var_33_object->SetPlayerName(var_183_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	object var_192_object; object var_193_object;
	var_27_object = var_192_object;
	var_33_object = var_193_object;
	TaskCall(2);
	func_94(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_301_bool = !var_36_bool; //@nz
		if(var_301_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_302_object;
	var_27_object = var_302_object;
	func_1400();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1295(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1808(bool var_199_bool)
{
	int var_201_int;
	func_1606(var_201_int, "oob6Mat1");
	if(var_201_int == 0) {
		var_199_bool = true;
		return 0;
	}
	var_199_bool = false;
}


void func_1293(bool var_59_bool)
{
	var_59_bool = true;
}


void func_1042(object var_0_object)
{
	bool var_7_bool;
	func_1327(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1038();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1224();
	}
}
EMIT "Return(); Pop(0)";


void func_1555(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


void func_1300(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1562(string var_215_string, bool var_216_bool)
{
	float var_221_float; float var_222_float;
	@lshGetAnimTimes(var_215_string, var_221_float, var_222_float);
	@lshPlayAnimation(var_221_float, var_222_float, var_216_bool);
}


// @pe
void func_1820(bool var_245_bool)
{
	int var_247_int;
	func_1606(var_247_int, "b6q01");
	if(var_247_int == 2)
		var_245_bool = true;
	var_245_bool = false;
}


void func_1308(bool var_15_bool, cvector var_16_cvector)
{
	cvector var_20_cvector;
	@GetPosition(var_20_cvector);
	cvector var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	bool var_22_bool;
	@Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
}


void func_1568(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_2026(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_1318(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_1308(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1062(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_1318(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1832(bool var_255_bool, object var_256_object)
{
	object var_258_object;
	var_256_object = var_258_object;
	bool var_257_bool;
	func_1864(var_257_bool, var_258_object);
	if(var_257_bool != 0) {
		var_255_bool = true;
		return 0;
	}
	var_255_bool = false;
}


void func_1327(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1583(void)
{
	bool var_10_bool;
	func_2026(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1842(bool var_263_bool)
{
	int var_265_int;
	func_1606(var_265_int, "b6q01");
	if(var_265_int == 3)
		var_263_bool = true;
	var_263_bool = false;
}


void func_1332(bool var_132_bool, object var_133_object, float var_134_float)
{
	cvector var_145_cvector; bool var_152_bool;
	var_133_object->GetPosition(var_145_cvector);
	float var_144_float;
	var_133_object->GetEyesHeight(var_144_float);
	var_153_float = GetByIndex(var_145_cvector, 1);
	SetByIndex(var_145_cvector, 1) = (var_153_float + var_144_float);
	cvector var_146_cvector;
	@GetPosition(var_146_cvector);
	@GetEyesHeight(var_144_float);
	var_154_float = GetByIndex(var_146_cvector, 1);
	SetByIndex(var_146_cvector, 1) = (var_154_float + var_144_float);
	cvector var_147_cvector = var_145_cvector - var_146_cvector;
	var_155_float = GetByIndex(var_147_cvector, 1);
	SetByIndex(var_147_cvector, 1) = (float)0;
	var_157_float = sqrt(var_147_cvector | var_147_cvector);
	var_147_cvector /= var_157_float;
	cvector var_148_cvector = -var_147_cvector;
	cvector var_159_cvector;
	func_1596(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_149_cvector = ((var_147_cvector * var_134_float) + (var_159_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_151_bool;
	@IsOverrideActive(var_151_bool);
	if(var_151_bool != 0)
		var_132_bool = false;
	@StopWorld();
	@CameraTransit((var_146_cvector + var_149_cvector), var_148_cvector);
	var_172_float = GetByIndex(var_149_cvector, 0);
	var_173_float = GetByIndex(var_149_cvector, 2);
	@Rotate(var_172_float, var_173_float);
	bool var_174_bool;
	func_2026(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_1394;
		@LookAsyncCamera("head");
	}
Label_1394:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_1077(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1590(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_1082(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_1300(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1596(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


// @pe
void func_1854(bool var_275_bool, object var_276_object)
{
	object var_278_object;
	var_276_object = var_278_object;
	bool var_277_bool;
	func_1871(var_277_bool, var_278_object);
	if(var_277_bool != 0) {
		var_275_bool = true;
		return 0;
	}
	var_275_bool = false;
}


void func_1606(int var_201_int, string var_202_string)
{
	int var_204_int;
	@GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
}


void func_1864(bool var_257_bool, object var_258_object)
{
	int var_260_int;
	var_258_object->GetItemCountOfType(var_260_int, "alpha_pills");
	var_257_bool = var_260_int >= 50;
}


void func_1611(int var_140_int, int var_141_int)
{
	object var_143_object;
	@CreateIntVector(var_143_object);
	var_143_object->add(var_140_int);
	var_143_object->add(var_141_int);
	@SendWorldWndMessage(3, var_143_object);
}
EMIT "Stack[-1] = 0";


void func_1871(bool var_277_bool, object var_278_object)
{
	int var_280_int;
	var_278_object->GetItemCountOfType(var_280_int, "alpha_pills");
	var_277_bool = false;
	if(var_280_int > 0) {
		if(var_280_int < 50)
			var_277_bool = true;
	}
}


void func_1104(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_1623(object var_129_object, object var_130_object, int var_131_int)
{
	int var_135_int;
	var_130_object->GetItemID(var_135_int);
	int var_136_int;
	@GetInvItemProperty(var_136_int, var_135_int, "Category");
	bool var_137_bool;
	var_129_object->AddItem(var_137_bool, var_130_object, var_136_int, var_131_int);
	if(!var_137_bool) { //@nz
		var_129_object->DropItems(var_130_object, var_131_int);
	} else {
		int var_140_int; int var_141_int;
		var_135_int = var_140_int;
		var_131_int = var_141_int;
		func_1611(var_140_int, var_141_int);
	}
	
}


void func_1113(void)
{
	@KillTimer(10);
}


void func_1884(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 363, 1, 525663);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_1923(var_22_bool, var_23_object, 265);
}
EMIT "Stack[-1] = 0";


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_199_bool;
		func_1808(var_1_object);
		if(var_199_bool != 0) {
			object var_207_object; object var_208_object;
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_1705();
			func_235(var_193_object, "Neutral");
			var_0_object->SetMessage(520595); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(520596, 21802, 21801); //@t
			var_0_object->AddReply(520621, 29795, 21829); //@t
		} else {
					func_235(var_193_object, "Neutral");
					var_0_object->SetMessage(520622); //@t
					var_0_object->ClearReplies(); //@t
					bool var_245_bool;
					func_1820(var_1_object);
					if(var_245_bool != 0)
						var_0_object->AddReply(520623, 21833, 21832); //@t
					bool var_254_bool = false;
					bool var_255_bool;
					func_1832(var_255_bool, var_1_object);
					if(var_255_bool != 0) {
						bool var_263_bool;
						func_1842(var_1_object);
						if(var_263_bool != 0)
							var_254_bool = true;
					}
					if(var_254_bool != 0)
						var_0_object->AddReply(520626, 21836, 21835); //@t
					bool var_272_bool = false;
					bool var_273_bool;
					func_1842(var_1_object);
					if(var_273_bool != 0) {
						bool var_275_bool;
						func_1854(var_275_bool, var_1_object);
						if(var_275_bool != 0)
							var_272_bool = true;
					}
					if(var_272_bool != 0)
						var_0_object->AddReply(520686, 21897, 21896); //@t
					bool var_289_bool;
					func_1796(var_1_object);
					if(var_289_bool != 0)
						var_0_object->AddReply(528534, 29927, 29926); //@t
					var_0_object->AddReply(520629, -1, 21838); //@t
		}
	}
	for(;;) {
		bool var_230_bool;
		func_2026(var_230_bool);
		if(var_230_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1555(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_234;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_234:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


void func_1897(void)
{
	object var_73_object;
	@CreateDiaryEntry(var_73_object, 364, 1, 525664);
	bool var_77_bool; object var_78_object;
	var_73_object = var_78_object;
	func_1923(var_77_bool, var_78_object, 265);
}
EMIT "Stack[-1] = 0";


void func_1642(object var_124_object, string var_125_string, int var_126_int)
{
	object var_128_object;
	@CreateInvItem(var_128_object);
	var_128_object->SetItemName(var_125_string);
	object var_129_object; object var_130_object; int var_131_int;
	var_124_object = var_129_object;
	var_128_object = var_130_object;
	var_126_int = var_131_int;
	func_1623(var_129_object, var_130_object, var_131_int);
}
EMIT "Stack[-1] = 0";


void func_1910(object var_31_object)
{
	object var_33_object;
	@GetDiaryRoot(var_33_object);
	if(!var_33_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_31_object = false;
	}
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


void func_1655(bool var_82_bool, string var_83_string, string var_84_string)
{
	object var_86_object;
	@FindActor(var_86_object, var_83_string);
	if(var_86_object == null)
		var_82_bool = false;
	@Trigger(var_86_object, var_84_string);
	var_82_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1400(void)
{
	bool var_304_bool;
	@CameraSwitchToNormal();
	bool var_305_bool;
	func_2026(var_305_bool);
	if(var_305_bool != 0) {
	} else {
		@HasAnimationTrack(var_304_bool, "head");
		if(var_304_bool == 0) goto Label_1416;
		@UnlookAsync("head");
	}
Label_1416:
	
}


// @pe
void func_1155(void)
{
	func_1295();
	func_1113();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1667(float var_69_float)
{
	float var_71_float;
	@GetGameTime(var_71_float);
	var_71_float = var_69_float;
}


void func_1923(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_1910(var_31_object);
	object var_28_object;
	var_31_object = var_28_object;
	object var_29_object;
	var_28_object->Find(var_24_int, var_29_object);
	if(!var_29_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_24_int);
		var_22_bool = false;
	}
	var_29_object->AddChild(var_23_object);
	@SendWorldWndMessage(7);
	int var_30_int;
	var_23_object->GetCategory(var_30_int);
	@SetDiarySection(var_30_int);
	var_22_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1672(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_1417(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_1475(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_1512(var_79_bool, var_80_object);
			if(!var_79_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@irand(var_45_int, 2);
		if(var_45_int != 0)
			@SetVariable("voice_common", ((var_44_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_124_bool; object var_125_object;
		var_38_object = var_125_object;
		func_1512(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_1475(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1473;
	
Label_1473:
	var_37_bool = true;
	
}


void func_1681(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_1170(void)
{
	@StopGroup0();
	func_1113();
	func_1555("Neutral");
	func_1104();
}


void func_1688(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1681(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_1951(object var_58_object)
{
	object var_61_object; object var_62_object;
	@GetMainOutdoorScene(var_61_object);
	if(var_61_object == null) {
		@Trace("Can't find main outdoor scene");
		var_62_object = null;
		var_62_object = var_58_object;
	}
	var_61_object->GetMap(var_62_object);
	var_62_object = var_58_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1705(void)
{
	@SetVariable("oob6Mat1", 1);
}


// @pe
void func_1711(void)
{
	@SetVariable("b6q01", 3);
	func_1884();
}


void func_1968(object var_93_object, string var_94_string, float var_95_float)
{
	object var_103_object;
	@GetMainOutdoorScene(var_103_object);
	if(var_103_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_101_cvector;
	cvector var_102_cvector;
	bool var_104_bool;
	var_103_object->GetLocator(var_94_string, var_104_bool, var_101_cvector, var_102_cvector);
	if(!var_104_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_94_string) + " doesnt exist");
	var_103_object->GetMap(var_93_object);
	if(var_93_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_114_float = GetByIndex(var_101_cvector, 0);
	var_115_float = GetByIndex(var_101_cvector, 2);
	var_93_object->SetMapParams(var_114_float, var_115_float, var_95_float);
}
EMIT "Stack[-2] = 0";


void func_1720(object var_50_object)
{
	@SetVariable("b6q01", 4);
	object var_58_object;
	func_1951(var_58_object);
	object var_54_object;
	var_58_object = var_54_object;
	float var_69_float;
	func_1667(var_69_float);
	var_54_object->AddMark("b6q01MatGotoByk", "pt_b6q01_bull", 1, 530992, var_69_float);
	func_1897();
	int var_55_int;
	var_50_object->RemoveItemByType(var_55_int, "alpha_pills", 50);
	bool var_82_bool;
	func_1655(var_82_bool, "quest_b6_01", "init_altar");
	bool var_88_bool;
	func_1655(var_88_bool, "quest_b6_01", "clean_termitnik");
}
EMIT "Stack[-2] = 0";


void func_1475(bool var_48_bool, object var_49_object)
{
	string var_55_string; bool var_57_bool; int var_58_int; string var_59_string;
	var_55_string = "c";
	int var_56_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_49_object->HasProperty((var_55_string + (var_56_int + 1)), var_57_bool);
			if(!var_57_bool) { //@nz
			} else {
				var_56_int += 1;
			}
		}
		if(!var_56_int) { //@nz
			var_48_bool = false;
			return 10;
		}
		var_58_int = 0;
		if(var_56_int > 1)
			@irand(var_58_int, var_56_int);
		var_49_object->GetProperty((var_55_string + (var_58_int + 1)), var_59_string);
		bool var_71_bool; string var_72_string;
		var_59_string = var_72_string;
		func_1568(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


void func_1224(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_1327(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1688(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_1327(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			if(!var_31_int) { //@nz
				@Sleep(3, var_33_bool);
				if(!var_33_bool) { //@nz
				} else {
			} else {
			@irand(var_34_int, var_31_int);
			@irand(var_35_int, 5);
			if(var_35_int != 0)
				var_34_int = 0;
			string var_66_string; int var_67_int;
			var_34_int = var_67_int;
			func_1681(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_1279;
			goto Label_1290;
			}
				Label_1279:
					bool var_59_bool;
					func_1293(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_1285;
			}
		}
	Label_1290:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1285:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_2001(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x7e0";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


// @pe
void func_1757(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_993(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_2018(int var_180_int)
{
	var_180_int = 515545;
}


// @pe
void func_1763(void)
{
	@SetVariable("oob6Mat2", 1);
}


void func_2020(int var_179_int)
{
	var_179_int = 502870;
}


void func_2022(string var_181_string)
{
	var_181_string = "ui/NPC_Mat.png";
}


void func_2024(string var_182_string)
{
	var_182_string = "ui/NPC_Mat_b.png";
}


// @pe
void func_1769(object var_92_object)
{
	object var_96_object;
	func_1951(var_96_object);
	object var_93_object;
	var_96_object = var_93_object;
	func_1968(var_93_object, "pt_map_kurgan", (float)2);
	object var_116_object;
	func_1951(var_116_object);
	var_92_object->ShowMap(var_116_object);
}


void func_2026(bool var_75_bool)
{
	var_75_bool = true;
}


// @pe
void func_235(object var_2_object, string var_211_string)
{
	bool var_212_bool;
	func_2026(var_212_bool);
	if(!var_212_bool) //@nz
		return 0;
	if(var_211_string == var_2_object)
		return 0;
	string var_215_string; bool var_216_bool;
	var_211_string = var_215_string;
	if(var_211_string == "")
		var_216_bool = false;
	else
		var_216_bool = true;
	func_1562(var_215_string, var_216_bool);
	var_2_object = var_211_string;
	
}


void func_1512(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1672(var_92_int);
	string var_86_string = ("d" + var_92_int) + "m";
	int var_87_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_80_object->HasProperty((var_86_string + (var_87_int + 1)), var_88_bool);
			if(!var_88_bool) { //@nz
			} else {
				var_87_int += 1;
			}
		}
		if(!var_87_int) { //@nz
			var_79_bool = false;
			return 10;
		}
		var_89_int = 0;
		if(var_87_int > 1)
			@irand(var_89_int, var_87_int);
		var_80_object->GetProperty((var_86_string + (var_89_int + 1)), var_90_string);
		bool var_111_bool; string var_112_string;
		var_90_string = var_112_string;
		func_1568(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


// @pe
void func_1785(object var_121_object)
{
	@Trace("recipe1 is given");
	object var_124_object;
	var_121_object = var_124_object;
	func_1642(var_124_object, "recipe1", 1);
}


