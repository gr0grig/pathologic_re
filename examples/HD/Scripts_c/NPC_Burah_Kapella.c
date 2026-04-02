// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6100();
			if(var_52_cvector == 20654) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6341();
			}
			if(var_51_bool == 19384) {
				func_144(var_52_cvector, "Neutral");
				var_0_object->SetMessage(518275); //@t
				var_0_object->ClearReplies(); //@t
				bool var_81_bool;
				func_7117(var_1_object);
				if(var_81_bool != 0)
					var_0_object->AddReply(519482, 20655, 20654); //@t
				var_0_object->AddReply(518276, -1, 19385); //@t
				return 0;
			}
			if(var_51_bool == 20655) {
				func_144(var_52_cvector, "Strength");
				var_0_object->SetMessage(519483); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519484, 20662, 20656); //@t
				var_0_object->AddReply(519485, 20658, 20657); //@t
				return 0;
			}
			if(var_51_bool == 20658) {
				func_144(var_52_cvector, "Fear");
				var_0_object->SetMessage(519486); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519487, 20660, 20659); //@t
				var_0_object->AddReply(527738, 29091, 29090); //@t
				return 0;
			}
			if(var_51_bool == 29091) {
				func_144(var_52_cvector, "Neutral");
				var_0_object->SetMessage(527739); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527740, 20660, 29092); //@t
				return 0;
			}
			if(var_51_bool == 20660) {
				func_144(var_52_cvector, "Fear");
				var_0_object->SetMessage(519488); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519489, 20662, 20661); //@t
				return 0;
			}
			if(var_51_bool == 20662) {
				func_144(var_52_cvector, "Strength");
				var_0_object->SetMessage(519490); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527741, 29096, 29094); //@t
				var_0_object->AddReply(527742, 29096, 29095); //@t
				return 0;
			}
			if(var_51_bool == 29096) {
				func_144(var_52_cvector, "Neutral");
				var_0_object->SetMessage(527743); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527744, 29098, 29097); //@t
				return 0;
			}
			if(var_51_bool == 29098) {
				func_144(var_52_cvector, "Neutral");
				var_0_object->SetMessage(527745); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519491, 20665, 20664); //@t
				return 0;
			}
			if(var_51_bool == 20665) {
				func_144(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519492); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519493, -1, 20666); //@t
				return 0;
			}
			var_3_string = true;
			bool var_160_bool;
			func_6274(var_160_bool);
			if(var_160_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa7";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6100();
			if(var_52_cvector == 19479) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6743();
			}
			if(var_52_cvector == 19482) {
				object var_63_object; object var_64_object;
				var_63_object = var_1_object;
				var_64_object = var_0_object;
				func_6712();
				object var_126_object = var_1_object;
				func_6276(var_0_object);
			}
			if(var_52_cvector == 19486) {
				object var_154_object; object var_155_object;
				var_154_object = var_1_object;
				var_155_object = var_0_object;
				func_6712();
				object var_156_object = var_1_object;
				func_6276(var_0_object);
			}
			if(var_52_cvector == 19489) {
				object var_160_object; object var_161_object;
				var_160_object = var_1_object;
				var_161_object = var_0_object;
				func_6749();
				object var_173_object = var_1_object;
				func_6688(var_0_object);
				object var_194_object; object var_195_object;
				var_194_object = var_1_object;
				var_195_object = var_0_object;
				func_6460();
			}
			if(var_52_cvector == 20330) {
				object var_200_object; object var_201_object;
				var_200_object = var_1_object;
				var_201_object = var_0_object;
				func_6749();
			}
			if(var_52_cvector == 19492) {
				object var_204_object; object var_205_object;
				var_204_object = var_1_object;
				var_205_object = var_0_object;
				func_6749();
				object var_206_object = var_1_object;
				func_6393(var_0_object);
				object var_211_object; object var_212_object;
				var_211_object = var_1_object;
				var_212_object = var_0_object;
				func_6460();
			}
			if(var_52_cvector == 20325) {
				object var_215_object; object var_216_object;
				var_215_object = var_1_object;
				var_216_object = var_0_object;
				func_6749();
			}
			if(var_51_bool == 19478) {
				object var_219_object; object var_220_object;
				var_219_object = var_1_object;
				var_220_object = var_0_object;
				func_6508();
				func_588(var_52_cvector, "Neutral");
				var_0_object->SetMessage(518365); //@t
				var_0_object->ClearReplies(); //@t
				bool var_241_bool;
				func_7021(var_1_object);
				if(var_241_bool != 0)
					var_0_object->AddReply(518366, 19481, 19479); //@t
				bool var_252_bool = false;
				bool var_253_bool;
				func_7021(var_1_object);
				if(!var_253_bool) { //@nz
					bool var_256_bool;
					func_7009(var_1_object);
					if(var_256_bool != 0)
						var_252_bool = true;
				}
				if(var_252_bool != 0)
					var_0_object->AddReply(518371, 19485, 19484); //@t
				bool var_265_bool = false;
				bool var_266_bool;
				func_7033(var_1_object);
				if(var_266_bool != 0) {
					bool var_272_bool;
					func_7045(var_1_object);
					if(var_272_bool != 0)
						var_265_bool = true;
				}
				if(var_265_bool != 0)
					var_0_object->AddReply(518374, 19488, 19487); //@t
				bool var_281_bool = false;
				bool var_282_bool;
				func_7033(var_1_object);
				if(var_282_bool != 0) {
					bool var_284_bool;
					func_7045(var_1_object);
					if(!var_284_bool) //@nz
						var_281_bool = true;
				}
				if(var_281_bool != 0)
					var_0_object->AddReply(518377, 19491, 19490); //@t
				var_0_object->AddReply(518367, -1, 19480); //@t
				return 0;
			}
			if(var_51_bool == 19491) {
				func_588(var_52_cvector, "Impatience");
				var_0_object->SetMessage(518378); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519177, 20319, 20318); //@t
				return 0;
			}
			if(var_51_bool == 20319) {
				func_588(var_52_cvector, "Impatience");
				var_0_object->SetMessage(519178); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519179, 20321, 20320); //@t
				return 0;
			}
			if(var_51_bool == 20321) {
				func_588(var_52_cvector, "Strength");
				var_0_object->SetMessage(519180); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519181, 20323, 20322); //@t
				return 0;
			}
			if(var_51_bool == 20323) {
				func_588(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519182); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518379, -1, 19492); //@t
				var_0_object->AddReply(519184, -1, 20325); //@t
				return 0;
			}
			if(var_51_bool == 19488) {
				func_588(var_52_cvector, "Impatience");
				var_0_object->SetMessage(518375); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519185, 20327, 20326); //@t
				return 0;
			}
			if(var_51_bool == 20327) {
				func_588(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519186); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519187, 20329, 20328); //@t
				return 0;
			}
			if(var_51_bool == 20329) {
				func_588(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519188); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518376, -1, 19489); //@t
				var_0_object->AddReply(519189, -1, 20330); //@t
				return 0;
			}
			if(var_51_bool == 19485) {
				func_588(var_52_cvector, "Impatience");
				var_0_object->SetMessage(518372); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518373, -1, 19486); //@t
				return 0;
			}
			if(var_51_bool == 19481) {
				func_588(var_52_cvector, "Fear");
				var_0_object->SetMessage(518368); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519191, 20333, 20332); //@t
				var_0_object->AddReply(519193, 20335, 20334); //@t
				return 0;
			}
			if(var_51_bool == 20335) {
				func_588(var_52_cvector, "Fear");
				var_0_object->SetMessage(519194); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519195, 20333, 20336); //@t
				var_0_object->AddReply(519196, -1, 20338); //@t
				return 0;
			}
			if(var_51_bool == 20333) {
				func_588(var_52_cvector, "Fear");
				var_0_object->SetMessage(519192); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518369, -1, 19482); //@t
				var_0_object->AddReply(518370, -1, 19483); //@t
				return 0;
			}
			var_3_string = true;
			bool var_385_bool;
			func_6274(var_385_bool);
			if(var_385_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x263";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6100();
			if(var_52_cvector == 21023) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6698();
				object var_95_object = var_1_object;
				func_6707(var_0_object);
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_6387();
			}
			if(var_52_cvector == 21026) {
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_6698();
				object var_106_object = var_1_object;
				func_6707(var_0_object);
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_6387();
			}
			if(var_52_cvector == 21029) {
				object var_112_object; object var_113_object;
				var_112_object = var_1_object;
				var_113_object = var_0_object;
				func_6698();
				object var_114_object = var_1_object;
				func_6707(var_0_object);
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_6387();
			}
			if(var_52_cvector == 21032) {
				object var_120_object; object var_121_object;
				var_120_object = var_1_object;
				var_121_object = var_0_object;
				func_6698();
				object var_122_object = var_1_object;
				func_6707(var_0_object);
				object var_124_object; object var_125_object;
				var_124_object = var_1_object;
				var_125_object = var_0_object;
				func_6387();
			}
			if(var_52_cvector == 20978) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_6298();
			}
			if(var_52_cvector == 20990) {
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_object;
				func_6304();
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_6310();
			}
			if(var_52_cvector == 21002) {
				object var_163_object; object var_164_object;
				var_163_object = var_1_object;
				var_164_object = var_0_object;
				func_6666();
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_object;
				func_6643();
			}
			if(var_52_cvector == 21003) {
				object var_200_object; object var_201_object;
				var_200_object = var_1_object;
				var_201_object = var_0_object;
				func_6666();
				object var_202_object; object var_203_object;
				var_202_object = var_1_object;
				var_203_object = var_0_object;
				func_6643();
			}
			if(var_52_cvector == 21004) {
				object var_206_object; object var_207_object;
				var_206_object = var_1_object;
				var_207_object = var_0_object;
				func_6666();
				object var_208_object; object var_209_object;
				var_208_object = var_1_object;
				var_209_object = var_0_object;
				func_6643();
			}
			if(var_52_cvector == 21662) {
				object var_212_object; object var_213_object;
				var_212_object = var_1_object;
				var_213_object = var_0_object;
				func_6335();
			}
			if(var_52_cvector == 21668) {
				object var_218_object; object var_219_object;
				var_218_object = var_1_object;
				var_219_object = var_0_object;
				func_6514();
				object var_234_object = var_1_object;
				func_6541(var_0_object);
			}
			if(var_52_cvector == 21672) {
				object var_262_object; object var_263_object;
				var_262_object = var_1_object;
				var_263_object = var_0_object;
				func_6514();
				object var_264_object = var_1_object;
				func_6541(var_0_object);
			}
			if(var_51_bool == 20972) {
				bool var_268_bool;
				func_7057(var_1_object);
				if(var_268_bool != 0) {
					func_1249(var_52_cvector, "Sympathy");
					var_0_object->SetMessage(519812); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(519813, 20974, 20973); //@t
					var_0_object->AddReply(527076, 28374, 28373); //@t
					var_0_object->AddReply(519816, -1, 20976); //@t
					return 0;
				}
				bool var_301_bool;
				func_7069(var_1_object);
				if(var_301_bool != 0) {
					object var_307_object; object var_308_object;
					var_307_object = var_1_object;
					var_308_object = var_0_object;
					func_6292();
					func_1249(var_52_cvector, "Neutral");
					var_0_object->SetMessage(519851); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527084, 28383, 28382); //@t
					return 0;
				}
				func_1249(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519817); //@t
				var_0_object->ClearReplies(); //@t
				bool var_318_bool;
				func_7081(var_1_object);
				if(var_318_bool != 0)
					var_0_object->AddReply(519818, 20979, 20978); //@t
				bool var_327_bool;
				func_7093(var_1_object);
				if(var_327_bool != 0)
					var_0_object->AddReply(519830, 20991, 20990); //@t
				bool var_336_bool;
				func_7105(var_1_object);
				if(var_336_bool != 0)
					var_0_object->AddReply(520449, 21663, 21662); //@t
				var_0_object->AddReply(519850, -1, 21011); //@t
				return 0;
			}
			if(var_51_bool == 21663) {
				func_1249(var_52_cvector, "Strength");
				var_0_object->SetMessage(520450); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520451, 21665, 21664); //@t
				return 0;
			}
			if(var_51_bool == 21665) {
				func_1249(var_52_cvector, "Neutral");
				var_0_object->SetMessage(520452); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520453, 21667, 21666); //@t
				var_0_object->AddReply(520458, -1, 21672); //@t
				return 0;
			}
			if(var_51_bool == 21667) {
				func_1249(var_52_cvector, "Fear");
				var_0_object->SetMessage(520454); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520455, -1, 21668); //@t
				return 0;
			}
			if(var_51_bool == 20991) {
				func_1249(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519831); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519832, 20993, 20992); //@t
				var_0_object->AddReply(519846, 21007, 21006); //@t
				return 0;
			}
			if(var_51_bool == 21007) {
				func_1249(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519847); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519848, 20999, 21008); //@t
				var_0_object->AddReply(519849, 20999, 21010); //@t
				return 0;
			}
			if(var_51_bool == 20993) {
				func_1249(var_52_cvector, "Sympathy");
				var_0_object->SetMessage(519833); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519834, 20995, 20994); //@t
				return 0;
			}
			if(var_51_bool == 20995) {
				func_1249(var_52_cvector, "Sympathy");
				var_0_object->SetMessage(519835); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519836, 20997, 20996); //@t
				return 0;
			}
			if(var_51_bool == 20997) {
				func_1249(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519837); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519838, 20999, 20998); //@t
				var_0_object->AddReply(519845, 20999, 21005); //@t
				return 0;
			}
			if(var_51_bool == 20999) {
				func_1249(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519839); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519840, 21001, 21000); //@t
				var_0_object->AddReply(519844, -1, 21004); //@t
				return 0;
			}
			if(var_51_bool == 21001) {
				func_1249(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519841); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519842, -1, 21002); //@t
				var_0_object->AddReply(519843, -1, 21003); //@t
				return 0;
			}
			if(var_51_bool == 20979) {
				func_1249(var_52_cvector, "Strength");
				var_0_object->SetMessage(519819); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519820, 20981, 20980); //@t
				return 0;
			}
			if(var_51_bool == 20981) {
				func_1249(var_52_cvector, "Strength");
				var_0_object->SetMessage(519821); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519822, 20983, 20982); //@t
				return 0;
			}
			if(var_51_bool == 20983) {
				func_1249(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519824, 20985, 20984); //@t
				var_0_object->AddReply(519829, -1, 20989); //@t
				return 0;
			}
			if(var_51_bool == 20985) {
				func_1249(var_52_cvector, "Fear");
				var_0_object->SetMessage(519825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519826, 20987, 20986); //@t
				return 0;
			}
			if(var_51_bool == 20987) {
				func_1249(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519827); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519828, -1, 20988); //@t
				var_0_object->AddReply(527075, -1, 28372); //@t
				return 0;
			}
			if(var_51_bool == 28383) {
				func_1249(var_52_cvector, "Neutral");
				var_0_object->SetMessage(527085); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527086, 28385, 28384); //@t
				return 0;
			}
			if(var_51_bool == 28385) {
				func_1249(var_52_cvector, "Strength");
				var_0_object->SetMessage(527087); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527088, 21014, 28386); //@t
				return 0;
			}
			if(var_51_bool == 21014) {
				func_1249(var_52_cvector, "Strength");
				var_0_object->SetMessage(519853); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519854, 21016, 21015); //@t
				var_0_object->AddReply(519871, 21016, 21033); //@t
				return 0;
			}
			if(var_51_bool == 21016) {
				func_1249(var_52_cvector, "Fear");
				var_0_object->SetMessage(519855); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519856, 21018, 21017); //@t
				return 0;
			}
			if(var_51_bool == 21018) {
				func_1249(var_52_cvector, "Fear");
				var_0_object->SetMessage(519857); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519858, 21020, 21019); //@t
				var_0_object->AddReply(527143, 28443, 28442); //@t
				return 0;
			}
			if(var_51_bool == 28443) {
				func_1249(var_52_cvector, "Neutral");
				var_0_object->SetMessage(527144); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527145, 21020, 28444); //@t
				return 0;
			}
			if(var_51_bool == 21020) {
				func_1249(var_52_cvector, "Impatience");
				var_0_object->SetMessage(519859); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519860, 21022, 21021); //@t
				var_0_object->AddReply(519866, 21028, 21027); //@t
				var_0_object->AddReply(519870, -1, 21032); //@t
				return 0;
			}
			if(var_51_bool == 21028) {
				func_1249(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519867); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519868, -1, 21029); //@t
				var_0_object->AddReply(519869, 21025, 21030); //@t
				return 0;
			}
			if(var_51_bool == 21022) {
				func_1249(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519861); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519862, -1, 21023); //@t
				var_0_object->AddReply(519863, 21025, 21024); //@t
				return 0;
			}
			if(var_51_bool == 21025) {
				func_1249(var_52_cvector, "Neutral");
				var_0_object->SetMessage(519864); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519865, -1, 21026); //@t
				return 0;
			}
			if(var_51_bool == 28374) {
				func_1249(var_52_cvector, "Sympathy");
				var_0_object->SetMessage(527077); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527078, -1, 28375); //@t
				return 0;
			}
			if(var_51_bool == 20974) {
				func_1249(var_52_cvector, "Sympathy");
				var_0_object->SetMessage(519814); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519815, -1, 20975); //@t
				return 0;
			}
			var_3_string = true;
			bool var_579_bool;
			func_6274(var_579_bool);
			if(var_579_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4f8";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6100();
			if(var_51_bool == 28309) {
				func_2254(var_52_cvector, "Neutral");
				var_0_object->SetMessage(527023); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527024, 21951, 28310); //@t
				var_0_object->AddReply(527025, 21951, 28311); //@t
				return 0;
			}
			if(var_51_bool == 21951) {
				func_2254(var_52_cvector, "Neutral");
				var_0_object->SetMessage(520740); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520741, 21953, 21952); //@t
				var_0_object->AddReply(520748, 21955, 21960); //@t
				return 0;
			}
			if(var_51_bool == 21953) {
				func_2254(var_52_cvector, "Neutral");
				var_0_object->SetMessage(520742); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520743, 21955, 21954); //@t
				var_0_object->AddReply(520747, 21955, 21958); //@t
				return 0;
			}
			if(var_51_bool == 21955) {
				func_2254(var_52_cvector, "Neutral");
				var_0_object->SetMessage(520744); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520745, -1, 21956); //@t
				var_0_object->AddReply(520746, -1, 21957); //@t
				return 0;
			}
			var_3_string = true;
			bool var_111_bool;
			func_6274(var_111_bool);
			if(var_111_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8e5";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6100();
			if(var_52_cvector == 22569) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6353();
			}
			if(var_52_cvector == 22571) {
				object var_63_object; object var_64_object;
				var_63_object = var_1_object;
				var_64_object = var_0_object;
				func_6359();
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_6666();
			}
			if(var_51_bool == 22566) {
				bool var_87_bool;
				func_6771(var_1_object);
				if(var_87_bool != 0) {
					object var_95_object; object var_96_object;
					var_95_object = var_1_object;
					var_96_object = var_0_object;
					func_6347();
					func_2570(var_52_cvector, "Sympathy");
					var_0_object->SetMessage(521388); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(521389, 25279, 22567); //@t
					var_0_object->AddReply(523995, 25286, 25285); //@t
					return 0;
				}
				func_2570(var_52_cvector, "Neutral");
				var_0_object->SetMessage(521390); //@t
				var_0_object->ClearReplies(); //@t
				bool var_125_bool = false;
				bool var_126_bool;
				func_6759(var_1_object);
				if(var_126_bool != 0) {
					bool var_132_bool;
					func_6783(var_1_object);
					if(var_132_bool != 0)
						var_125_bool = true;
				}
				if(var_125_bool != 0)
					var_0_object->AddReply(521391, 22570, 22569); //@t
				var_0_object->AddReply(521394, -1, 22572); //@t
				return 0;
			}
			if(var_51_bool == 22570) {
				func_2570(var_52_cvector, "Neutral");
				var_0_object->SetMessage(521392); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521393, -1, 22571); //@t
				return 0;
			}
			if(var_51_bool == 25286) {
				func_2570(var_52_cvector, "Strength");
				var_0_object->SetMessage(523996); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523997, 25288, 25287); //@t
				return 0;
			}
			if(var_51_bool == 25288) {
				func_2570(var_52_cvector, "Strength");
				var_0_object->SetMessage(523998); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523999, 25279, 25289); //@t
				var_0_object->AddReply(524000, 25279, 25290); //@t
				return 0;
			}
			if(var_51_bool == 25279) {
				func_2570(var_52_cvector, "Neutral");
				var_0_object->SetMessage(523989); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523990, 25281, 25280); //@t
				return 0;
			}
			if(var_51_bool == 25281) {
				func_2570(var_52_cvector, "Fear");
				var_0_object->SetMessage(523991); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523992, 25283, 25282); //@t
				var_0_object->AddReply(524001, 25294, 25293); //@t
				return 0;
			}
			if(var_51_bool == 25294) {
				func_2570(var_52_cvector, "Fear");
				var_0_object->SetMessage(524002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524003, 25283, 25295); //@t
				var_0_object->AddReply(524004, 25297, 25296); //@t
				return 0;
			}
			if(var_51_bool == 25297) {
				func_2570(var_52_cvector, "Strength");
				var_0_object->SetMessage(524005); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530821, 32132, 32131); //@t
				return 0;
			}
			if(var_51_bool == 32132) {
				func_2570(var_52_cvector, "Fear");
				var_0_object->SetMessage(530822); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530823, 25283, 32133); //@t
				return 0;
			}
			if(var_51_bool == 25283) {
				func_2570(var_52_cvector, "Fear");
				var_0_object->SetMessage(523993); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523994, 25299, 25284); //@t
				return 0;
			}
			if(var_51_bool == 25299) {
				func_2570(var_52_cvector, "Impatience");
				var_0_object->SetMessage(524006); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524007, 25301, 25300); //@t
				return 0;
			}
			if(var_51_bool == 25301) {
				func_2570(var_52_cvector, "Strength");
				var_0_object->SetMessage(524008); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524009, -1, 25302); //@t
				var_0_object->AddReply(524010, -1, 25303); //@t
				var_0_object->AddReply(524011, -1, 25304); //@t
				return 0;
			}
			var_3_string = true;
			bool var_236_bool;
			func_6274(var_236_bool);
			if(var_236_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa21";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6100();
			if(var_52_cvector == 32465) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6595();
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_6666();
			}
			if(var_52_cvector == 23102) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_6375();
			}
			if(var_52_cvector == 32866) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_6375();
			}
			if(var_52_cvector == 23651) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_6625();
			}
			if(var_52_cvector == 31814) {
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_6381();
			}
			if(var_52_cvector == 31818) {
				object var_144_object; object var_145_object;
				var_144_object = var_1_object;
				var_145_object = var_0_object;
				func_6472();
				object var_156_object = var_1_object;
				func_6492(var_0_object);
			}
			if(var_52_cvector == 32469) {
				object var_184_object; object var_185_object;
				var_184_object = var_1_object;
				var_185_object = var_0_object;
				func_6595();
				object var_186_object; object var_187_object;
				var_186_object = var_1_object;
				var_187_object = var_0_object;
				func_6666();
			}
			if(var_51_bool == 32462) {
				bool var_190_bool;
				func_6961(var_1_object);
				if(var_190_bool != 0) {
					object var_198_object; object var_199_object;
					var_198_object = var_1_object;
					var_199_object = var_0_object;
					func_6589();
					object var_202_object; object var_203_object;
					var_202_object = var_1_object;
					var_203_object = var_0_object;
					func_6631();
					func_3150(var_52_cvector, "Neutral");
					var_0_object->SetMessage(531154); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531276, 32591, 32590); //@t
					return 0;
				}
				func_3150(var_52_cvector, "Neutral");
				var_0_object->SetMessage(521924); //@t
				var_0_object->ClearReplies(); //@t
				bool var_229_bool = false;
				bool var_230_bool;
				func_6795(var_1_object);
				if(var_230_bool != 0) {
					bool var_236_bool;
					func_6807(var_1_object);
					if(!var_236_bool) //@nz
						var_229_bool = true;
				}
				if(var_229_bool != 0)
					var_0_object->AddReply(521925, 23656, 23099); //@t
				bool var_246_bool;
				func_6985(var_1_object);
				if(var_246_bool != 0)
					var_0_object->AddReply(522478, 23652, 23651); //@t
				bool var_255_bool = false;
				bool var_256_bool;
				func_6913(var_1_object);
				if(var_256_bool != 0) {
					bool var_262_bool;
					func_6819(var_1_object);
					if(var_262_bool != 0)
						var_255_bool = true;
				}
				if(var_255_bool != 0)
					var_0_object->AddReply(530448, 31815, 31814); //@t
				bool var_271_bool;
				func_6973(var_1_object);
				if(var_271_bool != 0)
					var_0_object->AddReply(531159, 32468, 32467); //@t
				var_0_object->AddReply(521926, -1, 23100); //@t
				var_0_object->AddReply(531282, -1, 32597); //@t
				return 0;
			}
			if(var_51_bool == 32468) {
				func_3150(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531160); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531161, -1, 32469); //@t
				return 0;
			}
			if(var_51_bool == 31815) {
				func_3150(var_52_cvector, "Fear");
				var_0_object->SetMessage(530449); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530450, 31817, 31816); //@t
				var_0_object->AddReply(531283, 32601, 32598); //@t
				return 0;
			}
			if(var_51_bool == 32601) {
				func_3150(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531289, 32603, 32604); //@t
				return 0;
			}
			if(var_51_bool == 31817) {
				func_3150(var_52_cvector, "Fear");
				var_0_object->SetMessage(530451); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531287, 32603, 32602); //@t
				var_0_object->AddReply(531284, 32600, 32599); //@t
				return 0;
			}
			if(var_51_bool == 32600) {
				func_3150(var_52_cvector, "Impatience");
				var_0_object->SetMessage(531285); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531290, 32603, 32606); //@t
				return 0;
			}
			if(var_51_bool == 32603) {
				func_3150(var_52_cvector, "Impatience");
				var_0_object->SetMessage(531288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530452, -1, 31818); //@t
				return 0;
			}
			if(var_51_bool == 23652) {
				func_3150(var_52_cvector, "Fear");
				var_0_object->SetMessage(522479); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522480, 23654, 23653); //@t
				return 0;
			}
			if(var_51_bool == 23654) {
				func_3150(var_52_cvector, "Fear");
				var_0_object->SetMessage(522481); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522482, -1, 23655); //@t
				return 0;
			}
			if(var_51_bool == 23656) {
				func_3150(var_52_cvector, "Strength");
				var_0_object->SetMessage(522483); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522484, 23658, 23657); //@t
				var_0_object->AddReply(522492, 23666, 23665); //@t
				return 0;
			}
			if(var_51_bool == 23666) {
				func_3150(var_52_cvector, "Neutral");
				var_0_object->SetMessage(522493); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522494, 23658, 23667); //@t
				return 0;
			}
			if(var_51_bool == 23658) {
				func_3150(var_52_cvector, "Strength");
				var_0_object->SetMessage(522485); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522486, 23660, 23659); //@t
				var_0_object->AddReply(522495, 23670, 23669); //@t
				return 0;
			}
			if(var_51_bool == 23670) {
				func_3150(var_52_cvector, "Neutral");
				var_0_object->SetMessage(522496); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522497, 23662, 23671); //@t
				return 0;
			}
			if(var_51_bool == 23660) {
				func_3150(var_52_cvector, "Strength");
				var_0_object->SetMessage(522487); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522488, 23662, 23661); //@t
				return 0;
			}
			if(var_51_bool == 23662) {
				func_3150(var_52_cvector, "Neutral");
				var_0_object->SetMessage(522489); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522490, 23664, 23663); //@t
				var_0_object->AddReply(531512, -1, 32866); //@t
				return 0;
			}
			if(var_51_bool == 23664) {
				func_3150(var_52_cvector, "Neutral");
				var_0_object->SetMessage(522491); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521928, -1, 23102); //@t
				return 0;
			}
			if(var_51_bool == 32591) {
				func_3150(var_52_cvector, "Fear");
				var_0_object->SetMessage(531277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531278, 32593, 32592); //@t
				var_0_object->AddReply(531281, 32464, 32595); //@t
				return 0;
			}
			if(var_51_bool == 32593) {
				func_3150(var_52_cvector, "Impatience");
				var_0_object->SetMessage(531279); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531155, 32464, 32463); //@t
				var_0_object->AddReply(531280, -1, 32594); //@t
				return 0;
			}
			if(var_51_bool == 32464) {
				func_3150(var_52_cvector, "Sympathy");
				var_0_object->SetMessage(531156); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531157, -1, 32465); //@t
				var_0_object->AddReply(531158, -1, 32466); //@t
				return 0;
			}
			var_3_string = true;
			bool var_436_bool;
			func_6274(var_436_bool);
			if(var_436_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc65";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, object var_37_object, object var_38_object, object var_39_object, string var_40_string, bool var_41_bool, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6100();
			if(var_52_cvector == 31688) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6409();
				object var_120_object = var_1_object;
				func_6672(var_0_object);
			}
			if(var_52_cvector == 31693) {
				object var_148_object; object var_149_object;
				var_148_object = var_1_object;
				var_149_object = var_0_object;
				func_6409();
				object var_150_object = var_1_object;
				func_6672(var_0_object);
			}
			if(var_52_cvector == 31722) {
				object var_154_object; object var_155_object;
				var_154_object = var_1_object;
				var_155_object = var_0_object;
				func_6450();
			}
			if(var_51_bool == 31679) {
				bool var_169_bool = false;
				bool var_170_bool = false;
				bool var_171_bool;
				func_6831(var_1_object);
				if(!var_171_bool) { //@nz
					bool var_180_bool;
					func_6867(var_1_object);
					if(!var_180_bool) //@nz
						var_170_bool = true;
				}
				if(var_170_bool != 0) {
					bool var_187_bool;
					func_6903(var_187_bool, var_1_object);
					if(var_187_bool != 0)
						var_169_bool = true;
				}
				if(var_169_bool != 0) {
					func_3994(var_52_cvector, "Neutral");
					var_0_object->SetMessage(530291); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531185, -1, 32490); //@t
					var_0_object->AddReply(530292, -1, 31680); //@t
					return 0;
				}
				bool var_222_bool = false;
				bool var_223_bool;
				func_6843(var_1_object);
				if(var_223_bool != 0) {
					bool var_229_bool;
					func_6903(var_229_bool, var_1_object);
					if(var_229_bool != 0)
						var_222_bool = true;
				}
				if(var_222_bool != 0) {
					object var_231_object; object var_232_object;
					var_231_object = var_1_object;
					var_232_object = var_0_object;
					func_6403();
					func_3994(var_52_cvector, "Impatience");
					var_0_object->SetMessage(530293); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531188, 32494, 32493); //@t
					var_0_object->AddReply(531193, 32496, 32498); //@t
					return 0;
				}
				func_3994(var_52_cvector, "Neutral");
				var_0_object->SetMessage(530302); //@t
				var_0_object->ClearReplies(); //@t
				bool var_245_bool = false;
				bool var_246_bool;
				func_6855(var_1_object);
				if(var_246_bool != 0) {
					bool var_252_bool;
					func_6903(var_252_bool, var_1_object);
					if(var_252_bool != 0)
						var_245_bool = true;
				}
				if(var_245_bool != 0)
					var_0_object->AddReply(530303, 31692, 31691); //@t
				bool var_257_bool = false;
				bool var_258_bool;
				func_6879(var_1_object);
				if(var_258_bool != 0) {
					bool var_264_bool;
					func_6891(var_1_object);
					if(var_264_bool != 0)
						var_257_bool = true;
				}
				if(var_257_bool != 0)
					var_0_object->AddReply(530333, 31721, 31720); //@t
				var_0_object->AddReply(530306, -1, 31694); //@t
				return 0;
			}
			if(var_51_bool == 31721) {
				func_3994(var_52_cvector, "Neutral");
				var_0_object->SetMessage(530334); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531186, 32492, 32491); //@t
				return 0;
			}
			if(var_51_bool == 32492) {
				func_3994(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531187); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530335, -1, 31722); //@t
				return 0;
			}
			if(var_51_bool == 31692) {
				func_3994(var_52_cvector, "Sympathy");
				var_0_object->SetMessage(530304); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530305, -1, 31693); //@t
				return 0;
			}
			if(var_51_bool == 32494) {
				func_3994(var_52_cvector, "Impatience");
				var_0_object->SetMessage(531189); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531190, 32496, 32495); //@t
				var_0_object->AddReply(531192, 32500, 32497); //@t
				return 0;
			}
			if(var_51_bool == 32500) {
				func_3994(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531194); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531196, 32496, 32502); //@t
				var_0_object->AddReply(531195, -1, 32501); //@t
				return 0;
			}
			if(var_51_bool == 32496) {
				func_3994(var_52_cvector, "Impatience");
				var_0_object->SetMessage(531191); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530294, 31683, 31682); //@t
				var_0_object->AddReply(531197, 31685, 32504); //@t
				return 0;
			}
			if(var_51_bool == 31683) {
				func_3994(var_52_cvector, "Neutral");
				var_0_object->SetMessage(530295); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530296, 31685, 31684); //@t
				return 0;
			}
			if(var_51_bool == 31685) {
				func_3994(var_52_cvector, "Neutral");
				var_0_object->SetMessage(530297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530298, 31687, 31686); //@t
				var_0_object->AddReply(531198, 32507, 32506); //@t
				return 0;
			}
			if(var_51_bool == 32507) {
				func_3994(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531199); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531200, 31687, 32508); //@t
				var_0_object->AddReply(531201, -1, 32509); //@t
				return 0;
			}
			if(var_51_bool == 31687) {
				func_3994(var_52_cvector, "Neutral");
				var_0_object->SetMessage(530299); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530300, -1, 31688); //@t
				var_0_object->AddReply(530301, -1, 31689); //@t
				return 0;
			}
			var_3_string = true;
			bool var_364_bool;
			func_6274(var_364_bool);
			if(var_364_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfb1";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, int var_40_int, int var_41_int, object var_42_object, object var_43_object, object var_44_object, string var_45_string, bool var_46_bool, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6100();
			if(var_52_cvector == 32424) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6563();
			}
			if(var_52_cvector == 32430) {
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_6563();
			}
			if(var_52_cvector == 32449) {
				object var_106_object; object var_107_object;
				var_106_object = var_1_object;
				var_107_object = var_0_object;
				func_6579();
				object var_122_object = var_1_object;
				func_6655(var_0_object);
				object var_146_object; object var_147_object;
				var_146_object = var_1_object;
				var_147_object = var_0_object;
				func_6466();
			}
			if(var_51_bool == 32423) {
				bool var_152_bool;
				func_6925(var_1_object);
				if(var_152_bool != 0) {
					object var_160_object; object var_161_object;
					var_160_object = var_1_object;
					var_161_object = var_0_object;
					func_6557();
					func_4603(var_52_cvector, "Neutral");
					var_0_object->SetMessage(531105); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531107, 32678, 32425); //@t
					var_0_object->AddReply(531353, 32678, 32685); //@t
					return 0;
				}
				func_4603(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531108); //@t
				var_0_object->ClearReplies(); //@t
				bool var_190_bool;
				func_6937(var_1_object);
				if(var_190_bool != 0)
					var_0_object->AddReply(531109, 32429, 32427); //@t
				bool var_199_bool;
				func_6949(var_1_object);
				if(var_199_bool != 0)
					var_0_object->AddReply(531129, 32448, 32447); //@t
				var_0_object->AddReply(531110, -1, 32428); //@t
				return 0;
			}
			if(var_51_bool == 32448) {
				func_4603(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531130); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531365, 32702, 32701); //@t
				return 0;
			}
			if(var_51_bool == 32702) {
				func_4603(var_52_cvector, "Sympathy");
				var_0_object->SetMessage(531366); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531367, 32704, 32703); //@t
				var_0_object->AddReply(531369, 32704, 32705); //@t
				return 0;
			}
			if(var_51_bool == 32704) {
				func_4603(var_52_cvector, "Fear");
				var_0_object->SetMessage(531368); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531131, -1, 32449); //@t
				return 0;
			}
			if(var_51_bool == 32429) {
				func_4603(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531111); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531112, -1, 32430); //@t
				return 0;
			}
			if(var_51_bool == 32678) {
				func_4603(var_52_cvector, "Fear");
				var_0_object->SetMessage(531346); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531347, 32680, 32679); //@t
				var_0_object->AddReply(531354, 32687, 32686); //@t
				return 0;
			}
			if(var_51_bool == 32687) {
				func_4603(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531355); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531356, 32680, 32688); //@t
				var_0_object->AddReply(531357, -1, 32689); //@t
				return 0;
			}
			if(var_51_bool == 32680) {
				func_4603(var_52_cvector, "Fear");
				var_0_object->SetMessage(531348); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531349, 32682, 32681); //@t
				var_0_object->AddReply(531358, 32692, 32691); //@t
				return 0;
			}
			if(var_51_bool == 32692) {
				func_4603(var_52_cvector, "Impatience");
				var_0_object->SetMessage(531359); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531360, 32682, 32693); //@t
				return 0;
			}
			if(var_51_bool == 32682) {
				func_4603(var_52_cvector, "Strength");
				var_0_object->SetMessage(531350); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531351, 32684, 32683); //@t
				var_0_object->AddReply(531362, 32697, 32696); //@t
				return 0;
			}
			if(var_51_bool == 32697) {
				func_4603(var_52_cvector, "Neutral");
				var_0_object->SetMessage(531363); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531364, 32684, 32698); //@t
				return 0;
			}
			if(var_51_bool == 32684) {
				func_4603(var_52_cvector, "Strength");
				var_0_object->SetMessage(531352); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531106, -1, 32424); //@t
				var_0_object->AddReply(531361, -1, 32695); //@t
				return 0;
			}
			var_3_string = true;
			bool var_306_bool;
			func_6274(var_306_bool);
			if(var_306_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1212";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, int var_45_int, int var_46_int, object var_47_object, object var_48_object, object var_49_object, string var_50_string, bool var_51_bool, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6100();
			if(var_52_cvector == 36934) {
				object var_57_object; object var_58_object;
				var_57_object = var_1_object;
				var_58_object = var_0_object;
				func_6637();
			}
			if(var_51_bool == 36933) {
				func_5118(var_52_cvector, "Neutral");
				var_0_object->SetMessage(535258); //@t
				var_0_object->ClearReplies(); //@t
				bool var_81_bool;
				func_6997(var_1_object);
				if(var_81_bool != 0)
					var_0_object->AddReply(535259, 36983, 36934); //@t
				var_0_object->AddReply(535304, -1, 36982); //@t
				return 0;
			}
			if(var_51_bool == 36983) {
				func_5118(var_52_cvector, "Strength");
				var_0_object->SetMessage(535305); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535306, 36985, 36984); //@t
				var_0_object->AddReply(535318, 36998, 36997); //@t
				return 0;
			}
			if(var_51_bool == 36998) {
				func_5118(var_52_cvector, "Neutral");
				var_0_object->SetMessage(535319); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535320, 36990, 36999); //@t
				var_0_object->AddReply(535321, 36985, 37001); //@t
				return 0;
			}
			if(var_51_bool == 36985) {
				func_5118(var_52_cvector, "Strength");
				var_0_object->SetMessage(535307); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535308, 36987, 36986); //@t
				return 0;
			}
			if(var_51_bool == 36987) {
				func_5118(var_52_cvector, "Strength");
				var_0_object->SetMessage(535309); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535311, 36990, 36989); //@t
				var_0_object->AddReply(535313, 36990, 36991); //@t
				return 0;
			}
			if(var_51_bool == 36990) {
				func_5118(var_52_cvector, "Sympathy");
				var_0_object->SetMessage(535312); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535310, 36994, 36988); //@t
				var_0_object->AddReply(535314, -1, 36993); //@t
				return 0;
			}
			if(var_51_bool == 36994) {
				func_5118(var_52_cvector, "Sympathy");
				var_0_object->SetMessage(535315); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535316, -1, 36995); //@t
				var_0_object->AddReply(535317, -1, 36996); //@t
				return 0;
			}
			var_3_string = true;
			bool var_152_bool;
			func_6274(var_152_bool);
			if(var_152_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1415";
	
	}

}


task task_18
{
}


task task_19
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, int var_50_int, int var_51_int, cvector var_52_cvector)
	{
		if(1 != 0) {
			func_6100();
			if(var_51_int == 42560) {
				func_5467(var_52_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_81_bool;
			func_6274(var_81_bool);
			if(var_81_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1572";
	
	}

}


maintask task_20
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector)
	{
		var_51_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_5538(var_50_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector, int var_51_int)
	{
		if(var_51_int == 10) {
			func_5603();
			bool var_55_bool = false;
			bool var_56_bool;
			func_5824(var_56_bool);
			if(var_56_bool != 0) {
				bool var_59_bool;
				func_5572(var_59_bool);
				if(var_59_bool != 0)
					var_55_bool = true;
			}
			if(var_55_bool != 0) {
				bool var_76_bool;
				func_5552(var_76_bool);
				if(var_76_bool != 0) {
					bool var_95_bool; object var_96_object;
					object var_97_object;
					func_6107(var_97_object);
					var_97_object = var_96_object;
					func_5974(var_95_bool, var_96_object);
				}
			} else {
				func_5567(var_51_int);
				func_5594();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector)
	{
		func_5785();
		func_5603();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector)
	{
		@StopGroup0();
		func_5603();
		func_6054("Neutral");
		func_5594();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector, bool var_51_bool)
	{
		if(var_51_bool != 0)
			func_5594();
		else
			func_6054("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, object var_35_object, object var_36_object, object var_37_object, string var_38_string, bool var_39_bool, object var_40_object, object var_41_object, object var_42_object, string var_43_string, bool var_44_bool, object var_45_object, object var_46_object, object var_47_object, string var_48_string, bool var_49_bool, cvector var_50_cvector, object var_51_object)
	{
		bool var_53_bool;
		@IsOverrideActive(var_53_bool);
		if(!var_53_bool) { //@nz
			disable OnUse;
			func_5785();
			bool var_55_bool; object var_56_object;
			var_51_object = var_56_object;
			func_5815(var_55_bool, var_56_object);
			enable OnUse;
			object var_69_object;
			var_51_object = var_69_object;
			func_7478(var_53_bool, var_69_object);
			func_6054("Neutral");
			func_5603();
			func_5594();
		}
	}

}


void func_0(object var_0_object, int var_421_int, object var_422_object)
{
	var_0_object = var_422_object;
	bool var_432_bool; object var_433_object;
	var_422_object = var_433_object;
	func_5829(var_432_bool, var_433_object, 70.0);
	if(!var_432_bool) { //@nz
		var_421_int = -2;
		return 8;
	}
	object var_428_object;
	@CreateDialog(var_428_object);
	int var_436_int;
	func_6268(var_436_int);
	var_428_object->SetNPCName(var_436_int);
	int var_437_int;
	func_6266(var_437_int);
	var_428_object->SetNPCDescription(var_437_int);
	string var_438_string;
	func_6270(var_438_string);
	var_428_object->SetPhoto(var_438_string);
	string var_439_string;
	func_6272(var_439_string);
	var_428_object->SetPhoto2(var_439_string);
	int var_440_int;
	func_7387(var_440_int);
	var_428_object->SetPlayerName(var_440_int);
	bool var_429_bool;
	@IsOverrideActive(var_429_bool);
	if(var_429_bool != 0) {
		var_421_int = -2;
		return 8;
	}
	@DoDialog(var_428_object);
	bool var_442_bool; object var_443_object;
	object var_444_object;
	func_6107(var_444_object);
	var_444_object = var_443_object;
	func_5916(var_442_bool, var_443_object);
	object var_445_object; object var_446_object;
	var_422_object = var_445_object;
	var_428_object = var_446_object;
	TaskCall(1);
	func_81(var_447_object, var_448_object, var_449_string, var_450_bool, var_445_object, var_446_object);
	TaskReturn();
	bool var_431_bool;
	var_428_object->IsDialogEnd(var_431_bool);
	
	for(;;) {
		var_481_bool = !var_431_bool; //@nz
		if(var_481_bool == 0) goto Label_70;
		@sync();
		var_428_object->IsDialogEnd(var_431_bool);
	}
	
Label_70:
	object var_482_object;
	var_422_object = var_482_object;
	func_5898();
	@StopDialog(var_428_object);
	var_428_object->GetReturnValue(-1);
	int var_430_int = var_421_int;
}
EMIT "Stack[-4] = 0";


void func_1030(object var_0_object, int var_302_int, object var_303_object)
{
	var_0_object = var_303_object;
	bool var_313_bool; object var_314_object;
	var_303_object = var_314_object;
	func_5829(var_313_bool, var_314_object, 70.0);
	if(!var_313_bool) { //@nz
		var_302_int = -2;
		return 8;
	}
	object var_309_object;
	@CreateDialog(var_309_object);
	int var_317_int;
	func_6268(var_317_int);
	var_309_object->SetNPCName(var_317_int);
	int var_318_int;
	func_6266(var_318_int);
	var_309_object->SetNPCDescription(var_318_int);
	string var_319_string;
	func_6270(var_319_string);
	var_309_object->SetPhoto(var_319_string);
	string var_320_string;
	func_6272(var_320_string);
	var_309_object->SetPhoto2(var_320_string);
	int var_321_int;
	func_7387(var_321_int);
	var_309_object->SetPlayerName(var_321_int);
	bool var_310_bool;
	@IsOverrideActive(var_310_bool);
	if(var_310_bool != 0) {
		var_302_int = -2;
		return 8;
	}
	@DoDialog(var_309_object);
	bool var_323_bool; object var_324_object;
	object var_325_object;
	func_6107(var_325_object);
	var_325_object = var_324_object;
	func_5916(var_323_bool, var_324_object);
	object var_326_object; object var_327_object;
	var_303_object = var_326_object;
	var_309_object = var_327_object;
	TaskCall(5);
	func_1111(var_328_object, var_329_object, var_330_string, var_331_bool, var_326_object, var_327_object);
	TaskReturn();
	bool var_312_bool;
	var_309_object->IsDialogEnd(var_312_bool);
	
	for(;;) {
		var_414_bool = !var_312_bool; //@nz
		if(var_414_bool == 0) goto Label_1100;
		@sync();
		var_309_object->IsDialogEnd(var_312_bool);
	}
	
Label_1100:
	object var_415_object;
	var_303_object = var_415_object;
	func_5898();
	@StopDialog(var_309_object);
	var_309_object->GetReturnValue(-1);
	int var_311_int = var_302_int;
}
EMIT "Stack[-4] = 0";


void func_6151(object var_176_object, int var_177_int)
{
	int var_179_int;
	object var_180_object;
	var_176_object = var_180_object;
	int var_182_int;
	func_5798(var_180_object, "money", var_182_int);
	if(var_182_int > 0) {
		@GetInvItemByName(var_179_int, "Money");
		int var_189_int; int var_190_int;
		var_179_int = var_189_int;
		var_177_int = var_190_int;
		func_6139(var_189_int, var_190_int);
	}
}


// @pe
void func_6666(void)
{
	@TriggerWorld("playsound", "mapmark");
}


// @pe
void func_2570(object var_2_object, string var_632_string)
{
	bool var_633_bool;
	func_6274(var_633_bool);
	if(!var_633_bool) //@nz
		return 0;
	if(var_632_string == var_2_object)
		return 0;
	string var_636_string; bool var_637_bool;
	var_632_string = var_636_string;
	if(var_632_string == "")
		var_637_bool = false;
	else
		var_637_bool = true;
	func_6070(var_636_string, var_637_bool);
	var_2_object = var_632_string;
	
}


void func_7179(void)
{
	object var_109_object;
	@CreateDiaryEntry(var_109_object, 602, 2, 531153);
	bool var_113_bool; object var_114_object;
	var_109_object = var_114_object;
	func_7309(var_113_bool, var_114_object, 598);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6672(object var_121_object)
{
	object var_125_object;
	func_7337(var_125_object);
	object var_122_object;
	var_125_object = var_122_object;
	func_7354(var_122_object, "pt_map_spi4ka", (float)2);
	object var_145_object;
	func_7337(var_145_object);
	var_121_object->ShowMap(var_145_object);
}


void func_7192(void)
{
	object var_85_object;
	@CreateDiaryEntry(var_85_object, 599, 2, 531150);
	bool var_89_bool; object var_90_object;
	var_85_object = var_90_object;
	func_7309(var_89_bool, var_90_object, 598);
}
EMIT "Stack[-1] = 0";


void func_6170(object var_130_object, object var_131_object, int var_132_int)
{
	int var_136_int;
	var_131_object->GetItemID(var_136_int);
	int var_137_int;
	@GetInvItemProperty(var_137_int, var_136_int, "Category");
	bool var_138_bool;
	var_130_object->AddItem(var_138_bool, var_131_object, var_137_int, var_132_int);
	if(!var_138_bool) { //@nz
		var_130_object->DropItems(var_131_object, var_132_int);
	} else {
		int var_141_int; int var_142_int;
		var_136_int = var_141_int;
		var_132_int = var_142_int;
		func_6139(var_141_int, var_142_int);
	}
	
}


// @pe
void func_6688(object var_173_object)
{
	@Trace("money3000 is given");
	object var_176_object;
	var_173_object = var_176_object;
	func_6151(var_176_object, 3000);
}


void func_7205(void)
{
	object var_176_object;
	@CreateDiaryEntry(var_176_object, 717, 1, 538493);
	bool var_180_bool; object var_181_object;
	var_176_object = var_181_object;
	func_7309(var_180_bool, var_181_object, 242);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6698(void)
{
	@SetVariable("resque_list", 1);
	func_7474();
}


void func_6189(object var_125_object, string var_126_string, int var_127_int)
{
	object var_129_object;
	@CreateInvItem(var_129_object);
	var_129_object->SetItemName(var_126_string);
	object var_130_object; object var_131_object; int var_132_int;
	var_125_object = var_130_object;
	var_129_object = var_131_object;
	var_127_int = var_132_int;
	func_6170(var_130_object, var_131_object, var_132_int);
}
EMIT "Stack[-1] = 0";


void func_7218(void)
{
	object var_82_object;
	@CreateDiaryEntry(var_82_object, 227, 2, 519655);
	bool var_86_bool; object var_87_object;
	var_82_object = var_87_object;
	func_7309(var_86_bool, var_87_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6707(object var_96_object)
{
	var_96_object->SetReturnValue(2000);
}


void func_6712(void)
{
	object var_67_object;
	func_7337(var_67_object);
	object var_66_object;
	var_67_object = var_66_object;
	float var_78_float;
	func_6214(var_78_float);
	var_66_object->AddMark("b3q02KapellaGotoNotkin", "pt_map_notkin", 0, 519652, var_78_float);
	func_7218();
	func_7244();
	object var_112_object;
	func_6128(var_112_object, "quest_b3_02");
	bool var_120_bool;
	func_6202(var_120_bool, "quest_b3_02", "place_grabitel1");
}
EMIT "Stack[-1] = 0";


void func_6202(bool var_116_bool, string var_117_string, string var_118_string)
{
	object var_120_object;
	@FindActor(var_120_object, var_117_string);
	if(var_120_object == null)
		var_116_bool = false;
	@Trigger(var_120_object, var_118_string);
	var_116_bool = true;
}
EMIT "Stack[-1] = 0";


void func_7231(void)
{
	object var_163_object;
	@CreateDiaryEntry(var_163_object, 233, 2, 519661);
	bool var_167_bool; object var_168_object;
	var_163_object = var_168_object;
	func_7309(var_167_bool, var_168_object, 227);
}
EMIT "Stack[-1] = 0";


void func_2115(object var_0_object, int var_72_int, object var_73_object)
{
	var_0_object = var_73_object;
	bool var_83_bool; object var_84_object;
	var_73_object = var_84_object;
	func_5829(var_83_bool, var_84_object, 70.0);
	if(!var_83_bool) { //@nz
		var_72_int = -2;
		return 8;
	}
	object var_79_object;
	@CreateDialog(var_79_object);
	int var_131_int;
	func_6268(var_131_int);
	var_79_object->SetNPCName(var_131_int);
	int var_132_int;
	func_6266(var_132_int);
	var_79_object->SetNPCDescription(var_132_int);
	string var_133_string;
	func_6270(var_133_string);
	var_79_object->SetPhoto(var_133_string);
	string var_134_string;
	func_6272(var_134_string);
	var_79_object->SetPhoto2(var_134_string);
	int var_135_int;
	func_7387(var_135_int);
	var_79_object->SetPlayerName(var_135_int);
	bool var_80_bool;
	@IsOverrideActive(var_80_bool);
	if(var_80_bool != 0) {
		var_72_int = -2;
		return 8;
	}
	@DoDialog(var_79_object);
	bool var_144_bool; object var_145_object;
	object var_146_object;
	func_6107(var_146_object);
	var_146_object = var_145_object;
	func_5916(var_144_bool, var_145_object);
	object var_239_object; object var_240_object;
	var_73_object = var_239_object;
	var_79_object = var_240_object;
	TaskCall(7);
	func_2196(var_241_object, var_242_object, var_243_string, var_244_bool, var_239_object, var_240_object);
	TaskReturn();
	bool var_82_bool;
	var_79_object->IsDialogEnd(var_82_bool);
	
	for(;;) {
		var_288_bool = !var_82_bool; //@nz
		if(var_288_bool == 0) goto Label_2185;
		@sync();
		var_79_object->IsDialogEnd(var_82_bool);
	}
	
Label_2185:
	object var_289_object;
	var_73_object = var_289_object;
	func_5898();
	@StopDialog(var_79_object);
	var_79_object->GetReturnValue(-1);
	int var_81_int = var_72_int;
}
EMIT "Stack[-4] = 0";


void func_6214(float var_74_float)
{
	float var_76_float;
	@GetGameTime(var_76_float);
	var_76_float = var_74_float;
}


void func_6219(int var_199_int)
{
	float var_201_float;
	@GetGameTime(var_201_float);
	var_199_int = 1 + (var_201_float / 24);
}


// @pe
void func_588(object var_2_object, string var_520_string)
{
	bool var_521_bool;
	func_6274(var_521_bool);
	if(!var_521_bool) //@nz
		return 0;
	if(var_520_string == var_2_object)
		return 0;
	string var_524_string; bool var_525_bool;
	var_520_string = var_524_string;
	if(var_520_string == "")
		var_525_bool = false;
	else
		var_525_bool = true;
	func_6070(var_524_string, var_525_bool);
	var_2_object = var_520_string;
	
}


void func_7244(void)
{
	object var_105_object;
	@CreateDiaryEntry(var_105_object, 228, 2, 519656);
	bool var_109_bool; object var_110_object;
	var_105_object = var_110_object;
	func_7309(var_109_bool, var_110_object, 227);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3150(object var_2_object, string var_864_string)
{
	bool var_865_bool;
	func_6274(var_865_bool);
	if(!var_865_bool) //@nz
		return 0;
	if(var_864_string == var_2_object)
		return 0;
	string var_868_string; bool var_869_bool;
	var_864_string = var_868_string;
	if(var_864_string == "")
		var_869_bool = false;
	else
		var_869_bool = true;
	func_6070(var_868_string, var_869_bool);
	var_2_object = var_864_string;
	
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_445_object, object var_446_object)
{
	var_0_object = var_446_object;
	var_3_string = false;
	if(1 != 0) {
		func_144(var_446_object, "Neutral");
		var_0_object->SetMessage(518275); //@t
		var_0_object->ClearReplies(); //@t
		bool var_461_bool;
		func_7117(var_445_object);
		if(var_461_bool != 0)
			var_0_object->AddReply(519482, 20655, 20654); //@t
		var_0_object->AddReply(518276, -1, 19385); //@t
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	bool var_473_bool;
	func_6274(var_473_bool);
	if(var_473_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6054(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_143;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_143:
		return 0;

	}
	
}


void func_5714(void)
{
	bool var_64_bool; int var_65_int; int var_66_int; bool var_67_bool;
	@WaitForAnimEnd();
	bool var_68_bool;
	func_5824(var_68_bool);
	if(!var_68_bool) //@nz
		return 12;
	int var_70_int;
	func_6249(var_70_int);
	int var_62_int;
	var_70_int = var_62_int;
	int var_63_int = 0;
	
	for(;;) {
		bool var_83_bool = false;
		if(var_63_int < 5) {
			bool var_86_bool;
			func_5824(var_86_bool);
			if(var_86_bool != 0)
				var_83_bool = true;
		}
		if(var_83_bool != 0) {
			if(!var_62_int) { //@nz
				@Sleep(3, var_64_bool);
				if(!var_64_bool) { //@nz
				} else {
			} else {
			@irand(var_65_int, var_62_int);
			@irand(var_66_int, 5);
			if(var_66_int != 0)
				var_65_int = 0;
			string var_97_string; int var_98_int;
			var_65_int = var_98_int;
			func_6242(var_97_string, var_98_int);
			@PlayAnimation("all", var_97_string);
			@WaitForAnimEnd(var_67_bool);
			var_99_bool = !var_67_bool; //@nz
			if(var_99_bool == 0) goto Label_5769;
			goto Label_5780;
			}
				Label_5769:
					bool var_90_bool;
					func_5783(var_90_bool);
					var_91_bool = !var_90_bool; //@nz
					if(var_91_bool == 0) goto Label_5775;
			}
		}
	Label_5780:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_5775:
		@ResetAAS();
		var_63_int += 1;
	}
	
}


void func_6228(int var_731_int)
{
	float var_733_float;
	@GetGameTime(var_733_float);
	int var_734_int;
	var_733_float = var_734_int;
	var_731_int = var_734_int % 24;
}


// @pe
void func_6743(void)
{
	@SetVariable("oob3Kapella1", 1);
}


// @pe
void func_1111(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_326_object, object var_327_object)
{
	var_0_object = var_327_object;
	var_1_object = var_326_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_333_bool;
		func_7057(var_1_object);
		if(var_333_bool != 0) {
			func_1249(var_327_object, "Sympathy");
			var_0_object->SetMessage(519812); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(519813, 20974, 20973); //@t
			var_0_object->AddReply(527076, 28374, 28373); //@t
			var_0_object->AddReply(519816, -1, 20976); //@t
		} else {
					bool var_367_bool;
					func_7069(var_1_object);
					if(var_367_bool == 0) goto Label_1172;
					object var_373_object; object var_374_object;
					var_373_object = var_1_object;
					var_374_object = var_0_object;
					func_6292();
					func_1249(var_327_object, "Neutral");
					var_0_object->SetMessage(519851); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527084, 28383, 28382); //@t
		}
	}
Label_1219:
	for(;;) {
		bool var_359_bool;
		func_6274(var_359_bool);
		if(var_359_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6054(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1248;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1248:
			return 0;

		}

	}
	
Label_1172:
	func_1249(var_327_object, "Neutral");
	var_0_object->SetMessage(519817); //@t
	var_0_object->ClearReplies(); //@t
	bool var_384_bool;
	func_7081(var_1_object);
	if(var_384_bool != 0)
		var_0_object->AddReply(519818, 20979, 20978); //@t
	bool var_393_bool;
	func_7093(var_1_object);
	if(var_393_bool != 0)
		var_0_object->AddReply(519830, 20991, 20990); //@t
	bool var_402_bool;
	func_7105(var_1_object);
	if(var_402_bool != 0)
		var_0_object->AddReply(520449, 21663, 21662); //@t
	var_0_object->AddReply(519850, -1, 21011); //@t
	goto Label_1219;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x45b";


void func_7257(void)
{
	object var_78_object;
	@CreateDiaryEntry(var_78_object, 532, 2, 530344);
	bool var_82_bool; object var_83_object;
	var_78_object = var_83_object;
	func_7309(var_82_bool, var_83_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6236(bool var_298_bool, int var_299_int)
{
	int var_300_int;
	func_6219(var_300_int);
	var_298_bool = var_300_int == var_299_int;
}


// @pe
void func_6749(void)
{
	func_7231();
	bool var_170_bool;
	func_6202(var_170_bool, "quest_b3_02", "completed");
}


void func_6242(string var_76_string, int var_77_int)
{
	string var_79_string = "idle";
	if(var_77_int != 0)
		var_79_string += var_77_int;
	var_79_string = var_76_string;
}


void func_7270(void)
{
	object var_157_object;
	@CreateDiaryEntry(var_157_object, 541, 2, 530353);
	bool var_161_bool; object var_162_object;
	var_157_object = var_162_object;
	func_7309(var_161_bool, var_162_object, 532);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6759(bool var_658_bool)
{
	int var_660_int;
	func_6123(var_660_int, "b8q01");
	if(var_660_int == 2)
		var_658_bool = true;
	var_658_bool = false;
}


void func_6249(int var_70_int)
{
	int var_73_int; bool var_74_bool;
	var_73_int = 0;
	
	for(;;) {
		string var_76_string; int var_77_int;
		var_73_int = var_77_int;
		func_6242(var_76_string, var_77_int);
		@HasAnimation(var_74_bool, "all", var_76_string);
		if(!var_74_bool) //@nz
			break;
		var_73_int += 1;
	}
	var_73_int = var_70_int;
}


// @pe
void func_6771(bool var_622_bool)
{
	int var_624_int;
	func_6123(var_624_int, "oob8Kapella1");
	if(var_624_int == 0) {
		var_622_bool = true;
		return 0;
	}
	var_622_bool = false;
}


void func_7283(void)
{
	object var_101_object;
	@CreateDiaryEntry(var_101_object, 533, 2, 530345);
	bool var_105_bool; object var_106_object;
	var_101_object = var_106_object;
	func_7309(var_105_bool, var_106_object, 532);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4603(object var_2_object, string var_988_string)
{
	bool var_989_bool;
	func_6274(var_989_bool);
	if(!var_989_bool) //@nz
		return 0;
	if(var_988_string == var_2_object)
		return 0;
	string var_992_string; bool var_993_bool;
	var_988_string = var_992_string;
	if(var_988_string == "")
		var_993_bool = false;
	else
		var_993_bool = true;
	func_6070(var_992_string, var_993_bool);
	var_2_object = var_988_string;
	
}


void func_6266(int var_132_int)
{
	var_132_int = 515538;
}


void func_6268(int var_131_int)
{
	var_131_int = 502863;
}


void func_6270(string var_133_string)
{
	var_133_string = "ui/NPC_Kapella.png";
}


// @pe
void func_6783(bool var_664_bool)
{
	int var_666_int;
	func_6123(var_666_int, "oob8Kapella2");
	if(var_666_int == 0) {
		var_664_bool = true;
		return 0;
	}
	var_664_bool = false;
}


void func_6272(string var_134_string)
{
	var_134_string = "ui/NPC_Kapella_b.png";
}


void func_7296(object var_75_object)
{
	object var_77_object;
	@GetDiaryRoot(var_77_object);
	if(!var_77_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_75_object = false;
	}
	var_77_object = var_75_object;
}
EMIT "Stack[-1] = 0";


void func_6274(bool var_126_bool)
{
	var_126_bool = true;
}


// @pe
void func_6276(object var_127_object)
{
	object var_131_object;
	func_7337(var_131_object);
	object var_128_object;
	var_131_object = var_128_object;
	func_7354(var_128_object, "pt_map_notkin", (float)2);
	object var_151_object;
	func_7337(var_151_object);
	var_127_object->ShowMap(var_151_object);
}


// @pe
void func_6795(bool var_887_bool)
{
	int var_889_int;
	func_6123(var_889_int, "b10q01");
	if(var_889_int == 4)
		var_887_bool = true;
	var_887_bool = false;
}


void func_7309(bool var_66_bool, object var_67_object, int var_68_int)
{
	object var_75_object;
	func_7296(var_75_object);
	object var_72_object;
	var_75_object = var_72_object;
	object var_73_object;
	var_72_object->Find(var_68_int, var_73_object);
	if(!var_73_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_68_int);
		var_66_bool = false;
	}
	var_73_object->AddChild(var_67_object);
	@SendWorldWndMessage(7);
	int var_74_int;
	var_67_object->GetCategory(var_74_int);
	@SetDiarySection(var_74_int);
	var_66_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_144(object var_2_object, string var_452_string)
{
	bool var_453_bool;
	func_6274(var_453_bool);
	if(!var_453_bool) //@nz
		return 0;
	if(var_452_string == var_2_object)
		return 0;
	string var_456_string; bool var_457_bool;
	var_452_string = var_456_string;
	if(var_452_string == "")
		var_457_bool = false;
	else
		var_457_bool = true;
	func_6070(var_456_string, var_457_bool);
	var_2_object = var_452_string;
	
}


// @pe
void func_6292(void)
{
	@SetVariable("oob1Kapella1", 1);
}


// @pe
void func_2196(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_239_object, object var_240_object)
{
	var_0_object = var_240_object;
	var_1_object = var_239_object;
	var_3_string = false;
	if(1 != 0) {
		func_2254(var_240_object, "Neutral");
		var_0_object->SetMessage(527023); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(527024, 21951, 28310); //@t
		var_0_object->AddReply(527025, 21951, 28311); //@t
		goto Label_2224;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x898";
	}
Label_2224:
	bool var_270_bool;
	func_6274(var_270_bool);
	if(var_270_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6054(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2253;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2253:
		return 0;

	}
	
}


// @pe
void func_5118(object var_2_object, string var_1069_string)
{
	bool var_1070_bool;
	func_6274(var_1070_bool);
	if(!var_1070_bool) //@nz
		return 0;
	if(var_1069_string == var_2_object)
		return 0;
	string var_1073_string; bool var_1074_bool;
	var_1069_string = var_1073_string;
	if(var_1069_string == "")
		var_1074_bool = false;
	else
		var_1074_bool = true;
	func_6070(var_1073_string, var_1074_bool);
	var_2_object = var_1069_string;
	
}


// @pe
void func_6807(bool var_893_bool)
{
	int var_895_int;
	func_6123(var_895_int, "b10q01TalkKapella");
	if(var_895_int == 1)
		var_893_bool = true;
	var_893_bool = false;
}


void func_5783(bool var_90_bool)
{
	var_90_bool = true;
}


void func_5785(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_6298(void)
{
	@SetVariable("oob1Kapella2", 1);
}


void func_3738(object var_0_object, int var_680_int, object var_681_object)
{
	var_0_object = var_681_object;
	bool var_691_bool; object var_692_object;
	var_681_object = var_692_object;
	func_5829(var_691_bool, var_692_object, 70.0);
	if(!var_691_bool) { //@nz
		var_680_int = -2;
		return 8;
	}
	object var_687_object;
	@CreateDialog(var_687_object);
	int var_695_int;
	func_6268(var_695_int);
	var_687_object->SetNPCName(var_695_int);
	int var_696_int;
	func_6266(var_696_int);
	var_687_object->SetNPCDescription(var_696_int);
	string var_697_string;
	func_6270(var_697_string);
	var_687_object->SetPhoto(var_697_string);
	string var_698_string;
	func_6272(var_698_string);
	var_687_object->SetPhoto2(var_698_string);
	int var_699_int;
	func_7387(var_699_int);
	var_687_object->SetPlayerName(var_699_int);
	bool var_688_bool;
	@IsOverrideActive(var_688_bool);
	if(var_688_bool != 0) {
		var_680_int = -2;
		return 8;
	}
	@DoDialog(var_687_object);
	bool var_701_bool; object var_702_object;
	object var_703_object;
	func_6107(var_703_object);
	var_703_object = var_702_object;
	func_5916(var_701_bool, var_702_object);
	object var_704_object; object var_705_object;
	var_681_object = var_704_object;
	var_687_object = var_705_object;
	TaskCall(13);
	func_3819(var_706_object, var_707_object, var_708_string, var_709_bool, var_704_object, var_705_object);
	TaskReturn();
	bool var_690_bool;
	var_687_object->IsDialogEnd(var_690_bool);
	
	for(;;) {
		var_815_bool = !var_690_bool; //@nz
		if(var_815_bool == 0) goto Label_3808;
		@sync();
		var_687_object->IsDialogEnd(var_690_bool);
	}
	
Label_3808:
	object var_816_object;
	var_681_object = var_816_object;
	func_5898();
	@StopDialog(var_687_object);
	var_687_object->GetReturnValue(-1);
	int var_689_int = var_680_int;
}
EMIT "Stack[-4] = 0";


void func_5790(float var_66_float, object var_67_object)
{
	cvector var_71_cvector;
	@GetPosition(var_71_cvector);
	cvector var_72_cvector;
	var_67_object->GetPosition(var_72_cvector);
	var_66_float = (var_72_cvector - var_71_cvector) | (var_72_cvector - var_71_cvector);
}


// @pe
void func_6304(void)
{
	@SetVariable("oob1Kapella3", 1);
}


// @pe
void func_6819(bool var_919_bool)
{
	int var_921_int;
	func_6123(var_921_int, "oob10Kapella1");
	if(var_921_int == 0) {
		var_919_bool = true;
		return 0;
	}
	var_919_bool = false;
}


void func_6310(void)
{
	object var_142_object;
	func_7337(var_142_object);
	object var_141_object;
	var_142_object = var_141_object;
	float var_153_float;
	func_6214(var_153_float);
	var_141_object->AddMark("b1KapellaGotoLaska", "pt_map_laska", 3, 520037, var_153_float);
	float var_160_float;
	func_6214(var_160_float);
	var_141_object->AddMark("b1KapellaGotoNotkin", "pt_map_notkin", 3, 520038, var_160_float);
}
EMIT "Stack[-1] = 0";


void func_5798(object var_180_object, string var_181_string, int var_182_int)
{
	int var_184_int;
	var_180_object->GetProperty(var_181_string, var_184_int);
	var_180_object->SetProperty(var_181_string, (var_184_int + var_182_int));
}


void func_7337(object var_63_object)
{
	object var_66_object; object var_67_object;
	@GetMainOutdoorScene(var_66_object);
	if(var_66_object == null) {
		@Trace("Can't find main outdoor scene");
		var_67_object = null;
		var_67_object = var_63_object;
	}
	var_66_object->GetMap(var_67_object);
	var_67_object = var_63_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_5805(bool var_59_bool, cvector var_60_cvector)
{
	cvector var_64_cvector;
	@GetPosition(var_64_cvector);
	cvector var_65_cvector = var_60_cvector - var_64_cvector;
	var_67_float = GetByIndex(var_65_cvector, 0);
	var_68_float = GetByIndex(var_65_cvector, 2);
	bool var_66_bool;
	@Rotate(var_67_float, var_68_float, var_66_bool);
	var_66_bool = var_59_bool;
}


// @pe
void func_6831(bool var_713_bool)
{
	int var_715_int;
	func_6123(var_715_int, "b9q03AglajaTalk");
	if(var_715_int != 0) {
		var_713_bool = true;
		return 0;
	}
	var_713_bool = false;
}


void func_5815(bool var_55_bool, object var_56_object)
{
	cvector var_58_cvector;
	var_56_object->GetPosition(var_58_cvector);
	bool var_59_bool; cvector var_60_cvector;
	var_58_cvector = var_60_cvector;
	func_5805(var_59_bool, var_60_cvector);
	var_59_bool = var_55_bool;
}


void func_7354(object var_122_object, string var_123_string, float var_124_float)
{
	object var_132_object;
	@GetMainOutdoorScene(var_132_object);
	if(var_132_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_130_cvector;
	cvector var_131_cvector;
	bool var_133_bool;
	var_132_object->GetLocator(var_123_string, var_133_bool, var_130_cvector, var_131_cvector);
	if(!var_133_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_123_string) + " doesnt exist");
	var_132_object->GetMap(var_122_object);
	if(var_122_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_143_float = GetByIndex(var_130_cvector, 0);
	var_144_float = GetByIndex(var_130_cvector, 2);
	var_122_object->SetMapParams(var_143_float, var_144_float, var_124_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_6843(bool var_762_bool)
{
	int var_764_int;
	func_6123(var_764_int, "oob9Kapella1");
	if(var_764_int == 0) {
		var_762_bool = true;
		return 0;
	}
	var_762_bool = false;
}


// @pe
void func_6335(void)
{
	@SetVariable("oob1Kapella4", 1);
}


void func_5824(bool var_52_bool)
{
	bool var_54_bool;
	@IsLoaded(var_54_bool);
	var_54_bool = var_52_bool;
}


void func_5829(bool var_83_bool, object var_84_object, float var_85_float)
{
	cvector var_96_cvector; bool var_103_bool;
	var_84_object->GetPosition(var_96_cvector);
	float var_95_float;
	var_84_object->GetEyesHeight(var_95_float);
	var_104_float = GetByIndex(var_96_cvector, 1);
	SetByIndex(var_96_cvector, 1) = (var_104_float + var_95_float);
	cvector var_97_cvector;
	@GetPosition(var_97_cvector);
	@GetEyesHeight(var_95_float);
	var_105_float = GetByIndex(var_97_cvector, 1);
	SetByIndex(var_97_cvector, 1) = (var_105_float + var_95_float);
	cvector var_98_cvector = var_96_cvector - var_97_cvector;
	var_106_float = GetByIndex(var_98_cvector, 1);
	SetByIndex(var_98_cvector, 1) = (float)0;
	var_108_float = sqrt(var_98_cvector | var_98_cvector);
	var_98_cvector /= var_108_float;
	cvector var_99_cvector = -var_98_cvector;
	cvector var_110_cvector;
	func_6113(var_110_cvector, (var_99_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_100_cvector = ((var_98_cvector * var_85_float) + (var_110_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_102_bool;
	@IsOverrideActive(var_102_bool);
	if(var_102_bool != 0)
		var_83_bool = false;
	@StopWorld();
	@CameraTransit((var_97_cvector + var_100_cvector), var_99_cvector, true);
	var_124_float = GetByIndex(var_100_cvector, 0);
	var_125_float = GetByIndex(var_100_cvector, 2);
	@Rotate(var_124_float, var_125_float);
	bool var_126_bool;
	func_6274(var_126_bool);
	if(var_126_bool != 0) {
	} else {
		@HasAnimationTrack(var_103_bool, "head");
		if(var_103_bool == 0) goto Label_5892;
		@LookAsyncCamera("head");
	}
Label_5892:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_83_bool = true;
	
}


// @pe
void func_6341(void)
{
	@SetVariable("oob2Kapella1", 1);
}


// @pe
void func_6855(bool var_785_bool)
{
	int var_787_int;
	func_6123(var_787_int, "b9q03");
	if(var_787_int == 0) {
		var_785_bool = true;
		return 0;
	}
	var_785_bool = false;
}


// @pe
void func_6347(void)
{
	@SetVariable("oob8Kapella1", 1);
}


// @pe
void func_2254(object var_2_object, string var_246_string)
{
	bool var_247_bool;
	func_6274(var_247_bool);
	if(!var_247_bool) //@nz
		return 0;
	if(var_246_string == var_2_object)
		return 0;
	string var_250_string; bool var_251_bool;
	var_246_string = var_250_string;
	if(var_246_string == "")
		var_251_bool = false;
	else
		var_251_bool = true;
	func_6070(var_250_string, var_251_bool);
	var_2_object = var_246_string;
	
}


void func_5328(object var_0_object, int var_1100_int, object var_1101_object)
{
	var_0_object = var_1101_object;
	bool var_1111_bool; object var_1112_object;
	var_1101_object = var_1112_object;
	func_5829(var_1111_bool, var_1112_object, 70.0);
	if(!var_1111_bool) { //@nz
		var_1100_int = -2;
		return 8;
	}
	object var_1107_object;
	@CreateDialog(var_1107_object);
	int var_1115_int;
	func_6268(var_1115_int);
	var_1107_object->SetNPCName(var_1115_int);
	int var_1116_int;
	func_6266(var_1116_int);
	var_1107_object->SetNPCDescription(var_1116_int);
	string var_1117_string;
	func_6270(var_1117_string);
	var_1107_object->SetPhoto(var_1117_string);
	string var_1118_string;
	func_6272(var_1118_string);
	var_1107_object->SetPhoto2(var_1118_string);
	int var_1119_int;
	func_7387(var_1119_int);
	var_1107_object->SetPlayerName(var_1119_int);
	bool var_1108_bool;
	@IsOverrideActive(var_1108_bool);
	if(var_1108_bool != 0) {
		var_1100_int = -2;
		return 8;
	}
	@DoDialog(var_1107_object);
	bool var_1121_bool; object var_1122_object;
	object var_1123_object;
	func_6107(var_1123_object);
	var_1123_object = var_1122_object;
	func_5916(var_1121_bool, var_1122_object);
	object var_1124_object; object var_1125_object;
	var_1101_object = var_1124_object;
	var_1107_object = var_1125_object;
	TaskCall(19);
	func_5409(var_1126_object, var_1127_object, var_1128_string, var_1129_bool, var_1124_object, var_1125_object);
	TaskReturn();
	bool var_1110_bool;
	var_1107_object->IsDialogEnd(var_1110_bool);
	
	for(;;) {
		var_1154_bool = !var_1110_bool; //@nz
		if(var_1154_bool == 0) goto Label_5398;
		@sync();
		var_1107_object->IsDialogEnd(var_1110_bool);
	}
	
Label_5398:
	object var_1155_object;
	var_1101_object = var_1155_object;
	func_5898();
	@StopDialog(var_1107_object);
	var_1107_object->GetReturnValue(-1);
	int var_1109_int = var_1100_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6353(void)
{
	@SetVariable("oob8Kapella2", 1);
}


// @pe
void func_6867(bool var_720_bool)
{
	int var_722_int;
	func_6123(var_722_int, "b9q03BadInit");
	if(var_722_int != 0) {
		var_720_bool = true;
		return 0;
	}
	var_720_bool = false;
}


void func_6359(void)
{
	object var_67_object;
	func_7337(var_67_object);
	object var_66_object;
	var_67_object = var_66_object;
	float var_78_float;
	func_6214(var_78_float);
	var_66_object->AddMark("b8q01KapellaGotoKlara", "pt_map_mishka", 3, 521465, var_78_float);
}
EMIT "Stack[-1] = 0";


void func_7387(int var_135_int)
{
	int var_137_int;
	@GetVariable("branch", var_137_int);
	if(var_137_int == 0) {
		var_135_int = 1;
		return 2;
	EMIT "GOTO 0x1cea";
	}
	if(var_137_int == 1) {
		var_135_int = 2;
		return 2;
	}
	var_135_int = 3;
}


// @pe
void func_6879(bool var_797_bool)
{
	int var_799_int;
	func_6123(var_799_int, "b9q03BonefiresCount");
	if(var_799_int == 4)
		var_797_bool = true;
	var_797_bool = false;
}


// @pe
void func_1249(object var_2_object, string var_341_string)
{
	bool var_342_bool;
	func_6274(var_342_bool);
	if(!var_342_bool) //@nz
		return 0;
	if(var_341_string == var_2_object)
		return 0;
	string var_345_string; bool var_346_bool;
	var_341_string = var_345_string;
	if(var_341_string == "")
		var_346_bool = false;
	else
		var_346_bool = true;
	func_6070(var_345_string, var_346_bool);
	var_2_object = var_341_string;
	
}


// @pe
void func_6375(void)
{
	@SetVariable("b10q01TalkKapella", 1);
}


// @pe
void func_3819(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_704_object, object var_705_object)
{
	var_0_object = var_705_object;
	var_1_object = var_704_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_711_bool = false;
		bool var_712_bool = false;
		bool var_713_bool;
		func_6831(var_1_object);
		if(!var_713_bool) { //@nz
			bool var_720_bool;
			func_6867(var_1_object);
			if(!var_720_bool) //@nz
				var_712_bool = true;
		}
		if(var_712_bool != 0) {
			bool var_727_bool;
			func_6903(var_727_bool, var_1_object);
			if(var_727_bool != 0)
				var_711_bool = true;
		}
		if(var_711_bool != 0) {
			func_3994(var_705_object, "Neutral");
			var_0_object->SetMessage(530291); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531185, -1, 32490); //@t
			var_0_object->AddReply(530292, -1, 31680); //@t
		} else {
					bool var_761_bool = false;
					bool var_762_bool;
					func_6843(var_1_object);
					if(var_762_bool != 0) {
						bool var_768_bool;
						func_6903(var_768_bool, var_1_object);
						if(var_768_bool != 0)
							var_761_bool = true;
					}
					if(var_761_bool == 0) goto Label_3909;
					object var_770_object; object var_771_object;
					var_770_object = var_1_object;
					var_771_object = var_0_object;
					func_6403();
					func_3994(var_705_object, "Impatience");
					var_0_object->SetMessage(530293); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531188, 32494, 32493); //@t
					var_0_object->AddReply(531193, 32496, 32498); //@t
		}
	}
Label_3964:
	for(;;) {
		bool var_753_bool;
		func_6274(var_753_bool);
		if(var_753_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6054(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_3993;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3993:
			return 0;

		}

	}
	
Label_3909:
	func_3994(var_705_object, "Neutral");
	var_0_object->SetMessage(530302); //@t
	var_0_object->ClearReplies(); //@t
	bool var_784_bool = false;
	bool var_785_bool;
	func_6855(var_1_object);
	if(var_785_bool != 0) {
		bool var_791_bool;
		func_6903(var_791_bool, var_1_object);
		if(var_791_bool != 0)
			var_784_bool = true;
	}
	if(var_784_bool != 0)
		var_0_object->AddReply(530303, 31692, 31691); //@t
	bool var_796_bool = false;
	bool var_797_bool;
	func_6879(var_1_object);
	if(var_797_bool != 0) {
		bool var_803_bool;
		func_6891(var_1_object);
		if(var_803_bool != 0)
			var_796_bool = true;
	}
	if(var_796_bool != 0)
		var_0_object->AddReply(530333, 31721, 31720); //@t
	var_0_object->AddReply(530306, -1, 31694); //@t
	goto Label_3964;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xeef";


// @pe
void func_6891(bool var_803_bool)
{
	int var_805_int;
	func_6123(var_805_int, "b9q03");
	if(var_805_int == 1)
		var_803_bool = true;
	var_803_bool = false;
}


// @pe
void func_6381(void)
{
	@SetVariable("oob10Kapella1", 1);
}


// @pe
void func_7404(object var_69_object, bool var_70_bool, int var_71_int)
{
	var_69_object->add(18);
	var_69_object->add(24);
	var_69_object->add(20);
	var_69_object->add(14);
	if(var_70_bool == false) {
		var_69_object->add(10);
		var_69_object->add(17);
		var_69_object->add(8);
	} else if(var_71_int != 1) {
		var_69_object->add(10);
	}
	
}


// @pe
void func_6387(void)
{
	@SetVariable("b1ResqueList", 1);
}


// @pe
void func_6903(bool var_727_bool, object var_728_object)
{
	object var_730_object;
	var_728_object = var_730_object;
	func_7129(var_730_object);
	bool var_729_bool;
	if(var_729_bool != 0) {
		var_727_bool = true;
		return 0;
	}
	var_727_bool = false;
}


// @pe
void func_6393(object var_206_object)
{
	@Trace("money1000 is given");
	object var_209_object;
	var_206_object = var_209_object;
	func_6151(var_209_object, 1000);
}


// @pe
void func_6913(bool var_913_bool)
{
	int var_915_int;
	func_6123(var_915_int, "b10q04GirlGotoKapella");
	if(var_915_int != 0) {
		var_913_bool = true;
		return 0;
	}
	var_913_bool = false;
}


// @pe
void func_6403(void)
{
	@SetVariable("oob9Kapella1", 1);
}


void func_6409(void)
{
	@SetVariable("b9q03", 1);
	object var_63_object;
	func_7337(var_63_object);
	object var_60_object;
	var_63_object = var_60_object;
	float var_74_float;
	func_6214(var_74_float);
	var_60_object->AddMark("b9q03KapellaGotoSpi4ka", "pt_map_spi4ka", 0, 530307, var_74_float);
	func_7257();
	func_7283();
	bool var_108_bool;
	func_6202(var_108_bool, "quest_b9_03", "init_house_spi4ka");
	bool var_114_bool;
	func_6202(var_114_bool, "quest_b9_03", "place_follower");
	bool var_117_bool;
	func_6202(var_117_bool, "quest_b9_03", "init_bonefires");
}
EMIT "Stack[-1] = 0";


void func_5898(void)
{
	bool var_291_bool;
	@CameraSwitchToNormal(true);
	bool var_293_bool;
	func_6274(var_293_bool);
	if(var_293_bool != 0) {
	} else {
		@HasAnimationTrack(var_291_bool, "head");
		if(var_291_bool == 0) goto Label_5915;
		@UnlookAsync("head");
	}
Label_5915:
	
}


// @pe
void func_6925(bool var_978_bool)
{
	int var_980_int;
	func_6123(var_980_int, "oob11Kapella1");
	if(var_980_int == 0) {
		var_978_bool = true;
		return 0;
	}
	var_978_bool = false;
}


void func_7437(int var_85_int)
{
	int var_87_int;
	@GetVariable(("vol_" + var_85_int), var_87_int);
	@SetVariable(("vol_" + var_85_int), (var_87_int | 8));
}


// @pe
void func_6937(bool var_1013_bool)
{
	int var_1015_int;
	func_6123(var_1015_int, "b11q02");
	if(var_1015_int == 0) {
		var_1013_bool = true;
		return 0;
	}
	var_1013_bool = false;
}


void func_7449(void)
{
	object var_65_object; int var_68_int;
	@CreateIntVector(var_65_object);
	object var_69_object;
	var_65_object = var_69_object;
	func_7404(var_69_object, false, -1);
	int var_66_int;
	var_65_object->size(var_66_int);
	int var_67_int = 0;
	
	while(var_67_int < var_66_int) {
		var_65_object->get(var_68_int, var_67_int);
		int var_85_int;
		var_68_int = var_85_int;
		func_7437(var_85_int);
		var_67_int += 1;
	}
	
}
EMIT "Stack[-4] = 0";


void func_5916(bool var_144_bool, object var_145_object)
{
	int var_151_int; int var_152_int;
	@GetVariable("voice_common", var_151_int);
	if(var_151_int != 0) {
		bool var_155_bool; object var_156_object;
		var_145_object = var_156_object;
		func_5974(var_155_bool, var_156_object);
		if(!var_155_bool) { //@nz
			bool var_186_bool; object var_187_object;
			var_145_object = var_187_object;
			func_6011(var_186_bool, var_187_object);
			if(!var_186_bool) { //@nz
				var_144_bool = false;
				return 4;
			}
		}
		@irand(var_152_int, 2);
		if(var_152_int != 0)
			@SetVariable("voice_common", ((var_151_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_231_bool; object var_232_object;
		var_145_object = var_232_object;
		func_6011(var_231_bool, var_232_object);
		if(!var_231_bool) { //@nz
			bool var_234_bool; object var_235_object;
			var_145_object = var_235_object;
			func_5974(var_234_bool, var_235_object);
			if(!var_234_bool) { //@nz
				var_144_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_5972;
	
Label_5972:
	var_144_bool = true;
	
}


// @pe
void func_5409(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1124_object, object var_1125_object)
{
	var_0_object = var_1125_object;
	var_1_object = var_1124_object;
	var_3_string = false;
	if(1 != 0) {
		func_5467(var_1125_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_5437;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1525";
	}
Label_5437:
	bool var_1146_bool;
	func_6274(var_1146_bool);
	if(var_1146_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6054(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_5466;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5466:
		return 0;

	}
	
}


// @pe
void func_6949(bool var_1022_bool)
{
	int var_1024_int;
	func_6123(var_1024_int, "b11q02");
	if(var_1024_int == 4)
		var_1022_bool = true;
	var_1022_bool = false;
}


// @pe
void func_6961(bool var_850_bool)
{
	int var_852_int;
	func_6123(var_852_int, "oob10Kapella2");
	if(var_852_int == 0) {
		var_850_bool = true;
		return 0;
	}
	var_850_bool = false;
}


// @pe
void func_6450(void)
{
	func_7270();
	bool var_164_bool;
	func_6202(var_164_bool, "quest_b9_03", "completed");
}


// @pe
void func_7474(void)
{
	func_7449();
}


// @pe
void func_7478(object var_69_object, object var_304_object)
{
	var_70_bool = GlobalVars[1];
	if(!var_70_bool) { //@nz
		int var_72_int; object var_73_object;
		var_69_object = var_73_object;
		TaskCall(6);
		func_2115(var_74_object, var_72_int, var_73_object);
		TaskReturn();
		var_297_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_298_bool;
	func_6236(var_298_bool, 1);
	if(var_298_bool != 0) {
		int var_302_int; object var_303_object;
		var_69_object = var_303_object;
		TaskCall(4);
		func_1030(var_304_object, var_302_int, var_303_object);
		TaskReturn();
		if(2000 == var_304_object)
			@ShowWindow("people.xml", true);
		return 0;
	}
	bool var_419_bool;
	func_6236(var_419_bool, 2);
	if(var_419_bool != 0) {
		int var_421_int; object var_422_object;
		var_69_object = var_422_object;
		TaskCall(0);
		func_0(var_423_object, var_421_int, var_422_object);
		TaskReturn();
		return 0;
	}
	bool var_483_bool;
	func_6236(var_483_bool, 3);
	if(var_483_bool != 0) {
		int var_485_int; object var_486_object;
		var_69_object = var_486_object;
		TaskCall(2);
		func_380(var_487_object, var_485_int, var_486_object);
		TaskReturn();
		return 0;
	}
	bool var_589_bool;
	func_6236(var_589_bool, 8);
	if(var_589_bool != 0) {
		int var_591_int; object var_592_object;
		var_69_object = var_592_object;
		TaskCall(8);
		func_2387(var_593_object, var_591_int, var_592_object);
		TaskReturn();
		return 0;
	}
	bool var_678_bool;
	func_6236(var_678_bool, 9);
	if(var_678_bool != 0) {
		int var_680_int; object var_681_object;
		var_69_object = var_681_object;
		TaskCall(12);
		func_3738(var_682_object, var_680_int, var_681_object);
		TaskReturn();
		return 0;
	}
	bool var_817_bool;
	func_6236(var_817_bool, 10);
	if(var_817_bool != 0) {
		int var_819_int; object var_820_object;
		var_69_object = var_820_object;
		TaskCall(10);
		func_2922(var_821_object, var_819_int, var_820_object);
		TaskReturn();
		return 0;
	}
	bool var_945_bool;
	func_6236(var_945_bool, 11);
	if(var_945_bool != 0) {
		int var_947_int; object var_948_object;
		var_69_object = var_948_object;
		TaskCall(14);
		func_4419(var_949_object, var_947_int, var_948_object);
		TaskReturn();
		return 0;
	}
	bool var_1036_bool;
	func_6236(var_1036_bool, 12);
	if(var_1036_bool != 0) {
		int var_1038_int; object var_1039_object;
		var_69_object = var_1039_object;
		TaskCall(16);
		func_4974(var_1040_object, var_1038_int, var_1039_object);
		TaskReturn();
		return 0;
	}
	int var_1100_int; object var_1101_object;
	var_69_object = var_1101_object;
	TaskCall(18);
	func_5328(var_1102_object, var_1100_int, var_1101_object);
	TaskReturn();
}


// @pe
void func_6460(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_6973(bool var_928_bool)
{
	int var_930_int;
	func_6123(var_930_int, "b10q03");
	if(var_930_int == 0) {
		var_928_bool = true;
		return 0;
	}
	var_928_bool = false;
}


// @pe
void func_6466(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_4419(object var_0_object, int var_947_int, object var_948_object)
{
	var_0_object = var_948_object;
	bool var_958_bool; object var_959_object;
	var_948_object = var_959_object;
	func_5829(var_958_bool, var_959_object, 70.0);
	if(!var_958_bool) { //@nz
		var_947_int = -2;
		return 8;
	}
	object var_954_object;
	@CreateDialog(var_954_object);
	int var_962_int;
	func_6268(var_962_int);
	var_954_object->SetNPCName(var_962_int);
	int var_963_int;
	func_6266(var_963_int);
	var_954_object->SetNPCDescription(var_963_int);
	string var_964_string;
	func_6270(var_964_string);
	var_954_object->SetPhoto(var_964_string);
	string var_965_string;
	func_6272(var_965_string);
	var_954_object->SetPhoto2(var_965_string);
	int var_966_int;
	func_7387(var_966_int);
	var_954_object->SetPlayerName(var_966_int);
	bool var_955_bool;
	@IsOverrideActive(var_955_bool);
	if(var_955_bool != 0) {
		var_947_int = -2;
		return 8;
	}
	@DoDialog(var_954_object);
	bool var_968_bool; object var_969_object;
	object var_970_object;
	func_6107(var_970_object);
	var_970_object = var_969_object;
	func_5916(var_968_bool, var_969_object);
	object var_971_object; object var_972_object;
	var_948_object = var_971_object;
	var_954_object = var_972_object;
	TaskCall(15);
	func_4500(var_973_object, var_974_object, var_975_string, var_976_bool, var_971_object, var_972_object);
	TaskReturn();
	bool var_957_bool;
	var_954_object->IsDialogEnd(var_957_bool);
	
	for(;;) {
		var_1034_bool = !var_957_bool; //@nz
		if(var_1034_bool == 0) goto Label_4489;
		@sync();
		var_954_object->IsDialogEnd(var_957_bool);
	}
	
Label_4489:
	object var_1035_object;
	var_948_object = var_1035_object;
	func_5898();
	@StopDialog(var_954_object);
	var_954_object->GetReturnValue(-1);
	int var_956_int = var_947_int;
}
EMIT "Stack[-4] = 0";


void func_6472(void)
{
	@SetVariable("b10q04KapellaGotoBlock", 1);
	object var_150_object;
	func_7337(var_150_object);
	object var_147_object;
	var_150_object = var_147_object;
	float var_155_float;
	func_6214(var_155_float);
	var_147_object->AddMark("b10q04KapellaGotoBlock", "pt_map_uprava_admin", 0, 530548, var_155_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6985(bool var_903_bool)
{
	int var_905_int;
	func_6123(var_905_int, "oob10Kapella3");
	if(var_905_int == 0) {
		var_903_bool = true;
		return 0;
	}
	var_903_bool = false;
}


void func_2387(object var_0_object, int var_591_int, object var_592_object)
{
	var_0_object = var_592_object;
	bool var_602_bool; object var_603_object;
	var_592_object = var_603_object;
	func_5829(var_602_bool, var_603_object, 70.0);
	if(!var_602_bool) { //@nz
		var_591_int = -2;
		return 8;
	}
	object var_598_object;
	@CreateDialog(var_598_object);
	int var_606_int;
	func_6268(var_606_int);
	var_598_object->SetNPCName(var_606_int);
	int var_607_int;
	func_6266(var_607_int);
	var_598_object->SetNPCDescription(var_607_int);
	string var_608_string;
	func_6270(var_608_string);
	var_598_object->SetPhoto(var_608_string);
	string var_609_string;
	func_6272(var_609_string);
	var_598_object->SetPhoto2(var_609_string);
	int var_610_int;
	func_7387(var_610_int);
	var_598_object->SetPlayerName(var_610_int);
	bool var_599_bool;
	@IsOverrideActive(var_599_bool);
	if(var_599_bool != 0) {
		var_591_int = -2;
		return 8;
	}
	@DoDialog(var_598_object);
	bool var_612_bool; object var_613_object;
	object var_614_object;
	func_6107(var_614_object);
	var_614_object = var_613_object;
	func_5916(var_612_bool, var_613_object);
	object var_615_object; object var_616_object;
	var_592_object = var_615_object;
	var_598_object = var_616_object;
	TaskCall(9);
	func_2468(var_617_object, var_618_object, var_619_string, var_620_bool, var_615_object, var_616_object);
	TaskReturn();
	bool var_601_bool;
	var_598_object->IsDialogEnd(var_601_bool);
	
	for(;;) {
		var_676_bool = !var_601_bool; //@nz
		if(var_676_bool == 0) goto Label_2457;
		@sync();
		var_598_object->IsDialogEnd(var_601_bool);
	}
	
Label_2457:
	object var_677_object;
	var_592_object = var_677_object;
	func_5898();
	@StopDialog(var_598_object);
	var_598_object->GetReturnValue(-1);
	int var_600_int = var_591_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6997(bool var_1078_bool)
{
	int var_1080_int;
	func_6123(var_1080_int, "oob12Kapella1");
	if(var_1080_int == 0) {
		var_1078_bool = true;
		return 0;
	}
	var_1078_bool = false;
}


void func_5974(bool var_155_bool, object var_156_object)
{
	string var_162_string; bool var_164_bool; int var_165_int; string var_166_string;
	var_162_string = "c";
	int var_163_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_156_object->HasProperty((var_162_string + (var_163_int + 1)), var_164_bool);
			if(!var_164_bool) { //@nz
			} else {
				var_163_int += 1;
			}
		}
		if(!var_163_int) { //@nz
			var_155_bool = false;
			return 10;
		}
		var_165_int = 0;
		if(var_163_int > 1)
			@irand(var_165_int, var_163_int);
		var_156_object->GetProperty((var_162_string + (var_165_int + 1)), var_166_string);
		bool var_178_bool; string var_179_string;
		var_166_string = var_179_string;
		func_6085(var_178_bool, var_179_string);
		var_178_bool = var_155_bool;
		return 10;

	}
}


// @pe
void func_5467(object var_2_object, string var_1131_string)
{
	bool var_1132_bool;
	func_6274(var_1132_bool);
	if(!var_1132_bool) //@nz
		return 0;
	if(var_1131_string == var_2_object)
		return 0;
	string var_1135_string; bool var_1136_bool;
	var_1131_string = var_1135_string;
	if(var_1131_string == "")
		var_1136_bool = false;
	else
		var_1136_bool = true;
	func_6070(var_1135_string, var_1136_bool);
	var_2_object = var_1131_string;
	
}


// @pe
void func_6492(object var_157_object)
{
	object var_161_object;
	func_7337(var_161_object);
	object var_158_object;
	var_161_object = var_158_object;
	func_7354(var_158_object, "pt_map_uprava_admin", (float)2);
	object var_181_object;
	func_7337(var_181_object);
	var_157_object->ShowMap(var_181_object);
}


// @pe
void func_7009(bool var_542_bool)
{
	int var_544_int;
	func_6123(var_544_int, "b3q02");
	if(var_544_int == 0) {
		var_542_bool = true;
		return 0;
	}
	var_542_bool = false;
}


void func_2922(object var_0_object, int var_819_int, object var_820_object)
{
	var_0_object = var_820_object;
	bool var_830_bool; object var_831_object;
	var_820_object = var_831_object;
	func_5829(var_830_bool, var_831_object, 70.0);
	if(!var_830_bool) { //@nz
		var_819_int = -2;
		return 8;
	}
	object var_826_object;
	@CreateDialog(var_826_object);
	int var_834_int;
	func_6268(var_834_int);
	var_826_object->SetNPCName(var_834_int);
	int var_835_int;
	func_6266(var_835_int);
	var_826_object->SetNPCDescription(var_835_int);
	string var_836_string;
	func_6270(var_836_string);
	var_826_object->SetPhoto(var_836_string);
	string var_837_string;
	func_6272(var_837_string);
	var_826_object->SetPhoto2(var_837_string);
	int var_838_int;
	func_7387(var_838_int);
	var_826_object->SetPlayerName(var_838_int);
	bool var_827_bool;
	@IsOverrideActive(var_827_bool);
	if(var_827_bool != 0) {
		var_819_int = -2;
		return 8;
	}
	@DoDialog(var_826_object);
	bool var_840_bool; object var_841_object;
	object var_842_object;
	func_6107(var_842_object);
	var_842_object = var_841_object;
	func_5916(var_840_bool, var_841_object);
	object var_843_object; object var_844_object;
	var_820_object = var_843_object;
	var_826_object = var_844_object;
	TaskCall(11);
	func_3003(var_845_object, var_846_object, var_847_string, var_848_bool, var_843_object, var_844_object);
	TaskReturn();
	bool var_829_bool;
	var_826_object->IsDialogEnd(var_829_bool);
	
	for(;;) {
		var_943_bool = !var_829_bool; //@nz
		if(var_943_bool == 0) goto Label_2992;
		@sync();
		var_826_object->IsDialogEnd(var_829_bool);
	}
	
Label_2992:
	object var_944_object;
	var_820_object = var_944_object;
	func_5898();
	@StopDialog(var_826_object);
	var_826_object->GetReturnValue(-1);
	int var_828_int = var_819_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6508(void)
{
	@SetVariable("b3KapellaVisit", 1);
}


// @pe
void func_7021(bool var_529_bool)
{
	int var_531_int;
	func_6123(var_531_int, "oob3Kapella1");
	if(var_531_int == 0) {
		var_529_bool = true;
		return 0;
	}
	var_529_bool = false;
}


void func_4974(object var_0_object, int var_1038_int, object var_1039_object)
{
	var_0_object = var_1039_object;
	bool var_1049_bool; object var_1050_object;
	var_1039_object = var_1050_object;
	func_5829(var_1049_bool, var_1050_object, 70.0);
	if(!var_1049_bool) { //@nz
		var_1038_int = -2;
		return 8;
	}
	object var_1045_object;
	@CreateDialog(var_1045_object);
	int var_1053_int;
	func_6268(var_1053_int);
	var_1045_object->SetNPCName(var_1053_int);
	int var_1054_int;
	func_6266(var_1054_int);
	var_1045_object->SetNPCDescription(var_1054_int);
	string var_1055_string;
	func_6270(var_1055_string);
	var_1045_object->SetPhoto(var_1055_string);
	string var_1056_string;
	func_6272(var_1056_string);
	var_1045_object->SetPhoto2(var_1056_string);
	int var_1057_int;
	func_7387(var_1057_int);
	var_1045_object->SetPlayerName(var_1057_int);
	bool var_1046_bool;
	@IsOverrideActive(var_1046_bool);
	if(var_1046_bool != 0) {
		var_1038_int = -2;
		return 8;
	}
	@DoDialog(var_1045_object);
	bool var_1059_bool; object var_1060_object;
	object var_1061_object;
	func_6107(var_1061_object);
	var_1061_object = var_1060_object;
	func_5916(var_1059_bool, var_1060_object);
	object var_1062_object; object var_1063_object;
	var_1039_object = var_1062_object;
	var_1045_object = var_1063_object;
	TaskCall(17);
	func_5055(var_1064_object, var_1065_object, var_1066_string, var_1067_bool, var_1062_object, var_1063_object);
	TaskReturn();
	bool var_1048_bool;
	var_1045_object->IsDialogEnd(var_1048_bool);
	
	for(;;) {
		var_1098_bool = !var_1048_bool; //@nz
		if(var_1098_bool == 0) goto Label_5044;
		@sync();
		var_1045_object->IsDialogEnd(var_1048_bool);
	}
	
Label_5044:
	object var_1099_object;
	var_1039_object = var_1099_object;
	func_5898();
	@StopDialog(var_1045_object);
	var_1045_object->GetReturnValue(-1);
	int var_1047_int = var_1038_int;
}
EMIT "Stack[-4] = 0";


void func_6514(void)
{
	object var_221_object;
	int var_222_int;
	func_6123(var_222_int, "b1BurahHome");
	if(var_222_int == 0) {
		@SetVariable("b1BurahHome", 1);
		object var_228_object;
		func_7337(var_228_object);
		var_228_object = var_221_object;
		float var_233_float;
		func_6214(var_233_float);
		var_221_object->AddMark("b1BurahFatherHome", "pt_b1q05_patrol_house", 3, 530957, var_233_float);
		var_221_object = null;
	}
}


// @pe
void func_7033(bool var_552_bool)
{
	int var_554_int;
	func_6123(var_554_int, "b3q02");
	if(var_554_int == 5)
		var_552_bool = true;
	var_552_bool = false;
}


void func_6011(bool var_186_bool, object var_187_object)
{
	bool var_195_bool; int var_196_int; string var_197_string;
	int var_199_int;
	func_6219(var_199_int);
	string var_193_string = ("d" + var_199_int) + "m";
	int var_194_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_187_object->HasProperty((var_193_string + (var_194_int + 1)), var_195_bool);
			if(!var_195_bool) { //@nz
			} else {
				var_194_int += 1;
			}
		}
		if(!var_194_int) { //@nz
			var_186_bool = false;
			return 10;
		}
		var_196_int = 0;
		if(var_194_int > 1)
			@irand(var_196_int, var_194_int);
		var_187_object->GetProperty((var_193_string + (var_196_int + 1)), var_197_string);
		bool var_218_bool; string var_219_string;
		var_197_string = var_219_string;
		func_6085(var_218_bool, var_219_string);
		var_218_bool = var_186_bool;
		return 10;

	}
}


void func_380(object var_0_object, int var_485_int, object var_486_object)
{
	var_0_object = var_486_object;
	bool var_496_bool; object var_497_object;
	var_486_object = var_497_object;
	func_5829(var_496_bool, var_497_object, 70.0);
	if(!var_496_bool) { //@nz
		var_485_int = -2;
		return 8;
	}
	object var_492_object;
	@CreateDialog(var_492_object);
	int var_500_int;
	func_6268(var_500_int);
	var_492_object->SetNPCName(var_500_int);
	int var_501_int;
	func_6266(var_501_int);
	var_492_object->SetNPCDescription(var_501_int);
	string var_502_string;
	func_6270(var_502_string);
	var_492_object->SetPhoto(var_502_string);
	string var_503_string;
	func_6272(var_503_string);
	var_492_object->SetPhoto2(var_503_string);
	int var_504_int;
	func_7387(var_504_int);
	var_492_object->SetPlayerName(var_504_int);
	bool var_493_bool;
	@IsOverrideActive(var_493_bool);
	if(var_493_bool != 0) {
		var_485_int = -2;
		return 8;
	}
	@DoDialog(var_492_object);
	bool var_506_bool; object var_507_object;
	object var_508_object;
	func_6107(var_508_object);
	var_508_object = var_507_object;
	func_5916(var_506_bool, var_507_object);
	object var_509_object; object var_510_object;
	var_486_object = var_509_object;
	var_492_object = var_510_object;
	TaskCall(3);
	func_461(var_511_object, var_512_object, var_513_string, var_514_bool, var_509_object, var_510_object);
	TaskReturn();
	bool var_495_bool;
	var_492_object->IsDialogEnd(var_495_bool);
	
	for(;;) {
		var_587_bool = !var_495_bool; //@nz
		if(var_587_bool == 0) goto Label_450;
		@sync();
		var_492_object->IsDialogEnd(var_495_bool);
	}
	
Label_450:
	object var_588_object;
	var_486_object = var_588_object;
	func_5898();
	@StopDialog(var_492_object);
	var_492_object->GetReturnValue(-1);
	int var_494_int = var_485_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_7045(bool var_558_bool)
{
	int var_560_int;
	func_6123(var_560_int, "b3q02Dead");
	if(var_560_int != 0) {
		var_558_bool = true;
		return 0;
	}
	var_558_bool = false;
}


// @pe
void func_6541(object var_235_object)
{
	object var_239_object;
	func_7337(var_239_object);
	object var_236_object;
	var_239_object = var_236_object;
	func_7354(var_236_object, "pt_b1q05_patrol_house", (float)2);
	object var_259_object;
	func_7337(var_259_object);
	var_235_object->ShowMap(var_259_object);
}


// @pe
void func_7057(bool var_333_bool)
{
	int var_335_int;
	func_6123(var_335_int, "b1q01");
	if(var_335_int == 0) {
		var_333_bool = true;
		return 0;
	}
	var_333_bool = false;
}


// @pe
void func_4500(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_971_object, object var_972_object)
{
	var_0_object = var_972_object;
	var_1_object = var_971_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_978_bool;
		func_6925(var_1_object);
		if(var_978_bool != 0) {
			object var_984_object; object var_985_object;
			var_984_object = var_1_object;
			var_985_object = var_0_object;
			func_6557();
			func_4603(var_972_object, "Neutral");
			var_0_object->SetMessage(531105); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531107, 32678, 32425); //@t
			var_0_object->AddReply(531353, 32678, 32685); //@t
		} else {
					func_4603(var_972_object, "Neutral");
					var_0_object->SetMessage(531108); //@t
					var_0_object->ClearReplies(); //@t
					bool var_1013_bool;
					func_6937(var_1_object);
					if(var_1013_bool != 0)
						var_0_object->AddReply(531109, 32429, 32427); //@t
					bool var_1022_bool;
					func_6949(var_1_object);
					if(var_1022_bool != 0)
						var_0_object->AddReply(531129, 32448, 32447); //@t
					var_0_object->AddReply(531110, -1, 32428); //@t
		}
	}
	for(;;) {
		bool var_1003_bool;
		func_6274(var_1003_bool);
		if(var_1003_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6054(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_4602;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4602:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1198";


// @pe
void func_3994(object var_2_object, string var_738_string)
{
	bool var_739_bool;
	func_6274(var_739_bool);
	if(!var_739_bool) //@nz
		return 0;
	if(var_738_string == var_2_object)
		return 0;
	string var_742_string; bool var_743_bool;
	var_738_string = var_742_string;
	if(var_738_string == "")
		var_743_bool = false;
	else
		var_743_bool = true;
	func_6070(var_742_string, var_743_bool);
	var_2_object = var_738_string;
	
}


// @pe
void func_7069(bool var_367_bool)
{
	int var_369_int;
	func_6123(var_369_int, "oob1Kapella1");
	if(var_369_int == 0) {
		var_367_bool = true;
		return 0;
	}
	var_367_bool = false;
}


// @pe
void func_6557(void)
{
	@SetVariable("oob11Kapella1", 1);
}


void func_5538(object var_0_object)
{
	bool var_52_bool;
	func_5824(var_52_bool);
	if(!var_52_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_5714();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_6563(void)
{
	@SetVariable("b11q02", 1);
	func_7166();
	func_7192();
	object var_92_object;
	func_6128(var_92_object, "quest_b11_02");
}


// @pe
void func_2468(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_615_object, object var_616_object)
{
	var_0_object = var_616_object;
	var_1_object = var_615_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_622_bool;
		func_6771(var_1_object);
		if(var_622_bool != 0) {
			object var_628_object; object var_629_object;
			var_628_object = var_1_object;
			var_629_object = var_0_object;
			func_6347();
			func_2570(var_616_object, "Sympathy");
			var_0_object->SetMessage(521388); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(521389, 25279, 22567); //@t
			var_0_object->AddReply(523995, 25286, 25285); //@t
		} else {
					func_2570(var_616_object, "Neutral");
					var_0_object->SetMessage(521390); //@t
					var_0_object->ClearReplies(); //@t
					bool var_657_bool = false;
					bool var_658_bool;
					func_6759(var_1_object);
					if(var_658_bool != 0) {
						bool var_664_bool;
						func_6783(var_1_object);
						if(var_664_bool != 0)
							var_657_bool = true;
					}
					if(var_657_bool != 0)
						var_0_object->AddReply(521391, 22570, 22569); //@t
					var_0_object->AddReply(521394, -1, 22572); //@t
		}
	}
	for(;;) {
		bool var_647_bool;
		func_6274(var_647_bool);
		if(var_647_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6054(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2569;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2569:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x9a8";


void func_6054(string var_272_string)
{
	bool var_276_bool; float var_277_float; float var_278_float;
	@lshHasAnimation(var_276_bool, var_272_string);
	if(var_276_bool != 0) {
		@lshGetAnimTimes(var_272_string, var_277_float, var_278_float);
		@lshPlayAnimation(var_277_float, var_278_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_272_string);
	}
	
}


// @pe
void func_7081(bool var_384_bool)
{
	int var_386_int;
	func_6123(var_386_int, "oob1Kapella2");
	if(var_386_int == 0) {
		var_384_bool = true;
		return 0;
	}
	var_384_bool = false;
}


void func_5552(bool var_76_bool)
{
	object var_78_object;
	@FindActor(var_78_object, "player");
	if(!var_78_object) //@nz
		var_76_bool = false;
	bool var_81_bool; object var_82_object;
	var_78_object = var_82_object;
	func_5815(var_81_bool, var_82_object);
	var_81_bool = var_76_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6579(void)
{
	func_7179();
	bool var_116_bool;
	func_6202(var_116_bool, "quest_b11_02", "completed");
}


// @pe
void func_7093(bool var_393_bool)
{
	int var_395_int;
	func_6123(var_395_int, "oob1Kapella3");
	if(var_395_int == 0) {
		var_393_bool = true;
		return 0;
	}
	var_393_bool = false;
}


void func_6070(string var_250_string, bool var_251_bool)
{
	bool var_257_bool; float var_258_float; float var_259_float;
	@lshHasAnimation(var_257_bool, var_250_string);
	if(var_257_bool != 0) {
		@lshGetAnimTimes(var_250_string, var_258_float, var_259_float);
		@lshPlayAnimation(var_258_float, var_259_float, var_251_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_250_string);
	}
	
}


// @pe
void func_3003(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_843_object, object var_844_object)
{
	var_0_object = var_844_object;
	var_1_object = var_843_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_850_bool;
		func_6961(var_1_object);
		if(var_850_bool != 0) {
			object var_856_object; object var_857_object;
			var_856_object = var_1_object;
			var_857_object = var_0_object;
			func_6589();
			object var_860_object; object var_861_object;
			var_860_object = var_1_object;
			var_861_object = var_0_object;
			func_6631();
			func_3150(var_844_object, "Neutral");
			var_0_object->SetMessage(531154); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531276, 32591, 32590); //@t
		} else {
					func_3150(var_844_object, "Neutral");
					var_0_object->SetMessage(521924); //@t
					var_0_object->ClearReplies(); //@t
					bool var_886_bool = false;
					bool var_887_bool;
					func_6795(var_1_object);
					if(var_887_bool != 0) {
						bool var_893_bool;
						func_6807(var_1_object);
						if(!var_893_bool) //@nz
							var_886_bool = true;
					}
					if(var_886_bool != 0)
						var_0_object->AddReply(521925, 23656, 23099); //@t
					bool var_903_bool;
					func_6985(var_1_object);
					if(var_903_bool != 0)
						var_0_object->AddReply(522478, 23652, 23651); //@t
					bool var_912_bool = false;
					bool var_913_bool;
					func_6913(var_1_object);
					if(var_913_bool != 0) {
						bool var_919_bool;
						func_6819(var_1_object);
						if(var_919_bool != 0)
							var_912_bool = true;
					}
					if(var_912_bool != 0)
						var_0_object->AddReply(530448, 31815, 31814); //@t
					bool var_928_bool;
					func_6973(var_1_object);
					if(var_928_bool != 0)
						var_0_object->AddReply(531159, 32468, 32467); //@t
					var_0_object->AddReply(521926, -1, 23100); //@t
					var_0_object->AddReply(531282, -1, 32597); //@t
		}
	}
	for(;;) {
		bool var_876_bool;
		func_6274(var_876_bool);
		if(var_876_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_6054(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_3149;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3149:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xbbf";


// @pe
void func_6589(void)
{
	@SetVariable("oob10Kapella2", 1);
}


// @pe
void func_5055(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_1062_object, object var_1063_object)
{
	var_0_object = var_1063_object;
	var_3_string = false;
	if(1 != 0) {
		func_5118(var_1063_object, "Neutral");
		var_0_object->SetMessage(535258); //@t
		var_0_object->ClearReplies(); //@t
		bool var_1078_bool;
		func_6997(var_1062_object);
		if(var_1078_bool != 0)
			var_0_object->AddReply(535259, 36983, 36934); //@t
		var_0_object->AddReply(535304, -1, 36982); //@t
		goto Label_5088;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x13c3";
	}
Label_5088:
	bool var_1090_bool;
	func_6274(var_1090_bool);
	if(var_1090_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6054(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_5117;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_5117:
		return 0;

	}
	
}


void func_5567(object var_0_object)
{
	var_128_float = GetByIndex(var_0_object, 0);
	var_129_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_128_float, var_129_float);
}


// @pe
void func_7105(bool var_402_bool)
{
	int var_404_int;
	func_6123(var_404_int, "oob1Kapella4");
	if(var_404_int == 0) {
		var_402_bool = true;
		return 0;
	}
	var_402_bool = false;
}


void func_6595(void)
{
	@SetVariable("b10q03", 1);
	object var_63_object;
	func_7337(var_63_object);
	object var_60_object;
	var_63_object = var_60_object;
	float var_74_float;
	func_6214(var_74_float);
	var_60_object->AddMark("b10q03KapellaGotoMishka", "pt_map_mishka", 0, 531261, var_74_float);
	func_7140();
	func_7153();
	object var_108_object;
	func_6128(var_108_object, "quest_b10_03");
}
EMIT "Stack[-1] = 0";


void func_5572(bool var_59_bool)
{
	object var_62_object;
	@FindActor(var_62_object, "player");
	if(!var_62_object) { //@nz
		var_59_bool = false;
		return 4;
	}
	float var_66_float; object var_67_object;
	func_5790(var_66_float, var_67_object);
	if(var_66_float > 90000.0) {
		var_59_bool = false;
		return 4;
	}
	bool var_63_bool;
	@CanSee(var_63_bool, var_67_object);
	var_63_bool = var_59_bool;
}
EMIT "Stack[-2] = 0";


void func_6085(bool var_178_bool, string var_179_string)
{
	bool var_181_bool;
	bool var_182_bool;
	func_6274(var_182_bool);
	if(var_182_bool != 0) {
		@lshHasSpeech(var_181_bool, var_179_string);
		if(var_181_bool != 0) {
			@lshPlaySpeech(var_179_string);
			var_178_bool = true;
		}
	}
	var_178_bool = false;
}


// @pe
void func_7117(bool var_461_bool)
{
	int var_463_int;
	func_6123(var_463_int, "oob2Kapella1");
	if(var_463_int == 0) {
		var_461_bool = true;
		return 0;
	}
	var_461_bool = false;
}


// @pe
void func_461(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_509_object, object var_510_object)
{
	var_0_object = var_510_object;
	var_1_object = var_509_object;
	var_3_string = false;
	if(1 != 0) {
		object var_516_object; object var_517_object;
		var_516_object = var_1_object;
		var_517_object = var_0_object;
		func_6508();
		func_588(var_510_object, "Neutral");
		var_0_object->SetMessage(518365); //@t
		var_0_object->ClearReplies(); //@t
		bool var_529_bool;
		func_7021(var_1_object);
		if(var_529_bool != 0)
			var_0_object->AddReply(518366, 19481, 19479); //@t
		bool var_538_bool = false;
		bool var_539_bool;
		func_7021(var_1_object);
		if(!var_539_bool) { //@nz
			bool var_542_bool;
			func_7009(var_1_object);
			if(var_542_bool != 0)
				var_538_bool = true;
		}
		if(var_538_bool != 0)
			var_0_object->AddReply(518371, 19485, 19484); //@t
		bool var_551_bool = false;
		bool var_552_bool;
		func_7033(var_1_object);
		if(var_552_bool != 0) {
			bool var_558_bool;
			func_7045(var_1_object);
			if(var_558_bool != 0)
				var_551_bool = true;
		}
		if(var_551_bool != 0)
			var_0_object->AddReply(518374, 19488, 19487); //@t
		bool var_567_bool = false;
		bool var_568_bool;
		func_7033(var_1_object);
		if(var_568_bool != 0) {
			bool var_570_bool;
			func_7045(var_1_object);
			if(!var_570_bool) //@nz
				var_567_bool = true;
		}
		if(var_567_bool != 0)
			var_0_object->AddReply(518377, 19491, 19490); //@t
		var_0_object->AddReply(518367, -1, 19480); //@t
		goto Label_558;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1d1";
	}
Label_558:
	bool var_579_bool;
	func_6274(var_579_bool);
	if(var_579_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_6054(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_587;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_587:
		return 0;

	}
	
}


void func_6100(void)
{
	bool var_54_bool;
	func_6274(var_54_bool);
	if(var_54_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_7129(bool var_729_bool)
{
	int var_731_int;
	func_6228(var_731_int);
	if(var_731_int >= 18)
		var_729_bool = true;
	var_729_bool = false;
}


void func_5594(void)
{
	float var_1159_float;
	@rand(var_1159_float, 8, 16);
	@SetTimer(10, var_1159_float);
}


void func_6107(object var_146_object)
{
	object var_148_object;
	@self(var_148_object);
	var_148_object = var_146_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6625(void)
{
	@SetVariable("oob10Kapella3", 1);
}


void func_6113(cvector var_110_cvector, cvector var_111_cvector)
{
	float var_114_float = sqrt(var_111_cvector | var_111_cvector);
	if(var_114_float < 0.000001)
		var_110_cvector = [0.0, 0.0, 0.0];
	var_110_cvector = var_111_cvector / var_114_float;
}


void func_5603(void)
{
	@KillTimer(10);
}


void func_7140(void)
{
	object var_78_object;
	@CreateDiaryEntry(var_78_object, 594, 2, 531145);
	bool var_82_bool; object var_83_object;
	var_78_object = var_83_object;
	func_7309(var_82_bool, var_83_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6631(void)
{
	@SetVariable("b10KapellaVisit", 1);
}


void func_6123(int var_335_int, string var_336_string)
{
	int var_338_int;
	@GetVariable(var_336_string, var_338_int);
	var_338_int = var_335_int;
}


// @pe
void func_6637(void)
{
	@SetVariable("oob12Kapella1", 1);
}


void func_6128(object var_92_object, string var_93_string)
{
	object var_96_object;
	@GetMainOutdoorScene(var_96_object);
	object var_97_object;
	@AddBlankActor(var_97_object, var_96_object, var_93_string, (var_93_string + ".bin"));
	var_97_object = var_92_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_7153(void)
{
	object var_101_object;
	@CreateDiaryEntry(var_101_object, 595, 2, 531146);
	bool var_105_bool; object var_106_object;
	var_101_object = var_106_object;
	func_7309(var_105_bool, var_106_object, 594);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6643(void)
{
	int var_169_int;
	func_6123(var_169_int, "b1q01");
	if(var_169_int == 1)
		func_7205();
}


void func_6139(int var_141_int, int var_142_int)
{
	object var_144_object;
	@CreateIntVector(var_144_object);
	var_144_object->add(var_141_int);
	var_144_object->add(var_142_int);
	@SendWorldWndMessage(3, var_144_object);
}
EMIT "Stack[-1] = 0";


void func_7166(void)
{
	object var_62_object;
	@CreateDiaryEntry(var_62_object, 598, 2, 531149);
	bool var_66_bool; object var_67_object;
	var_62_object = var_67_object;
	func_7309(var_66_bool, var_67_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6655(object var_122_object)
{
	@Trace("kapella beads is given");
	object var_125_object;
	var_122_object = var_125_object;
	func_6189(var_125_object, "d11q06KapellaBeads", 1);
}


