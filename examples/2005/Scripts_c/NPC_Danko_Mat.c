// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, cvector var_17_cvector)
	{
		if(1 != 0) {
			func_2722();
			if(var_16_bool == 36960) {
				func_157(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_16_bool == 36962) {
				func_157(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_16_bool == 36964) {
				func_157(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_64_bool;
			func_2889(var_64_bool);
			if(var_64_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, cvector var_17_cvector)
	{
		if(1 != 0) {
			func_2722();
			if(var_17_cvector == 14805) {
				object var_22_object; object var_23_object;
				var_22_object = var_1_object;
				var_23_object = var_0_object;
				func_2958();
			}
			if(var_17_cvector == 14811) {
				object var_51_object; object var_52_object;
				var_51_object = var_1_object;
				var_52_object = var_0_object;
				func_2967();
				object var_85_object = var_1_object;
				func_3085(var_0_object);
			}
			if(var_17_cvector == 14812) {
				object var_113_object; object var_114_object;
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_2995();
			}
			if(var_17_cvector == 14816) {
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_3001();
				object var_140_object = var_1_object;
				func_2917(var_0_object);
				object var_146_object; object var_147_object;
				var_146_object = var_1_object;
				var_147_object = var_0_object;
				func_2939();
				object var_150_object = var_1_object;
				func_2923(var_0_object);
			}
			if(var_17_cvector == 13511) {
				object var_159_object; object var_160_object;
				var_159_object = var_1_object;
				var_160_object = var_0_object;
				func_3025();
			}
			if(var_17_cvector == 13526) {
				object var_165_object; object var_166_object;
				var_165_object = var_1_object;
				var_166_object = var_0_object;
				func_3031();
			}
			if(var_17_cvector == 13517) {
				object var_171_object; object var_172_object;
				var_171_object = var_1_object;
				var_172_object = var_0_object;
				func_3037();
			}
			if(var_17_cvector == 14996) {
				object var_177_object; object var_178_object;
				var_177_object = var_1_object;
				var_178_object = var_0_object;
				func_3043();
				object var_181_object; object var_182_object;
				var_181_object = var_1_object;
				var_182_object = var_0_object;
				func_2891();
			}
			if(var_17_cvector == 15004) {
				object var_204_object; object var_205_object;
				var_204_object = var_1_object;
				var_205_object = var_0_object;
				func_3001();
			}
			if(var_17_cvector == 14817) {
				object var_208_object; object var_209_object;
				var_208_object = var_1_object;
				var_209_object = var_0_object;
				func_3049();
				object var_212_object; object var_213_object;
				var_212_object = var_1_object;
				var_213_object = var_0_object;
				func_2891();
			}
			if(var_17_cvector == 15002) {
				object var_216_object; object var_217_object;
				var_216_object = var_1_object;
				var_217_object = var_0_object;
				func_3001();
				object var_218_object = var_1_object;
				func_2923(var_0_object);
			}
			if(var_17_cvector == 15007) {
				object var_222_object = var_1_object;
				func_3079(var_0_object);
				object var_228_object; object var_229_object;
				var_228_object = var_1_object;
				var_229_object = var_0_object;
				func_2939();
				object var_230_object; object var_231_object;
				var_230_object = var_1_object;
				var_231_object = var_0_object;
				func_3061();
				object var_242_object = var_1_object;
				func_2945(var_0_object);
			}
			if(var_17_cvector == 37663) {
				object var_284_object; object var_285_object;
				var_284_object = var_1_object;
				var_285_object = var_0_object;
				func_3070();
			}
			if(var_17_cvector == 37664) {
				object var_298_object; object var_299_object;
				var_298_object = var_1_object;
				var_299_object = var_0_object;
				func_3070();
			}
			if(var_16_bool == 14737) {
				bool var_302_bool = false;
				bool var_303_bool;
				func_3125(var_1_object);
				if(var_303_bool != 0) {
					bool var_311_bool;
					func_3137(var_1_object);
					if(var_311_bool != 0)
						var_302_bool = true;
				}
				if(var_302_bool != 0) {
					object var_317_object; object var_318_object;
					var_317_object = var_1_object;
					var_318_object = var_0_object;
					func_2952();
					object var_321_object; object var_322_object;
					var_321_object = var_1_object;
					var_322_object = var_0_object;
					func_3055();
					func_579(var_17_cvector, "Neutral");
					var_0_object->SetMessage(513496); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(513504, 14773, 14746); //@t
					var_0_object->AddReply(513505, 14748, 14747); //@t
					return 0;
				}
				object var_344_object; object var_345_object;
				var_344_object = var_1_object;
				var_345_object = var_0_object;
				func_3055();
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(512350); //@t
				var_0_object->ClearReplies(); //@t
				bool var_348_bool = false;
				bool var_349_bool = false;
				bool var_350_bool;
				func_3149(var_1_object);
				if(var_350_bool != 0) {
					bool var_356_bool;
					func_3161(var_356_bool, var_1_object);
					if(var_356_bool != 0)
						var_349_bool = true;
				}
				if(var_349_bool != 0) {
					bool var_365_bool;
					func_3172(var_1_object);
					if(var_365_bool != 0)
						var_348_bool = true;
				}
				if(var_348_bool != 0)
					var_0_object->AddReply(513563, 14813, 14812); //@t
				bool var_374_bool;
				func_3184(var_1_object);
				if(var_374_bool != 0)
					var_0_object->AddReply(512352, 13512, 13511); //@t
				bool var_383_bool = false;
				bool var_384_bool;
				func_3196(var_1_object);
				if(var_384_bool != 0) {
					bool var_390_bool;
					func_3113(var_1_object);
					if(var_390_bool != 0)
						var_383_bool = true;
				}
				if(var_383_bool != 0)
					var_0_object->AddReply(512366, 13527, 13526); //@t
				bool var_399_bool;
				func_3208(var_1_object);
				if(var_399_bool != 0)
					var_0_object->AddReply(512357, 13518, 13517); //@t
				bool var_408_bool = false;
				bool var_409_bool;
				func_3220(var_1_object);
				if(var_409_bool != 0) {
					bool var_415_bool;
					func_3244(var_1_object);
					if(var_415_bool != 0)
						var_408_bool = true;
				}
				if(var_408_bool != 0)
					var_0_object->AddReply(513752, 14997, 14996); //@t
				bool var_424_bool = false;
				bool var_425_bool;
				func_3232(var_1_object);
				if(var_425_bool != 0) {
					bool var_431_bool;
					func_3256(var_1_object);
					if(var_431_bool != 0)
						var_424_bool = true;
				}
				if(var_424_bool != 0)
					var_0_object->AddReply(513568, 14818, 14817); //@t
				bool var_440_bool = false;
				bool var_441_bool;
				func_3280(var_441_bool, var_1_object);
				if(var_441_bool != 0) {
					bool var_446_bool;
					func_3101(var_1_object);
					if(var_446_bool != 0)
						var_440_bool = true;
				}
				if(var_440_bool != 0)
					var_0_object->AddReply(513766, 15006, 15005); //@t
				var_0_object->AddReply(512351, -1, 13510); //@t
				return 0;
			}
			if(var_16_bool == 15006) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513767); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535938, 37660, 37659); //@t
				var_0_object->AddReply(535937, 37662, 37658); //@t
				return 0;
			}
			if(var_16_bool == 37662) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535941); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535942, -1, 37663); //@t
				var_0_object->AddReply(535943, -1, 37664); //@t
				return 0;
			}
			if(var_16_bool == 37660) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513768, -1, 15007); //@t
				return 0;
			}
			if(var_16_bool == 14818) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513569); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513570, 14820, 14819); //@t
				return 0;
			}
			if(var_16_bool == 14820) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513571); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513572, 15001, 14821); //@t
				var_0_object->AddReply(535934, 37654, 37653); //@t
				return 0;
			}
			if(var_16_bool == 37654) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535935); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535936, 15001, 37655); //@t
				return 0;
			}
			if(var_16_bool == 15001) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513757); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513758, -1, 15002); //@t
				return 0;
			}
			if(var_16_bool == 14997) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513754, 14999, 14998); //@t
				return 0;
			}
			if(var_16_bool == 14999) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513755); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513756, 15003, 15000); //@t
				var_0_object->AddReply(535931, 37650, 37649); //@t
				return 0;
			}
			if(var_16_bool == 37650) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535932); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535933, 15003, 37651); //@t
				return 0;
			}
			if(var_16_bool == 15003) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513759); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513760, -1, 15004); //@t
				return 0;
			}
			if(var_16_bool == 13518) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(512358); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512359, 13520, 13519); //@t
				var_0_object->AddReply(513497, 14739, 14738); //@t
				return 0;
			}
			if(var_16_bool == 14739) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513498); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513499, 14741, 14740); //@t
				return 0;
			}
			if(var_16_bool == 14741) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513500); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513501, 14743, 14742); //@t
				return 0;
			}
			if(var_16_bool == 14743) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513502); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513503, 13524, 14744); //@t
				return 0;
			}
			if(var_16_bool == 13520) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(512360); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512361, 13522, 13521); //@t
				return 0;
			}
			if(var_16_bool == 13522) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(512362); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512363, 13524, 13523); //@t
				return 0;
			}
			if(var_16_bool == 13524) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(512364); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512365, -1, 13525); //@t
				return 0;
			}
			if(var_16_bool == 13527) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(512367); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512368, 13529, 13528); //@t
				var_0_object->AddReply(535986, 37715, 37714); //@t
				return 0;
			}
			if(var_16_bool == 37715) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535987); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535988, 37717, 37716); //@t
				return 0;
			}
			if(var_16_bool == 37717) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(535989); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535990, 13531, 37718); //@t
				return 0;
			}
			if(var_16_bool == 13529) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(512369); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512370, 13531, 13530); //@t
				var_0_object->AddReply(535930, -1, 37648); //@t
				return 0;
			}
			if(var_16_bool == 13531) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(512371); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512372, -1, 13532); //@t
				return 0;
			}
			if(var_16_bool == 13512) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(512353); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513529, 14775, 14774); //@t
				return 0;
			}
			if(var_16_bool == 14775) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513530); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513531, 14777, 14776); //@t
				return 0;
			}
			if(var_16_bool == 14777) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513532); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513533, 14779, 14778); //@t
				var_0_object->AddReply(513536, 14782, 14781); //@t
				return 0;
			}
			if(var_16_bool == 14782) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513537); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513538, 14784, 14783); //@t
				return 0;
			}
			if(var_16_bool == 14784) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513540, 14786, 14785); //@t
				return 0;
			}
			if(var_16_bool == 14786) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513541); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513542, -1, 14787); //@t
				return 0;
			}
			if(var_16_bool == 14779) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513534); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513535, 14788, 14780); //@t
				return 0;
			}
			if(var_16_bool == 14788) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513543); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513544, 14790, 14789); //@t
				return 0;
			}
			if(var_16_bool == 14790) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513546, -1, 14791); //@t
				return 0;
			}
			if(var_16_bool == 14813) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513564); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513565, 14815, 14814); //@t
				return 0;
			}
			if(var_16_bool == 14815) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513566); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513567, -1, 14816); //@t
				return 0;
			}
			if(var_16_bool == 14748) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513506); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513507, 14750, 14749); //@t
				var_0_object->AddReply(513513, 14756, 14755); //@t
				return 0;
			}
			if(var_16_bool == 14756) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513514); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513515, 14758, 14757); //@t
				var_0_object->AddReply(513517, 14760, 14759); //@t
				return 0;
			}
			if(var_16_bool == 14760) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513518); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513520, 14750, 14763); //@t
				return 0;
			}
			if(var_16_bool == 14758) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513516); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513519, 14750, 14761); //@t
				return 0;
			}
			if(var_16_bool == 14750) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513508); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513521, 14766, 14765); //@t
				var_0_object->AddReply(513509, 14752, 14751); //@t
				return 0;
			}
			if(var_16_bool == 14752) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513510); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513511, 14754, 14753); //@t
				return 0;
			}
			if(var_16_bool == 14754) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513547, 14773, 14792); //@t
				return 0;
			}
			if(var_16_bool == 14766) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513522); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513523, 14769, 14767); //@t
				bool var_785_bool;
				func_3268(var_1_object);
				if(var_785_bool != 0)
					var_0_object->AddReply(513524, 14769, 14768); //@t
				return 0;
			}
			if(var_16_bool == 14769) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513525); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513526, 14773, 14770); //@t
				var_0_object->AddReply(513527, -1, 14772); //@t
				return 0;
			}
			if(var_16_bool == 14773) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513528); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513548, 14796, 14795); //@t
				return 0;
			}
			if(var_16_bool == 14796) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513549); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513550, 14800, 14797); //@t
				var_0_object->AddReply(513551, 14799, 14798); //@t
				return 0;
			}
			if(var_16_bool == 14799) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513552); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513554, 14800, 14801); //@t
				return 0;
			}
			if(var_16_bool == 14800) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513553); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513556, -1, 14805); //@t
				var_0_object->AddReply(513557, 14807, 14806); //@t
				return 0;
			}
			if(var_16_bool == 14807) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513558); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513559, 14810, 14808); //@t
				var_0_object->AddReply(513560, -1, 14809); //@t
				return 0;
			}
			if(var_16_bool == 14810) {
				func_579(var_17_cvector, "Neutral");
				var_0_object->SetMessage(513561); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513562, -1, 14811); //@t
				return 0;
			}
			var_3_string = true;
			bool var_855_bool;
			func_2889(var_855_bool);
			if(var_855_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x25a";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, cvector var_17_cvector)
	{
		if(1 != 0) {
			func_2722();
			if(var_16_int == 42557) {
				func_2079(var_17_cvector, "Neutral");
				var_0_object->SetMessage(540548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540549, -1, 42558); //@t
				var_0_object->AddReply(540797, -1, 42846); //@t
				return 0;
			}
			var_3_string = true;
			bool var_41_bool;
			func_2889(var_41_bool);
			if(var_41_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x836";
	
	}

}


maintask task_7
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		func_2147(var_15_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, int var_16_int)
	{
		if(var_16_int == 10) {
			func_2218();
			bool var_20_bool = false;
			bool var_21_bool;
			func_2466(var_21_bool);
			if(var_21_bool != 0) {
				bool var_24_bool;
				func_2187(var_24_bool);
				if(var_24_bool != 0)
					var_20_bool = true;
			}
			if(var_20_bool != 0) {
				bool var_41_bool;
				func_2167(var_41_bool);
				if(var_41_bool != 0) {
					bool var_60_bool; object var_61_object;
					object var_62_object;
					func_2729(var_62_object);
					var_62_object = var_61_object;
					func_2614(var_60_bool, var_61_object);
				}
			} else {
				func_2182(var_16_int);
				func_2209();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
	{
		func_2400();
		func_2218();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector)
		{
		@StopGroup0();
		func_2218();
		func_2694("Neutral");
		func_2209();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool != 0)
			func_2209();
		else
			func_2694("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, cvector var_15_cvector, object var_16_object)
	{
		bool var_18_bool;
		@IsOverrideActive(var_18_bool);
		if(!var_18_bool) { //@nz
			disable OnUse;
			func_2400();
			bool var_20_bool; object var_21_object;
			var_16_object = var_21_object;
			func_2457(var_20_bool, var_21_object);
			enable OnUse;
			object var_34_object;
			var_16_object = var_34_object;
			func_3464(var_34_object);
			func_2694("Neutral");
			func_2218();
			func_2209();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_20_bool;
	func_2466(var_20_bool);
	if(!var_20_bool) goto Label_0; //@nz
}


void func_3330(void)
{
	object var_235_object;
	@CreateDiaryEntry(var_235_object, 128, 2, 513773);
	bool var_239_bool; object var_240_object;
	var_235_object = var_240_object;
	func_3369(var_239_bool, var_240_object, 127);
}
EMIT "Stack[-1] = 0";


void func_3079(object var_222_object)
{
	int var_225_int;
	var_222_object->RemoveItemByType(var_225_int, "feromicin", 1);
}


void func_2825(bool var_188_bool, string var_189_string, string var_190_string, string var_191_string)
{
	object var_193_object;
	@FindActor(var_193_object, var_189_string);
	if(var_193_object == null)
		var_188_bool = false;
	@Trigger(var_193_object, var_190_string, var_191_string);
	var_188_bool = true;
}
EMIT "Stack[-1] = 0";


void func_13(object var_0_object, int var_390_int, object var_391_object)
{
	var_0_object = var_391_object;
	bool var_401_bool; object var_402_object;
	object var_403_object;
	func_2729(var_403_object);
	var_403_object = var_402_object;
	func_2556(var_401_bool, var_402_object);
	bool var_404_bool; object var_405_object;
	var_391_object = var_405_object;
	func_2471(var_404_bool, var_405_object, 70.0);
	if(!var_404_bool) { //@nz
		var_390_int = -2;
		return 8;
	}
	object var_397_object;
	@CreateDialog(var_397_object);
	int var_408_int;
	func_2883(var_408_int);
	var_397_object->SetNPCName(var_408_int);
	int var_409_int;
	func_2881(var_409_int);
	var_397_object->SetNPCDescription(var_409_int);
	string var_410_string;
	func_2885(var_410_string);
	var_397_object->SetPhoto(var_410_string);
	string var_411_string;
	func_2887(var_411_string);
	var_397_object->SetPhoto2(var_411_string);
	int var_412_int;
	func_3447(var_412_int);
	var_397_object->SetPlayerName(var_412_int);
	bool var_398_bool;
	@IsOverrideActive(var_398_bool);
	if(var_398_bool != 0) {
		var_390_int = -2;
		return 8;
	}
	@DoDialog(var_397_object);
	object var_414_object; object var_415_object;
	var_391_object = var_414_object;
	var_397_object = var_415_object;
	TaskCall(2);
	func_94(var_416_object, var_417_object, var_418_string, var_419_bool, var_414_object, var_415_object);
	TaskReturn();
	bool var_400_bool;
	var_397_object->IsDialogEnd(var_400_bool);
	
	for(;;) {
		var_447_bool = !var_400_bool; //@nz
		if(var_447_bool == 0) goto Label_83;
		@sync();
		var_397_object->IsDialogEnd(var_400_bool);
	}
	
Label_83:
	object var_448_object;
	var_391_object = var_448_object;
	func_2539();
	@StopDialog(var_397_object);
	var_397_object->GetReturnValue(-1);
	int var_399_int = var_390_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3085(object var_86_object)
{
	object var_90_object;
	func_3397(var_90_object);
	object var_87_object;
	var_90_object = var_87_object;
	func_3414(var_87_object, "pt_map_d8q01_toyhouse", (float)2);
	object var_110_object;
	func_3397(var_110_object);
	var_86_object->ShowMap(var_110_object);
}


void func_3343(void)
{
	object var_289_object;
	@CreateDiaryEntry(var_289_object, 129, 2, 513774);
	bool var_293_bool; object var_294_object;
	var_289_object = var_294_object;
	func_3369(var_293_bool, var_294_object, 127);
}
EMIT "Stack[-1] = 0";


void func_272(object var_0_object, int var_43_int, object var_44_object)
{
	var_0_object = var_44_object;
	bool var_54_bool; object var_55_object;
	object var_56_object;
	func_2729(var_56_object);
	var_56_object = var_55_object;
	func_2556(var_54_bool, var_55_object);
	bool var_144_bool; object var_145_object;
	var_44_object = var_145_object;
	func_2471(var_144_bool, var_145_object, 70.0);
	if(!var_144_bool) { //@nz
		var_43_int = -2;
		return 8;
	}
	object var_50_object;
	@CreateDialog(var_50_object);
	int var_191_int;
	func_2883(var_191_int);
	var_50_object->SetNPCName(var_191_int);
	int var_192_int;
	func_2881(var_192_int);
	var_50_object->SetNPCDescription(var_192_int);
	string var_193_string;
	func_2885(var_193_string);
	var_50_object->SetPhoto(var_193_string);
	string var_194_string;
	func_2887(var_194_string);
	var_50_object->SetPhoto2(var_194_string);
	int var_195_int;
	func_3447(var_195_int);
	var_50_object->SetPlayerName(var_195_int);
	bool var_51_bool;
	@IsOverrideActive(var_51_bool);
	if(var_51_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	@DoDialog(var_50_object);
	object var_204_object; object var_205_object;
	var_44_object = var_204_object;
	var_50_object = var_205_object;
	TaskCall(4);
	func_353(var_206_object, var_207_object, var_208_string, var_209_bool, var_204_object, var_205_object);
	TaskReturn();
	bool var_53_bool;
	var_50_object->IsDialogEnd(var_53_bool);
	
	for(;;) {
		var_380_bool = !var_53_bool; //@nz
		if(var_380_bool == 0) goto Label_342;
		@sync();
		var_50_object->IsDialogEnd(var_53_bool);
	}
	
Label_342:
	object var_381_object;
	var_44_object = var_381_object;
	func_2539();
	@StopDialog(var_50_object);
	var_50_object->GetReturnValue(-1);
	int var_52_int = var_43_int;
}
EMIT "Stack[-4] = 0";


void func_2837(float var_68_float)
{
	float var_70_float;
	@GetGameTime(var_70_float);
	var_70_float = var_68_float;
}


void func_2329(void)
{
	bool var_42_bool; int var_43_int; int var_44_int; bool var_45_bool;
	@WaitForAnimEnd();
	bool var_46_bool;
	func_2466(var_46_bool);
	if(!var_46_bool) //@nz
		return 12;
	int var_48_int;
	func_2864(var_48_int);
	int var_40_int;
	var_48_int = var_40_int;
	int var_41_int = 0;
	
	for(;;) {
		bool var_61_bool = false;
		if(var_41_int < 5) {
			bool var_64_bool;
			func_2466(var_64_bool);
			if(var_64_bool != 0)
				var_61_bool = true;
		}
		if(var_61_bool != 0) {
			if(!var_40_int) { //@nz
				@Sleep(3, var_42_bool);
				if(!var_42_bool) { //@nz
				} else {
			} else {
			@irand(var_43_int, var_40_int);
			@irand(var_44_int, 5);
			if(var_44_int != 0)
				var_43_int = 0;
			string var_75_string; int var_76_int;
			var_43_int = var_76_int;
			func_2857(var_75_string, var_76_int);
			@PlayAnimation("all", var_75_string);
			@WaitForAnimEnd(var_45_bool);
			var_77_bool = !var_45_bool; //@nz
			if(var_77_bool == 0) goto Label_2384;
			goto Label_2395;
			}
				Label_2384:
					bool var_68_bool;
					func_2398(var_68_bool);
					var_69_bool = !var_68_bool; //@nz
					if(var_69_bool == 0) goto Label_2390;
			}
		}
	Label_2395:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2390:
		@ResetAAS();
		var_41_int += 1;
	}
	
}


void func_2842(int var_37_int)
{
	float var_39_float;
	@GetGameTime(var_39_float);
	var_37_int = 1 + (var_39_float / 24);
}


void func_3356(object var_40_object)
{
	object var_42_object;
	@GetDiaryRoot(var_42_object);
	if(!var_42_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_40_object = false;
	}
	var_42_object = var_40_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3101(bool var_368_bool)
{
	int var_370_int;
	func_2756(var_370_int, "d8q02");
	if(var_370_int == 2)
		var_368_bool = true;
	var_368_bool = false;
}


// @pe
void func_2079(object var_2_object, string var_480_string)
{
	bool var_481_bool;
	func_2889(var_481_bool);
	if(!var_481_bool) //@nz
		return 0;
	if(var_480_string == var_2_object)
		return 0;
	string var_484_string; bool var_485_bool;
	var_480_string = var_484_string;
	if(var_480_string == "")
		var_485_bool = false;
	else
		var_485_bool = true;
	func_2701(var_484_string, var_485_bool);
	var_2_object = var_480_string;
	
}


// @pe
void func_2851(bool var_35_bool, int var_36_int)
{
	int var_37_int;
	func_2842(var_37_int);
	var_35_bool = var_37_int == var_36_int;
}


// @pe
void func_3113(bool var_312_bool)
{
	int var_314_int;
	func_2756(var_314_int, "d8q04");
	if(var_314_int == 1)
		var_312_bool = true;
	var_312_bool = false;
}


void func_2857(string var_54_string, int var_55_int)
{
	string var_57_string = "idle";
	if(var_55_int != 0)
		var_57_string += var_55_int;
	var_57_string = var_54_string;
}


void func_3369(bool var_31_bool, object var_32_object, int var_33_int)
{
	object var_40_object;
	func_3356(var_40_object);
	object var_37_object;
	var_40_object = var_37_object;
	object var_38_object;
	var_37_object->Find(var_33_int, var_38_object);
	if(!var_38_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_33_int);
		var_31_bool = false;
	}
	var_38_object->AddChild(var_32_object);
	@SendWorldWndMessage(7);
	int var_39_int;
	var_32_object->GetCategory(var_39_int);
	@SetDiarySection(var_39_int);
	var_31_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2864(int var_48_int)
{
	int var_51_int; bool var_52_bool;
	var_51_int = 0;
	
	for(;;) {
		string var_54_string; int var_55_int;
		var_51_int = var_55_int;
		func_2857(var_54_string, var_55_int);
		@HasAnimation(var_52_bool, "all", var_54_string);
		if(!var_52_bool) //@nz
			break;
		var_51_int += 1;
	}
	var_51_int = var_48_int;
}


// @pe
void func_3125(bool var_212_bool)
{
	int var_214_int;
	func_2756(var_214_int, "d8q01");
	if(var_214_int == 1)
		var_212_bool = true;
	var_212_bool = false;
}


void func_2614(bool var_65_bool, object var_66_object)
{
	string var_72_string; bool var_74_bool; int var_75_int; string var_76_string;
	var_72_string = "c";
	int var_73_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_66_object->HasProperty((var_72_string + (var_73_int + 1)), var_74_bool);
			if(!var_74_bool) { //@nz
			} else {
				var_73_int += 1;
			}
		}
		if(!var_73_int) { //@nz
			var_65_bool = false;
			return 10;
		}
		var_75_int = 0;
		if(var_73_int > 1)
			@irand(var_75_int, var_73_int);
		var_66_object->GetProperty((var_72_string + (var_75_int + 1)), var_76_string);
		bool var_88_bool; string var_89_string;
		var_76_string = var_89_string;
		func_2707(var_88_bool, var_89_string);
		var_88_bool = var_65_bool;
		return 10;

	}
}


// @pe
void func_3137(bool var_220_bool)
{
	int var_222_int;
	func_2756(var_222_int, "ood8Mat1");
	if(var_222_int == 0) {
		var_220_bool = true;
		return 0;
	}
	var_220_bool = false;
}


void func_2881(int var_192_int)
{
	var_192_int = 515545;
}


// @pe
void func_579(object var_2_object, string var_234_string)
{
	bool var_235_bool;
	func_2889(var_235_bool);
	if(!var_235_bool) //@nz
		return 0;
	if(var_234_string == var_2_object)
		return 0;
	string var_238_string; bool var_239_bool;
	var_234_string = var_238_string;
	if(var_234_string == "")
		var_239_bool = false;
	else
		var_239_bool = true;
	func_2701(var_238_string, var_239_bool);
	var_2_object = var_234_string;
	
}


void func_2883(int var_191_int)
{
	var_191_int = 502870;
}


void func_2885(string var_193_string)
{
	var_193_string = "ui/NPC_Mat.png";
}


void func_3397(object var_57_object)
{
	object var_60_object; object var_61_object;
	@GetMainOutdoorScene(var_60_object);
	if(var_60_object == null) {
		@Trace("Can't find main outdoor scene");
		var_61_object = null;
		var_61_object = var_57_object;
	}
	var_60_object->GetMap(var_61_object);
	var_61_object = var_57_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2887(string var_194_string)
{
	var_194_string = "ui/NPC_Mat_b.png";
}


void func_2889(bool var_92_bool)
{
	var_92_bool = true;
}


void func_2891(void)
{
	int var_184_int;
	@GetVariable("d8q01MladVladIsVictim", var_184_int);
	if(var_184_int != 0) {
		bool var_188_bool;
		func_2825(var_188_bool, "volonteers_danko", "kill", "mladvlad");
	}
	@GetVariable("d8q01BigVladIsVictim", var_184_int);
	if(var_184_int != 0) {
		bool var_198_bool;
		func_2825(var_198_bool, "volonteers_danko", "kill", "bigvlad");
	}
}


// @pe
void func_3149(bool var_272_bool)
{
	int var_274_int;
	func_2756(var_274_int, "d8q01MatBringToy");
	if(var_274_int == 1)
		var_272_bool = true;
	var_272_bool = false;
}


void func_3414(object var_87_object, string var_88_string, float var_89_float)
{
	object var_97_object;
	@GetMainOutdoorScene(var_97_object);
	if(var_97_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_95_cvector;
	cvector var_96_cvector;
	bool var_98_bool;
	var_97_object->GetLocator(var_88_string, var_98_bool, var_95_cvector, var_96_cvector);
	if(!var_98_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_88_string) + " doesnt exist");
	var_97_object->GetMap(var_87_object);
	if(var_87_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_108_float = GetByIndex(var_95_cvector, 0);
	var_109_float = GetByIndex(var_95_cvector, 2);
	var_87_object->SetMapParams(var_108_float, var_109_float, var_89_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_3161(bool var_278_bool, object var_279_object)
{
	object var_281_object;
	var_279_object = var_281_object;
	bool var_280_bool;
	func_2761(var_280_bool, var_281_object, "toy_horse");
	if(var_280_bool != 0) {
		var_278_bool = true;
		return 0;
	}
	var_278_bool = false;
}


void func_2651(bool var_96_bool, object var_97_object)
{
	bool var_105_bool; int var_106_int; string var_107_string;
	int var_109_int;
	func_2842(var_109_int);
	string var_103_string = ("d" + var_109_int) + "m";
	int var_104_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_97_object->HasProperty((var_103_string + (var_104_int + 1)), var_105_bool);
			if(!var_105_bool) { //@nz
			} else {
				var_104_int += 1;
			}
		}
		if(!var_104_int) { //@nz
			var_96_bool = false;
			return 10;
		}
		var_106_int = 0;
		if(var_104_int > 1)
			@irand(var_106_int, var_104_int);
		var_97_object->GetProperty((var_103_string + (var_106_int + 1)), var_107_string);
		bool var_123_bool; string var_124_string;
		var_107_string = var_124_string;
		func_2707(var_123_bool, var_124_string);
		var_123_bool = var_96_bool;
		return 10;

	}
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_414_object, object var_415_object)
{
	var_0_object = var_415_object;
	var_1_object = var_414_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_415_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_439_bool;
	func_2889(var_439_bool);
	if(var_439_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2694(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_156;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_156:
		return 0;

	}
	
}


void func_2398(bool var_68_bool)
{
	var_68_bool = true;
}


void func_2400(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_353(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_204_object, object var_205_object)
{
	var_0_object = var_205_object;
	var_1_object = var_204_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_211_bool = false;
		bool var_212_bool;
		func_3125(var_1_object);
		if(var_212_bool != 0) {
			bool var_220_bool;
			func_3137(var_1_object);
			if(var_220_bool != 0)
				var_211_bool = true;
		}
		if(var_211_bool != 0) {
			object var_226_object; object var_227_object;
			var_226_object = var_1_object;
			var_227_object = var_0_object;
			func_2952();
			object var_230_object; object var_231_object;
			var_230_object = var_1_object;
			var_231_object = var_0_object;
			func_3055();
			func_579(var_205_object, "Neutral");
			var_0_object->SetMessage(513496); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(513504, 14773, 14746); //@t
			var_0_object->AddReply(513505, 14748, 14747); //@t
		} else {
					object var_266_object; object var_267_object;
					var_266_object = var_1_object;
					var_267_object = var_0_object;
					func_3055();
					func_579(var_205_object, "Neutral");
					var_0_object->SetMessage(512350); //@t
					var_0_object->ClearReplies(); //@t
					bool var_270_bool = false;
					bool var_271_bool = false;
					bool var_272_bool;
					func_3149(var_1_object);
					if(var_272_bool != 0) {
						bool var_278_bool;
						func_3161(var_278_bool, var_1_object);
						if(var_278_bool != 0)
							var_271_bool = true;
					}
					if(var_271_bool != 0) {
						bool var_287_bool;
						func_3172(var_1_object);
						if(var_287_bool != 0)
							var_270_bool = true;
					}
					if(var_270_bool != 0)
						var_0_object->AddReply(513563, 14813, 14812); //@t
					bool var_296_bool;
					func_3184(var_1_object);
					if(var_296_bool != 0)
						var_0_object->AddReply(512352, 13512, 13511); //@t
					bool var_305_bool = false;
					bool var_306_bool;
					func_3196(var_1_object);
					if(var_306_bool != 0) {
						bool var_312_bool;
						func_3113(var_1_object);
						if(var_312_bool != 0)
							var_305_bool = true;
					}
					if(var_305_bool != 0)
						var_0_object->AddReply(512366, 13527, 13526); //@t
					bool var_321_bool;
					func_3208(var_1_object);
					if(var_321_bool != 0)
						var_0_object->AddReply(512357, 13518, 13517); //@t
					bool var_330_bool = false;
					bool var_331_bool;
					func_3220(var_1_object);
					if(var_331_bool != 0) {
						bool var_337_bool;
						func_3244(var_1_object);
						if(var_337_bool != 0)
							var_330_bool = true;
					}
					if(var_330_bool != 0)
						var_0_object->AddReply(513752, 14997, 14996); //@t
					bool var_346_bool = false;
					bool var_347_bool;
					func_3232(var_1_object);
					if(var_347_bool != 0) {
						bool var_353_bool;
						func_3256(var_1_object);
						if(var_353_bool != 0)
							var_346_bool = true;
					}
					if(var_346_bool != 0)
						var_0_object->AddReply(513568, 14818, 14817); //@t
					bool var_362_bool = false;
					bool var_363_bool;
					func_3280(var_363_bool, var_1_object);
					if(var_363_bool != 0) {
						bool var_368_bool;
						func_3101(var_1_object);
						if(var_368_bool != 0)
							var_362_bool = true;
					}
					if(var_362_bool != 0)
						var_0_object->AddReply(513766, 15006, 15005); //@t
					var_0_object->AddReply(512351, -1, 13510); //@t
		}
	}
	for(;;) {
		bool var_253_bool;
		func_2889(var_253_bool);
		if(var_253_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2694(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_578;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_578:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x165";


void func_2147(object var_0_object)
{
	bool var_16_bool;
	func_2466(var_16_bool);
	if(!var_16_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2275();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2329();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_3172(bool var_287_bool)
{
	int var_289_int;
	func_2756(var_289_int, "ood8Mat2");
	if(var_289_int == 0) {
		var_287_bool = true;
		return 0;
	}
	var_287_bool = false;
}


void func_2917(object var_140_object)
{
	int var_143_int;
	var_140_object->RemoveItemByType(var_143_int, "toy_horse", 1);
}


void func_2405(float var_31_float, object var_32_object)
{
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	var_31_float = (var_37_cvector - var_36_cvector) | (var_37_cvector - var_36_cvector);
}


// @pe
void func_2923(object var_151_object)
{
	object var_155_object;
	func_3397(var_155_object);
	object var_152_object;
	var_155_object = var_152_object;
	func_3414(var_152_object, "pt_map_boiny_main_entrance", (float)2);
	object var_156_object;
	func_3397(var_156_object);
	var_151_object->ShowMap(var_156_object);
}


void func_2413(bool var_263_bool, object var_264_object, string var_265_string)
{
	var_270_bool = IsFuncExist(var_264_object, "HasProperty", 2);
	if(!var_270_bool) { //@nz
		var_263_bool = false;
		return 2;
	}
	bool var_267_bool;
	var_264_object->HasProperty(var_265_string, var_267_bool);
	var_267_bool = var_263_bool;
}


// @pe
void func_3184(bool var_296_bool)
{
	int var_298_int;
	func_2756(var_298_int, "ood8Mat3");
	if(var_298_int == 0) {
		var_296_bool = true;
		return 0;
	}
	var_296_bool = false;
}


void func_2167(bool var_41_bool)
{
	object var_43_object;
	@FindActor(var_43_object, "player");
	if(!var_43_object) //@nz
		var_41_bool = false;
	bool var_46_bool; object var_47_object;
	var_43_object = var_47_object;
	func_2457(var_46_bool, var_47_object);
	var_46_bool = var_41_bool;
}
EMIT "Stack[-1] = 0";


void func_3447(int var_195_int)
{
	int var_197_int;
	@GetVariable("branch", var_197_int);
	if(var_197_int == 0) {
		var_195_int = 1;
		return 2;
	EMIT "GOTO 0xd86";
	}
	if(var_197_int == 1) {
		var_195_int = 2;
		return 2;
	}
	var_195_int = 3;
}


void func_2425(bool var_255_bool, object var_256_object, string var_257_string, float var_258_float, float var_259_float, float var_260_float)
{
	object var_264_object;
	var_256_object = var_264_object;
	string var_265_string;
	var_257_string = var_265_string;
	bool var_263_bool;
	func_2413(var_263_bool, var_264_object, var_265_string);
	if(!var_263_bool) //@nz
		var_255_bool = false;
	float var_262_float;
	var_256_object->GetProperty(var_257_string, var_262_float);
	float var_273_float; float var_275_float; float var_276_float;
	var_259_float = var_275_float;
	var_260_float = var_276_float;
	func_2745(var_273_float, (var_262_float + var_258_float), var_275_float, var_276_float);
	var_256_object->SetProperty(var_257_string, var_273_float);
	var_255_bool = true;
}


// @pe
void func_2939(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_3196(bool var_306_bool)
{
	int var_308_int;
	func_2756(var_308_int, "ood8Mat4");
	if(var_308_int == 0) {
		var_306_bool = true;
		return 0;
	}
	var_306_bool = false;
}


// @pe
void func_2945(object var_242_object)
{
	object var_245_object;
	var_242_object = var_245_object;
	bool var_244_bool;
	func_2768(var_244_bool, var_245_object, 0.1);
}


void func_2694(string var_23_string)
{
	float var_26_float; float var_27_float;
	@lshGetAnimTimes(var_23_string, var_26_float, var_27_float);
	@lshPlayAnimation(var_26_float, var_27_float, false);
}


void func_2182(object var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0);
	var_94_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_93_float, var_94_float);
}


// @pe
void func_3208(bool var_321_bool)
{
	int var_323_int;
	func_2756(var_323_int, "ood8Mat5");
	if(var_323_int == 0) {
		var_321_bool = true;
		return 0;
	}
	var_321_bool = false;
}


// @pe
void func_2952(void)
{
	@SetVariable("ood8Mat1", 1);
}


// @pe
void func_3464(object var_34_object)
{
	bool var_35_bool;
	func_2851(var_35_bool, 8);
	if(var_35_bool != 0) {
		int var_43_int; object var_44_object;
		var_34_object = var_44_object;
		TaskCall(3);
		func_272(var_45_object, var_43_int, var_44_object);
		TaskReturn();
		return 0;
	}
	bool var_388_bool;
	func_2851(var_388_bool, 12);
	if(var_388_bool != 0) {
		int var_390_int; object var_391_object;
		var_34_object = var_391_object;
		TaskCall(1);
		func_13(var_392_object, var_390_int, var_391_object);
		TaskReturn();
		return 0;
	}
	int var_449_int; object var_450_object;
	var_34_object = var_450_object;
	TaskCall(5);
	func_1940(var_451_object, var_449_int, var_450_object);
	TaskReturn();
}


void func_2187(bool var_24_bool)
{
	object var_27_object;
	@FindActor(var_27_object, "player");
	if(!var_27_object) { //@nz
		var_24_bool = false;
		return 4;
	}
	float var_31_float; object var_32_object;
	func_2405(var_31_float, var_32_object);
	if(var_31_float > 90000.0) {
		var_24_bool = false;
		return 4;
	}
	bool var_28_bool;
	@CanSee(var_28_bool, var_32_object);
	var_28_bool = var_24_bool;
}
EMIT "Stack[-2] = 0";


void func_2701(string var_238_string, bool var_239_bool)
{
	float var_244_float; float var_245_float;
	@lshGetAnimTimes(var_238_string, var_244_float, var_245_float);
	@lshPlayAnimation(var_244_float, var_245_float, var_239_bool);
}


// @pe
void func_2958(void)
{
	@SetVariable("d8q01BringBadBoy", 1);
	func_3291();
}


void func_2447(bool var_24_bool, cvector var_25_cvector)
{
	cvector var_29_cvector;
	@GetPosition(var_29_cvector);
	cvector var_30_cvector = var_25_cvector - var_29_cvector;
	var_32_float = GetByIndex(var_30_cvector, 0);
	var_33_float = GetByIndex(var_30_cvector, 2);
	bool var_31_bool;
	@Rotate(var_32_float, var_33_float, var_31_bool);
	var_31_bool = var_24_bool;
}


void func_2707(bool var_88_bool, string var_89_string)
{
	bool var_91_bool;
	bool var_92_bool;
	func_2889(var_92_bool);
	if(var_92_bool != 0) {
		@lshHasSpeech(var_91_bool, var_89_string);
		if(var_91_bool != 0) {
			@lshPlaySpeech(var_89_string);
			var_88_bool = true;
		}
	}
	var_88_bool = false;
}


// @pe
void func_3220(bool var_331_bool)
{
	int var_333_int;
	func_2756(var_333_int, "d8q01BigVladIsVictim");
	if(var_333_int == 1)
		var_331_bool = true;
	var_331_bool = false;
}


void func_1940(object var_0_object, int var_449_int, object var_450_object)
{
	var_0_object = var_450_object;
	bool var_460_bool; object var_461_object;
	object var_462_object;
	func_2729(var_462_object);
	var_462_object = var_461_object;
	func_2556(var_460_bool, var_461_object);
	bool var_463_bool; object var_464_object;
	var_450_object = var_464_object;
	func_2471(var_463_bool, var_464_object, 70.0);
	if(!var_463_bool) { //@nz
		var_449_int = -2;
		return 8;
	}
	object var_456_object;
	@CreateDialog(var_456_object);
	int var_467_int;
	func_2883(var_467_int);
	var_456_object->SetNPCName(var_467_int);
	int var_468_int;
	func_2881(var_468_int);
	var_456_object->SetNPCDescription(var_468_int);
	string var_469_string;
	func_2885(var_469_string);
	var_456_object->SetPhoto(var_469_string);
	string var_470_string;
	func_2887(var_470_string);
	var_456_object->SetPhoto2(var_470_string);
	int var_471_int;
	func_3447(var_471_int);
	var_456_object->SetPlayerName(var_471_int);
	bool var_457_bool;
	@IsOverrideActive(var_457_bool);
	if(var_457_bool != 0) {
		var_449_int = -2;
		return 8;
	}
	@DoDialog(var_456_object);
	object var_473_object; object var_474_object;
	var_450_object = var_473_object;
	var_456_object = var_474_object;
	TaskCall(6);
	func_2021(var_475_object, var_476_object, var_477_string, var_478_bool, var_473_object, var_474_object);
	TaskReturn();
	bool var_459_bool;
	var_456_object->IsDialogEnd(var_459_bool);
	
	for(;;) {
		var_503_bool = !var_459_bool; //@nz
		if(var_503_bool == 0) goto Label_2010;
		@sync();
		var_456_object->IsDialogEnd(var_459_bool);
	}
	
Label_2010:
	object var_504_object;
	var_450_object = var_504_object;
	func_2539();
	@StopDialog(var_456_object);
	var_456_object->GetReturnValue(-1);
	int var_458_int = var_449_int;
}
EMIT "Stack[-4] = 0";


void func_2967(void)
{
	@SetVariable("d8q01MatBringToy", 1);
	object var_57_object;
	func_3397(var_57_object);
	object var_54_object;
	var_57_object = var_54_object;
	float var_68_float;
	func_2837(var_68_float);
	var_54_object->AddMark("d8q01MatGotoToyHouse", "pt_map_d8q01_toyhouse", 1, 515444, var_68_float);
	func_3304();
	bool var_79_bool;
	func_2813(var_79_bool, "quest_d8_01", "place_toy");
}
EMIT "Stack[-1] = 0";


void func_2457(bool var_20_bool, object var_21_object)
{
	cvector var_23_cvector;
	var_21_object->GetPosition(var_23_cvector);
	bool var_24_bool; cvector var_25_cvector;
	var_23_cvector = var_25_cvector;
	func_2447(var_24_bool, var_25_cvector);
	var_24_bool = var_20_bool;
}


// @pe
void func_157(object var_2_object, string var_421_string)
{
	bool var_422_bool;
	func_2889(var_422_bool);
	if(!var_422_bool) //@nz
		return 0;
	if(var_421_string == var_2_object)
		return 0;
	string var_425_string; bool var_426_bool;
	var_421_string = var_425_string;
	if(var_421_string == "")
		var_426_bool = false;
	else
		var_426_bool = true;
	func_2701(var_425_string, var_426_bool);
	var_2_object = var_421_string;
	
}


// @pe
void func_3232(bool var_347_bool)
{
	int var_349_int;
	func_2756(var_349_int, "d8q01MladVladIsVictim");
	if(var_349_int == 1)
		var_347_bool = true;
	var_347_bool = false;
}


void func_2209(void)
{
	float var_30_float;
	@rand(var_30_float, 8, 16);
	@SetTimer(10, var_30_float);
}


void func_2722(void)
{
	bool var_19_bool;
	func_2889(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_2466(bool var_16_bool)
{
	bool var_18_bool;
	@IsLoaded(var_18_bool);
	var_18_bool = var_16_bool;
}


void func_2471(bool var_144_bool, object var_145_object, float var_146_float)
{
	cvector var_157_cvector; bool var_164_bool;
	var_145_object->GetPosition(var_157_cvector);
	float var_156_float;
	var_145_object->GetEyesHeight(var_156_float);
	var_165_float = GetByIndex(var_157_cvector, 1);
	SetByIndex(var_157_cvector, 1) = (var_165_float + var_156_float);
	cvector var_158_cvector;
	@GetPosition(var_158_cvector);
	@GetEyesHeight(var_156_float);
	var_166_float = GetByIndex(var_158_cvector, 1);
	SetByIndex(var_158_cvector, 1) = (var_166_float + var_156_float);
	cvector var_159_cvector = var_157_cvector - var_158_cvector;
	var_167_float = GetByIndex(var_159_cvector, 1);
	SetByIndex(var_159_cvector, 1) = (float)0;
	var_169_float = sqrt(var_159_cvector | var_159_cvector);
	var_159_cvector /= var_169_float;
	cvector var_160_cvector = -var_159_cvector;
	cvector var_171_cvector;
	func_2735(var_171_cvector, (var_160_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_161_cvector = ((var_159_cvector * var_146_float) + (var_171_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_163_bool;
	@IsOverrideActive(var_163_bool);
	if(var_163_bool != 0)
		var_144_bool = false;
	@StopWorld();
	@CameraTransit((var_158_cvector + var_161_cvector), var_160_cvector);
	var_184_float = GetByIndex(var_161_cvector, 0);
	var_185_float = GetByIndex(var_161_cvector, 2);
	@Rotate(var_184_float, var_185_float);
	bool var_186_bool;
	func_2889(var_186_bool);
	if(var_186_bool != 0) {
	} else {
		@HasAnimationTrack(var_164_bool, "head");
		if(var_164_bool == 0) goto Label_2533;
		@LookAsyncCamera("head");
	}
Label_2533:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_144_bool = true;
	
}


void func_2729(object var_56_object)
{
	object var_58_object;
	@self(var_58_object);
	var_58_object = var_56_object;
}
EMIT "Stack[-1] = 0";


void func_2218(void)
{
	@KillTimer(10);
}


// @pe
void func_3244(bool var_337_bool)
{
	int var_339_int;
	func_2756(var_339_int, "ood8Mat6");
	if(var_339_int == 0) {
		var_337_bool = true;
		return 0;
	}
	var_337_bool = false;
}


void func_2735(cvector var_171_cvector, cvector var_172_cvector)
{
	float var_175_float = sqrt(var_172_cvector | var_172_cvector);
	if(var_175_float < 0.000001)
		var_171_cvector = [0.0, 0.0, 0.0];
	var_171_cvector = var_172_cvector / var_175_float;
}


// @pe
void func_2995(void)
{
	@SetVariable("ood8Mat2", 1);
}


// @pe
void func_3256(bool var_353_bool)
{
	int var_355_int;
	func_2756(var_355_int, "ood8Mat7");
	if(var_355_int == 0) {
		var_353_bool = true;
		return 0;
	}
	var_353_bool = false;
}


// @pe
void func_2745(float var_273_float, float var_274_float, float var_275_float, float var_276_float)
{
	if(var_274_float < var_275_float) {
		var_275_float = var_273_float;
		return 0;
	}
	if(var_274_float > var_276_float) {
		var_276_float = var_273_float;
		return 0;
	}
	var_274_float = var_273_float;
}


void func_3001(void)
{
	object var_123_object;
	func_3397(var_123_object);
	object var_122_object;
	var_123_object = var_122_object;
	float var_128_float;
	func_2837(var_128_float);
	var_122_object->AddMark("d8q01MatGotoBoiny", "pt_map_boiny_main_entrance", 1, 515324, var_128_float);
	func_3317();
	bool var_137_bool;
	func_2813(var_137_bool, "quest_d8_01", "unlock_boiny");
}
EMIT "Stack[-1] = 0";


// @pe
void func_3268(bool var_785_bool)
{
	int var_787_int;
	func_2756(var_787_int, "d8q02");
	if(var_787_int == 1)
		var_785_bool = true;
	var_785_bool = false;
}


void func_2756(int var_214_int, string var_215_string)
{
	int var_217_int;
	@GetVariable(var_215_string, var_217_int);
	var_217_int = var_214_int;
}


void func_2761(bool var_280_bool, object var_281_object, string var_282_string)
{
	int var_285_int;
	@GetInvItemByName(var_285_int, var_282_string);
	bool var_286_bool;
	var_281_object->HasItem(var_285_int, var_286_bool);
	var_286_bool = var_280_bool;
}


// @pe
void func_3280(bool var_363_bool, object var_364_object)
{
	object var_366_object;
	var_364_object = var_366_object;
	bool var_365_bool;
	func_2761(var_365_bool, var_366_object, "feromicin");
	if(var_365_bool != 0) {
		var_363_bool = true;
		return 0;
	}
	var_363_bool = false;
}


// @pe
void func_2768(bool var_244_bool, object var_245_object, float var_246_float)
{
	if(!var_245_object) { //@nz
		var_244_bool = false;
		return 0;
	}
	if(var_246_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_246_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_251_float;
		var_246_float = var_251_float;
		func_2803(var_251_float);
		bool var_255_bool; object var_256_object; float var_258_float;
		var_245_object = var_256_object;
		var_246_float = var_258_float;
		func_2425(var_255_bool, var_256_object, "reputation", var_258_float, (float)0, (float)1);
		var_244_bool = true;
		return 0;

	}
	
	var_244_bool = false;
}


// @pe
void func_3025(void)
{
	@SetVariable("ood8Mat3", 1);
}


// @pe
void func_3031(void)
{
	@SetVariable("ood8Mat4", 1);
}


void func_3291(void)
{
	object var_27_object;
	@CreateDiaryEntry(var_27_object, 179, 1, 515441);
	bool var_31_bool; object var_32_object;
	var_27_object = var_32_object;
	func_3369(var_31_bool, var_32_object, 175);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3037(void)
{
	@SetVariable("ood8Mat5", 1);
}


// @pe
void func_3043(void)
{
	@SetVariable("ood8Mat6", 1);
}


// @pe
void func_2021(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_473_object, object var_474_object)
{
	var_0_object = var_474_object;
	var_1_object = var_473_object;
	var_3_string = false;
	if(1 != 0) {
		func_2079(var_474_object, "Neutral");
		var_0_object->SetMessage(540548); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540549, -1, 42558); //@t
		var_0_object->AddReply(540797, -1, 42846); //@t
		goto Label_2049;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7e9";
	}
Label_2049:
	bool var_495_bool;
	func_2889(var_495_bool);
	if(var_495_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2694(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2078;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2078:
		return 0;

	}
	
}


void func_3304(void)
{
	object var_72_object;
	@CreateDiaryEntry(var_72_object, 180, 1, 515442);
	bool var_76_bool; object var_77_object;
	var_72_object = var_77_object;
	func_3369(var_76_bool, var_77_object, 175);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3049(void)
{
	@SetVariable("ood8Mat7", 1);
}


void func_2539(void)
{
	bool var_383_bool;
	@CameraSwitchToNormal();
	bool var_384_bool;
	func_2889(var_384_bool);
	if(var_384_bool != 0) {
	} else {
		@HasAnimationTrack(var_383_bool, "head");
		if(var_383_bool == 0) goto Label_2555;
		@UnlookAsync("head");
	}
Label_2555:
	
}


// @pe
void func_3055(void)
{
	@SetVariable("d8TalkToMat", 1);
}


void func_2803(float var_251_float)
{
	object var_253_object;
	@CreateFloatVector(var_253_object);
	var_253_object->add(var_251_float);
	@SendWorldWndMessage(16, var_253_object);
}
EMIT "Stack[-1] = 0";


void func_3317(void)
{
	object var_130_object;
	@CreateDiaryEntry(var_130_object, 181, 1, 515443);
	bool var_134_bool; object var_135_object;
	var_130_object = var_135_object;
	func_3369(var_134_bool, var_135_object, 175);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3061(void)
{
	@SetVariable("d8q02", 1000);
	func_3330();
}


void func_2556(bool var_54_bool, object var_55_object)
{
	int var_61_int; int var_62_int;
	@GetVariable("voice_common", var_61_int);
	if(var_61_int != 0) {
		bool var_65_bool; object var_66_object;
		var_55_object = var_66_object;
		func_2614(var_65_bool, var_66_object);
		if(!var_65_bool) { //@nz
			bool var_96_bool; object var_97_object;
			var_55_object = var_97_object;
			func_2651(var_96_bool, var_97_object);
			if(!var_96_bool) { //@nz
				var_54_bool = false;
				return 4;
			}
		}
		@irand(var_62_int, 2);
		if(var_62_int != 0)
			@SetVariable("voice_common", ((var_61_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_136_bool; object var_137_object;
		var_55_object = var_137_object;
		func_2651(var_136_bool, var_137_object);
		if(!var_136_bool) { //@nz
			bool var_139_bool; object var_140_object;
			var_55_object = var_140_object;
			func_2614(var_139_bool, var_140_object);
			if(!var_139_bool) { //@nz
				var_54_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2612;
	
Label_2612:
	var_54_bool = true;
	
}


void func_2813(bool var_79_bool, string var_80_string, string var_81_string)
{
	object var_83_object;
	@FindActor(var_83_object, var_80_string);
	if(var_83_object == null)
		var_79_bool = false;
	@Trigger(var_83_object, var_81_string);
	var_79_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3070(void)
{
	@SetVariable("d8q02", -1);
	func_3343();
}


