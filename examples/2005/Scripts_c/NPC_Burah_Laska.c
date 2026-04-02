// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2595();
			if(var_27_cvector == 36929) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2780();
			}
			if(var_26_bool == 36928) {
				func_162(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535253); //@t
				var_0_object->ClearReplies(); //@t
				bool var_51_bool;
				func_2959(var_1_object);
				if(var_51_bool != 0)
					var_0_object->AddReply(535254, 37026, 36929); //@t
				var_0_object->AddReply(535341, -1, 37024); //@t
				var_0_object->AddReply(535342, -1, 37025); //@t
				return 0;
			}
			if(var_26_bool == 37026) {
				func_162(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535343); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535344, 37028, 37027); //@t
				var_0_object->AddReply(535347, 37031, 37030); //@t
				return 0;
			}
			if(var_26_bool == 37031) {
				func_162(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535348); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535349, 37033, 37032); //@t
				return 0;
			}
			if(var_26_bool == 37033) {
				func_162(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535350); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535351, 37028, 37034); //@t
				var_0_object->AddReply(535352, -1, 37035); //@t
				return 0;
			}
			if(var_26_bool == 37028) {
				func_162(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535345); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535346, -1, 37029); //@t
				var_0_object->AddReply(535353, -1, 37037); //@t
				return 0;
			}
			var_3_string = true;
			bool var_105_bool;
			func_2750(var_105_bool);
			if(var_105_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb9";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2595();
			if(var_27_cvector == 19038) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2838();
				object var_88_object = var_1_object;
				func_2816(var_0_object);
			}
			if(var_27_cvector == 20803) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_2838();
				object var_118_object = var_1_object;
				func_2816(var_0_object);
			}
			if(var_27_cvector == 21611) {
				object var_122_object; object var_123_object;
				var_122_object = var_1_object;
				var_123_object = var_0_object;
				func_2838();
				object var_124_object = var_1_object;
				func_2816(var_0_object);
			}
			if(var_27_cvector == 19043) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_2838();
				object var_130_object = var_1_object;
				func_2816(var_0_object);
			}
			if(var_27_cvector == 19044) {
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_object;
				func_2892();
			}
			if(var_27_cvector == 19046) {
				object var_140_object = var_1_object;
				func_2873(var_0_object);
				object var_163_object = var_1_object;
				func_2802(var_0_object);
			}
			if(var_27_cvector == 19111) {
				object var_205_object; object var_206_object;
				var_205_object = var_1_object;
				var_206_object = var_0_object;
				func_2898();
			}
			if(var_27_cvector == 19113) {
				object var_211_object = var_1_object;
				func_2809(var_0_object);
				object var_216_object; object var_217_object;
				var_216_object = var_1_object;
				var_217_object = var_0_object;
				func_2911();
				object var_232_object; object var_233_object;
				var_232_object = var_1_object;
				var_233_object = var_0_object;
				func_2904();
			}
			if(var_27_cvector == 28400) {
				object var_239_object; object var_240_object;
				var_239_object = var_1_object;
				var_240_object = var_0_object;
				func_2758();
			}
			if(var_27_cvector == 28410) {
				object var_245_object; object var_246_object;
				var_245_object = var_1_object;
				var_246_object = var_0_object;
				func_2764();
				object var_255_object = var_1_object;
				func_2786(var_0_object);
			}
			if(var_27_cvector == 28411) {
				object var_264_object; object var_265_object;
				var_264_object = var_1_object;
				var_265_object = var_0_object;
				func_2764();
				object var_266_object = var_1_object;
				func_2786(var_0_object);
			}
			if(var_26_bool == 19030) {
				bool var_270_bool = false;
				bool var_271_bool;
				func_2971(var_1_object);
				if(var_271_bool != 0) {
					bool var_277_bool;
					func_3025(var_1_object);
					if(!var_277_bool) //@nz
						var_270_bool = true;
				}
				if(var_270_bool != 0) {
					object var_284_object; object var_285_object;
					var_284_object = var_1_object;
					var_285_object = var_0_object;
					func_2832();
					func_592(var_27_cvector, "Neutral");
					var_0_object->SetMessage(517892); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(519614, 20800, 20799); //@t
					var_0_object->AddReply(520399, 21606, 21605); //@t
					return 0;
				}
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(517901); //@t
				var_0_object->ClearReplies(); //@t
				bool var_309_bool = false;
				bool var_310_bool;
				func_2983(var_1_object);
				if(var_310_bool != 0) {
					bool var_316_bool;
					func_3025(var_1_object);
					if(!var_316_bool) //@nz
						var_309_bool = true;
				}
				if(var_309_bool != 0)
					var_0_object->AddReply(517902, 19042, 19040); //@t
				bool var_322_bool = false;
				bool var_323_bool = false;
				bool var_324_bool;
				func_2995(var_324_bool, var_1_object);
				if(var_324_bool != 0) {
					bool var_337_bool;
					func_3013(var_1_object);
					if(var_337_bool != 0)
						var_323_bool = true;
				}
				if(var_323_bool != 0) {
					bool var_343_bool;
					func_3025(var_1_object);
					if(!var_343_bool) //@nz
						var_322_bool = true;
				}
				if(var_322_bool != 0)
					var_0_object->AddReply(517906, 19045, 19044); //@t
				bool var_349_bool = false;
				bool var_350_bool;
				func_3025(var_1_object);
				if(var_350_bool != 0) {
					bool var_352_bool;
					func_3037(var_1_object);
					if(var_352_bool != 0)
						var_349_bool = true;
				}
				if(var_349_bool != 0)
					var_0_object->AddReply(517978, 20805, 19111); //@t
				bool var_361_bool = false;
				bool var_362_bool;
				func_2923(var_1_object);
				if(var_362_bool != 0) {
					bool var_368_bool;
					func_2947(var_1_object);
					if(var_368_bool != 0)
						var_361_bool = true;
				}
				if(var_361_bool != 0)
					var_0_object->AddReply(527102, 28401, 28400); //@t
				var_0_object->AddReply(517903, -1, 19041); //@t
				return 0;
			}
			if(var_26_bool == 28401) {
				var_0_object->SetMessage(527103); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527104, 28403, 28402); //@t
				return 0;
			}
			if(var_26_bool == 28403) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527105); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527106, 28405, 28404); //@t
				return 0;
			}
			if(var_26_bool == 28405) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527107); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527108, 28407, 28406); //@t
				return 0;
			}
			if(var_26_bool == 28407) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527109); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527110, 28409, 28408); //@t
				return 0;
			}
			if(var_26_bool == 28409) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527111); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527112, -1, 28410); //@t
				var_0_object->AddReply(527113, -1, 28411); //@t
				return 0;
			}
			if(var_26_bool == 20805) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(519620); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519621, 20808, 20806); //@t
				var_0_object->AddReply(520405, 20808, 21612); //@t
				var_0_object->AddReply(519622, 20808, 20807); //@t
				return 0;
			}
			if(var_26_bool == 20808) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(519623); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517980, -1, 19113); //@t
				return 0;
			}
			if(var_26_bool == 19045) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(517907); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517908, -1, 19046); //@t
				return 0;
			}
			if(var_26_bool == 19042) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(517904); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520402, 21610, 21609); //@t
				var_0_object->AddReply(517905, -1, 19043); //@t
				return 0;
			}
			if(var_26_bool == 21610) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520403); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520404, -1, 21611); //@t
				return 0;
			}
			if(var_26_bool == 21606) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520400); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520401, 20800, 21607); //@t
				return 0;
			}
			if(var_26_bool == 20800) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(519615); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517896, 19035, 19034); //@t
				var_0_object->AddReply(517893, 19032, 19031); //@t
				var_0_object->AddReply(520398, -1, 21604); //@t
				return 0;
			}
			if(var_26_bool == 19032) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(517894); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517895, -1, 19033); //@t
				return 0;
			}
			if(var_26_bool == 19035) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(517897); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517898, 19037, 19036); //@t
				var_0_object->AddReply(527070, 28367, 28366); //@t
				return 0;
			}
			if(var_26_bool == 28367) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527071); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527072, 28369, 28368); //@t
				return 0;
			}
			if(var_26_bool == 28369) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(527073); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527074, 19037, 28370); //@t
				return 0;
			}
			if(var_26_bool == 19037) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(517899); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(517900, -1, 19038); //@t
				var_0_object->AddReply(519616, 20802, 20801); //@t
				return 0;
			}
			if(var_26_bool == 20802) {
				func_592(var_27_cvector, "Neutral");
				var_0_object->SetMessage(519617); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519618, -1, 20803); //@t
				var_0_object->AddReply(519619, -1, 20804); //@t
				return 0;
			}
			var_3_string = true;
			bool var_532_bool;
			func_2750(var_532_bool);
			if(var_532_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x267";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2595();
			if(var_27_cvector == 21868) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2752();
			}
			if(var_26_bool == 21867) {
				func_1429(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520656); //@t
				var_0_object->ClearReplies(); //@t
				bool var_51_bool = false;
				bool var_52_bool;
				func_3049(var_1_object);
				if(var_52_bool != 0) {
					bool var_60_bool;
					func_2935(var_1_object);
					if(var_60_bool != 0)
						var_51_bool = true;
				}
				if(var_51_bool != 0)
					var_0_object->AddReply(520657, 21869, 21868); //@t
				var_0_object->AddReply(520664, -1, 21875); //@t
				return 0;
			}
			if(var_26_bool == 21869) {
				func_1429(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520658); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520659, 21871, 21870); //@t
				return 0;
			}
			if(var_26_bool == 21871) {
				func_1429(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520660); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520661, 21873, 21872); //@t
				return 0;
			}
			if(var_26_bool == 21873) {
				func_1429(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520662); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520663, -1, 21874); //@t
				return 0;
			}
			var_3_string = true;
			bool var_93_bool;
			func_2750(var_93_bool);
			if(var_93_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5ac";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2595();
			if(var_26_bool == 21962) {
				func_1708(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520750); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520751, 21964, 21963); //@t
				var_0_object->AddReply(520755, 21968, 21967); //@t
				return 0;
			}
			if(var_26_bool == 21968) {
				func_1708(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520756); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520757, 21964, 21969); //@t
				return 0;
			}
			if(var_26_bool == 21964) {
				func_1708(var_27_cvector, "Neutral");
				var_0_object->SetMessage(520752); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520753, -1, 21965); //@t
				var_0_object->AddReply(520754, -1, 21966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_68_bool;
			func_2750(var_68_bool);
			if(var_68_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6c3";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2595();
			if(var_26_int == 42560) {
				func_1952(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_2750(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7b7";
	
	}

}


maintask task_11
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_2020(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_2091();
			bool var_30_bool = false;
			bool var_31_bool;
			func_2339(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_2060(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_2040(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_2602(var_72_object);
					var_72_object = var_71_object;
					func_2487(var_70_bool, var_71_object);
				}
			} else {
				func_2055(var_26_int);
				func_2082();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_2273();
		func_2091();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
		{
		@StopGroup0();
		func_2091();
		func_2567("Neutral");
		func_2082();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_2082();
		else
			func_2567("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_2273();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_2330(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_3221(var_44_object);
			func_2567("Neutral");
			func_2091();
			func_2082();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_30_bool;
	func_2339(var_30_bool);
	if(!var_30_bool) goto Label_0; //@nz
}


// @pe
void func_2816(object var_89_object)
{
	object var_93_object;
	func_3154(var_93_object);
	object var_90_object;
	var_93_object = var_90_object;
	func_3171(var_90_object, "pt_map_gorbun", (float)2);
	object var_113_object;
	func_3154(var_113_object);
	var_89_object->ShowMap(var_113_object);
}


void func_3074(void)
{
	object var_145_object;
	@CreateDiaryEntry(var_145_object, 203, 2, 517943);
	bool var_149_bool; object var_150_object;
	var_145_object = var_150_object;
	func_3126(var_149_bool, var_150_object, 200);
}
EMIT "Stack[-1] = 0";


void func_2055(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


void func_2567(string var_33_string)
{
	float var_36_float; float var_37_float;
	@lshGetAnimTimes(var_33_string, var_36_float, var_37_float);
	@lshPlayAnimation(var_36_float, var_37_float, false);
}


void func_2060(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_2278(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


void func_13(object var_0_object, int var_489_int, object var_490_object)
{
	var_0_object = var_490_object;
	bool var_500_bool; object var_501_object;
	object var_502_object;
	func_2602(var_502_object);
	var_502_object = var_501_object;
	func_2429(var_500_bool, var_501_object);
	bool var_503_bool; object var_504_object;
	var_490_object = var_504_object;
	func_2344(var_503_bool, var_504_object, 70.0);
	if(!var_503_bool) { //@nz
		var_489_int = -2;
		return 8;
	}
	object var_496_object;
	@CreateDialog(var_496_object);
	int var_507_int;
	func_2744(var_507_int);
	var_496_object->SetNPCName(var_507_int);
	int var_508_int;
	func_2742(var_508_int);
	var_496_object->SetNPCDescription(var_508_int);
	string var_509_string;
	func_2746(var_509_string);
	var_496_object->SetPhoto(var_509_string);
	string var_510_string;
	func_2748(var_510_string);
	var_496_object->SetPhoto2(var_510_string);
	int var_511_int;
	func_3204(var_511_int);
	var_496_object->SetPlayerName(var_511_int);
	bool var_497_bool;
	@IsOverrideActive(var_497_bool);
	if(var_497_bool != 0) {
		var_489_int = -2;
		return 8;
	}
	@DoDialog(var_496_object);
	object var_513_object; object var_514_object;
	var_490_object = var_513_object;
	var_496_object = var_514_object;
	TaskCall(2);
	func_94(var_515_object, var_516_object, var_517_string, var_518_bool, var_513_object, var_514_object);
	TaskReturn();
	bool var_499_bool;
	var_496_object->IsDialogEnd(var_499_bool);
	
	for(;;) {
		var_552_bool = !var_499_bool; //@nz
		if(var_552_bool == 0) goto Label_83;
		@sync();
		var_496_object->IsDialogEnd(var_499_bool);
	}
	
Label_83:
	object var_553_object;
	var_490_object = var_553_object;
	func_2412();
	@StopDialog(var_496_object);
	var_496_object->GetReturnValue(-1);
	int var_498_int = var_489_int;
}
EMIT "Stack[-4] = 0";


void func_2574(string var_226_string, bool var_227_bool)
{
	float var_232_float; float var_233_float;
	@lshGetAnimTimes(var_226_string, var_232_float, var_233_float);
	@lshPlayAnimation(var_232_float, var_233_float, var_227_bool);
}


void func_3087(void)
{
	object var_225_object;
	@CreateDiaryEntry(var_225_object, 204, 2, 518079);
	bool var_229_bool; object var_230_object;
	var_225_object = var_230_object;
	func_3126(var_229_bool, var_230_object, 200);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2832(void)
{
	@SetVariable("oob1Laska1", 1);
}


void func_2320(bool var_34_bool, cvector var_35_cvector)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	bool var_41_bool;
	@Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
}


void func_2580(bool var_94_bool, string var_95_string)
{
	bool var_97_bool;
	bool var_98_bool;
	func_2750(var_98_bool);
	if(var_98_bool != 0) {
		@lshHasSpeech(var_97_bool, var_95_string);
		if(var_97_bool != 0) {
			@lshPlaySpeech(var_95_string);
			var_94_bool = true;
		}
	}
	var_94_bool = false;
}


void func_1813(object var_0_object, int var_554_int, object var_555_object)
{
	var_0_object = var_555_object;
	bool var_565_bool; object var_566_object;
	object var_567_object;
	func_2602(var_567_object);
	var_567_object = var_566_object;
	func_2429(var_565_bool, var_566_object);
	bool var_568_bool; object var_569_object;
	var_555_object = var_569_object;
	func_2344(var_568_bool, var_569_object, 70.0);
	if(!var_568_bool) { //@nz
		var_554_int = -2;
		return 8;
	}
	object var_561_object;
	@CreateDialog(var_561_object);
	int var_572_int;
	func_2744(var_572_int);
	var_561_object->SetNPCName(var_572_int);
	int var_573_int;
	func_2742(var_573_int);
	var_561_object->SetNPCDescription(var_573_int);
	string var_574_string;
	func_2746(var_574_string);
	var_561_object->SetPhoto(var_574_string);
	string var_575_string;
	func_2748(var_575_string);
	var_561_object->SetPhoto2(var_575_string);
	int var_576_int;
	func_3204(var_576_int);
	var_561_object->SetPlayerName(var_576_int);
	bool var_562_bool;
	@IsOverrideActive(var_562_bool);
	if(var_562_bool != 0) {
		var_554_int = -2;
		return 8;
	}
	@DoDialog(var_561_object);
	object var_578_object; object var_579_object;
	var_555_object = var_578_object;
	var_561_object = var_579_object;
	TaskCall(10);
	func_1894(var_580_object, var_581_object, var_582_string, var_583_bool, var_578_object, var_579_object);
	TaskReturn();
	bool var_564_bool;
	var_561_object->IsDialogEnd(var_564_bool);
	
	for(;;) {
		var_608_bool = !var_564_bool; //@nz
		if(var_608_bool == 0) goto Label_1883;
		@sync();
		var_561_object->IsDialogEnd(var_564_bool);
	}
	
Label_1883:
	object var_609_object;
	var_555_object = var_609_object;
	func_2412();
	@StopDialog(var_561_object);
	var_561_object->GetReturnValue(-1);
	int var_563_int = var_554_int;
}
EMIT "Stack[-4] = 0";


void func_2838(void)
{
	@SetVariable("b1q02", 1);
	object var_38_object;
	func_3154(var_38_object);
	object var_35_object;
	var_38_object = var_35_object;
	float var_49_float;
	func_2698(var_49_float);
	var_35_object->AddMark("b1q02LaskaGotoGorbin", "pt_map_gorbun", 0, 517938, var_49_float);
	float var_56_float;
	func_2698(var_56_float);
	var_35_object->AddMark("b1q02LaskaSelf", "pt_map_laska", 0, 517939, var_56_float);
	func_3061();
	func_3100();
}
EMIT "Stack[-1] = 0";


void func_2330(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_2320(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


void func_3100(void)
{
	object var_81_object;
	@CreateDiaryEntry(var_81_object, 201, 2, 517941);
	bool var_85_bool; object var_86_object;
	var_81_object = var_86_object;
	func_3126(var_85_bool, var_86_object, 200);
}
EMIT "Stack[-1] = 0";


void func_1569(object var_0_object, int var_49_int, object var_50_object)
{
	var_0_object = var_50_object;
	bool var_60_bool; object var_61_object;
	object var_62_object;
	func_2602(var_62_object);
	var_62_object = var_61_object;
	func_2429(var_60_bool, var_61_object);
	bool var_155_bool; object var_156_object;
	var_50_object = var_156_object;
	func_2344(var_155_bool, var_156_object, 70.0);
	if(!var_155_bool) { //@nz
		var_49_int = -2;
		return 8;
	}
	object var_56_object;
	@CreateDialog(var_56_object);
	int var_202_int;
	func_2744(var_202_int);
	var_56_object->SetNPCName(var_202_int);
	int var_203_int;
	func_2742(var_203_int);
	var_56_object->SetNPCDescription(var_203_int);
	string var_204_string;
	func_2746(var_204_string);
	var_56_object->SetPhoto(var_204_string);
	string var_205_string;
	func_2748(var_205_string);
	var_56_object->SetPhoto2(var_205_string);
	int var_206_int;
	func_3204(var_206_int);
	var_56_object->SetPlayerName(var_206_int);
	bool var_57_bool;
	@IsOverrideActive(var_57_bool);
	if(var_57_bool != 0) {
		var_49_int = -2;
		return 8;
	}
	@DoDialog(var_56_object);
	object var_215_object; object var_216_object;
	var_50_object = var_215_object;
	var_56_object = var_216_object;
	TaskCall(8);
	func_1650(var_217_object, var_218_object, var_219_string, var_220_bool, var_215_object, var_216_object);
	TaskReturn();
	bool var_59_bool;
	var_56_object->IsDialogEnd(var_59_bool);
	
	for(;;) {
		var_254_bool = !var_59_bool; //@nz
		if(var_254_bool == 0) goto Label_1639;
		@sync();
		var_56_object->IsDialogEnd(var_59_bool);
	}
	
Label_1639:
	object var_255_object;
	var_50_object = var_255_object;
	func_2412();
	@StopDialog(var_56_object);
	var_56_object->GetReturnValue(-1);
	int var_58_int = var_49_int;
}
EMIT "Stack[-4] = 0";


void func_2082(void)
{
	float var_40_float;
	@rand(var_40_float, 8, 16);
	@SetTimer(10, var_40_float);
}


void func_2595(void)
{
	bool var_29_bool;
	func_2750(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


void func_2339(bool var_26_bool)
{
	bool var_28_bool;
	@IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
}


void func_2344(bool var_155_bool, object var_156_object, float var_157_float)
{
	cvector var_168_cvector; bool var_175_bool;
	var_156_object->GetPosition(var_168_cvector);
	float var_167_float;
	var_156_object->GetEyesHeight(var_167_float);
	var_176_float = GetByIndex(var_168_cvector, 1);
	SetByIndex(var_168_cvector, 1) = (var_176_float + var_167_float);
	cvector var_169_cvector;
	@GetPosition(var_169_cvector);
	@GetEyesHeight(var_167_float);
	var_177_float = GetByIndex(var_169_cvector, 1);
	SetByIndex(var_169_cvector, 1) = (var_177_float + var_167_float);
	cvector var_170_cvector = var_168_cvector - var_169_cvector;
	var_178_float = GetByIndex(var_170_cvector, 1);
	SetByIndex(var_170_cvector, 1) = (float)0;
	var_180_float = sqrt(var_170_cvector | var_170_cvector);
	var_170_cvector /= var_180_float;
	cvector var_171_cvector = -var_170_cvector;
	cvector var_182_cvector;
	func_2608(var_182_cvector, (var_171_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_172_cvector = ((var_170_cvector * var_157_float) + (var_182_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_174_bool;
	@IsOverrideActive(var_174_bool);
	if(var_174_bool != 0)
		var_155_bool = false;
	@StopWorld();
	@CameraTransit((var_169_cvector + var_172_cvector), var_171_cvector);
	var_195_float = GetByIndex(var_172_cvector, 0);
	var_196_float = GetByIndex(var_172_cvector, 2);
	@Rotate(var_195_float, var_196_float);
	bool var_197_bool;
	func_2750(var_197_bool);
	if(var_197_bool != 0) {
	} else {
		@HasAnimationTrack(var_175_bool, "head");
		if(var_175_bool == 0) goto Label_2406;
		@LookAsyncCamera("head");
	}
Label_2406:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_155_bool = true;
	
}


void func_3113(object var_71_object)
{
	object var_73_object;
	@GetDiaryRoot(var_73_object);
	if(!var_73_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_71_object = false;
	}
	var_73_object = var_71_object;
}
EMIT "Stack[-1] = 0";


void func_2602(object var_62_object)
{
	object var_64_object;
	@self(var_64_object);
	var_64_object = var_62_object;
}
EMIT "Stack[-1] = 0";


void func_2091(void)
{
	@KillTimer(10);
}


void func_2608(cvector var_182_cvector, cvector var_183_cvector)
{
	float var_186_float = sqrt(var_183_cvector | var_183_cvector);
	if(var_186_float < 0.000001)
		var_182_cvector = [0.0, 0.0, 0.0];
	var_182_cvector = var_183_cvector / var_186_float;
}


void func_3126(bool var_62_bool, object var_63_object, int var_64_int)
{
	object var_71_object;
	func_3113(var_71_object);
	object var_68_object;
	var_71_object = var_68_object;
	object var_69_object;
	var_68_object->Find(var_64_int, var_69_object);
	if(!var_69_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_64_int);
		var_62_bool = false;
	}
	var_69_object->AddChild(var_63_object);
	@SendWorldWndMessage(7);
	int var_70_int;
	var_63_object->GetCategory(var_70_int);
	@SetDiarySection(var_70_int);
	var_62_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2873(object var_140_object)
{
	func_3074();
	int var_143_int;
	var_140_object->RemoveItemByType(var_143_int, "b1q02_blood", 1);
	bool var_154_bool;
	func_2686(var_154_bool, "quest_b1_02", "agony_cured");
	bool var_160_bool;
	func_2686(var_160_bool, "quest_b1_02", "completed");
}


// @pe
void func_2618(float var_194_float, float var_195_float, float var_196_float, float var_197_float)
{
	if(var_195_float < var_196_float) {
		var_196_float = var_194_float;
		return 0;
	}
	if(var_195_float > var_197_float) {
		var_197_float = var_194_float;
		return 0;
	}
	var_195_float = var_194_float;
}


void func_2629(int var_301_int, string var_302_string)
{
	int var_304_int;
	@GetVariable(var_302_string, var_304_int);
	var_304_int = var_301_int;
}


void func_2634(bool var_360_bool, object var_361_object, string var_362_string)
{
	int var_365_int;
	@GetInvItemByName(var_365_int, var_362_string);
	bool var_366_bool;
	var_361_object->HasItem(var_365_int, var_366_bool);
	var_366_bool = var_360_bool;
}


void func_331(object var_0_object, int var_267_int, object var_268_object)
{
	var_0_object = var_268_object;
	bool var_278_bool; object var_279_object;
	object var_280_object;
	func_2602(var_280_object);
	var_280_object = var_279_object;
	func_2429(var_278_bool, var_279_object);
	bool var_281_bool; object var_282_object;
	var_268_object = var_282_object;
	func_2344(var_281_bool, var_282_object, 70.0);
	if(!var_281_bool) { //@nz
		var_267_int = -2;
		return 8;
	}
	object var_274_object;
	@CreateDialog(var_274_object);
	int var_285_int;
	func_2744(var_285_int);
	var_274_object->SetNPCName(var_285_int);
	int var_286_int;
	func_2742(var_286_int);
	var_274_object->SetNPCDescription(var_286_int);
	string var_287_string;
	func_2746(var_287_string);
	var_274_object->SetPhoto(var_287_string);
	string var_288_string;
	func_2748(var_288_string);
	var_274_object->SetPhoto2(var_288_string);
	int var_289_int;
	func_3204(var_289_int);
	var_274_object->SetPlayerName(var_289_int);
	bool var_275_bool;
	@IsOverrideActive(var_275_bool);
	if(var_275_bool != 0) {
		var_267_int = -2;
		return 8;
	}
	@DoDialog(var_274_object);
	object var_291_object; object var_292_object;
	var_268_object = var_291_object;
	var_274_object = var_292_object;
	TaskCall(4);
	func_412(var_293_object, var_294_object, var_295_string, var_296_bool, var_291_object, var_292_object);
	TaskReturn();
	bool var_277_bool;
	var_274_object->IsDialogEnd(var_277_bool);
	
	for(;;) {
		var_414_bool = !var_277_bool; //@nz
		if(var_414_bool == 0) goto Label_401;
		@sync();
		var_274_object->IsDialogEnd(var_277_bool);
	}
	
Label_401:
	object var_415_object;
	var_268_object = var_415_object;
	func_2412();
	@StopDialog(var_274_object);
	var_274_object->GetReturnValue(-1);
	int var_276_int = var_267_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2892(void)
{
	@SetVariable("oob1Laska2", 1);
}


// @pe
void func_1357(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_442_object, object var_443_object)
{
	var_0_object = var_443_object;
	var_1_object = var_442_object;
	var_3_string = false;
	if(1 != 0) {
		func_1429(var_443_object, "Neutral");
		var_0_object->SetMessage(520656); //@t
		var_0_object->ClearReplies(); //@t
		bool var_458_bool = false;
		bool var_459_bool;
		func_3049(var_1_object);
		if(var_459_bool != 0) {
			bool var_465_bool;
			func_2935(var_1_object);
			if(var_465_bool != 0)
				var_458_bool = true;
		}
		if(var_458_bool != 0)
			var_0_object->AddReply(520657, 21869, 21868); //@t
		var_0_object->AddReply(520664, -1, 21875); //@t
		goto Label_1399;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x551";
	}
Label_1399:
	bool var_477_bool;
	func_2750(var_477_bool);
	if(var_477_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2567(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1428;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1428:
		return 0;

	}
	
}


// @pe
void func_592(object var_2_object, string var_318_string)
{
	bool var_319_bool;
	func_2750(var_319_bool);
	if(!var_319_bool) //@nz
		return 0;
	if(var_318_string == var_2_object)
		return 0;
	string var_322_string; bool var_323_bool;
	var_318_string = var_322_string;
	if(var_318_string == "")
		var_323_bool = false;
	else
		var_323_bool = true;
	func_2574(var_322_string, var_323_bool);
	var_2_object = var_318_string;
	
}


// @pe
void func_2641(bool var_165_bool, object var_166_object, float var_167_float)
{
	if(!var_166_object) { //@nz
		var_165_bool = false;
		return 0;
	}
	if(var_167_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_167_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_172_float;
		var_167_float = var_172_float;
		func_2676(var_172_float);
		bool var_176_bool; object var_177_object; float var_179_float;
		var_166_object = var_177_object;
		var_167_float = var_179_float;
		func_2298(var_176_bool, var_177_object, "reputation", var_179_float, (float)0, (float)1);
		var_165_bool = true;
		return 0;

	}
	
	var_165_bool = false;
}


void func_3154(object var_38_object)
{
	object var_41_object; object var_42_object;
	@GetMainOutdoorScene(var_41_object);
	if(var_41_object == null) {
		@Trace("Can't find main outdoor scene");
		var_42_object = null;
		var_42_object = var_38_object;
	}
	var_41_object->GetMap(var_42_object);
	var_42_object = var_38_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2898(void)
{
	@SetVariable("oob1Laska3", 1);
}


// @pe
void func_2904(void)
{
	bool var_234_bool;
	func_2686(var_234_bool, "quest_b1_02", "fail");
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_513_object, object var_514_object)
{
	var_0_object = var_514_object;
	var_3_string = false;
	if(1 != 0) {
		func_162(var_514_object, "Neutral");
		var_0_object->SetMessage(535253); //@t
		var_0_object->ClearReplies(); //@t
		bool var_529_bool;
		func_2959(var_513_object);
		if(var_529_bool != 0)
			var_0_object->AddReply(535254, 37026, 36929); //@t
		var_0_object->AddReply(535341, -1, 37024); //@t
		var_0_object->AddReply(535342, -1, 37025); //@t
		goto Label_132;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_132:
	bool var_544_bool;
	func_2750(var_544_bool);
	if(var_544_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2567(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_161;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_161:
		return 0;

	}
	
}


// @pe
void func_2911(void)
{
	int var_218_int;
	func_2629(var_218_int, "b1q02");
	if(var_218_int != 0)
		func_3087();
}


void func_3171(object var_90_object, string var_91_string, float var_92_float)
{
	object var_100_object;
	@GetMainOutdoorScene(var_100_object);
	if(var_100_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_98_cvector;
	cvector var_99_cvector;
	bool var_101_bool;
	var_100_object->GetLocator(var_91_string, var_101_bool, var_98_cvector, var_99_cvector);
	if(!var_101_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_91_string) + " doesnt exist");
	var_100_object->GetMap(var_90_object);
	if(var_90_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_111_float = GetByIndex(var_98_cvector, 0);
	var_112_float = GetByIndex(var_98_cvector, 2);
	var_90_object->SetMapParams(var_111_float, var_112_float, var_92_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_1894(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_578_object, object var_579_object)
{
	var_0_object = var_579_object;
	var_1_object = var_578_object;
	var_3_string = false;
	if(1 != 0) {
		func_1952(var_579_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_1922;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x76a";
	}
Label_1922:
	bool var_600_bool;
	func_2750(var_600_bool);
	if(var_600_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2567(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1951;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1951:
		return 0;

	}
	
}


// @pe
void func_2923(bool var_396_bool)
{
	int var_398_int;
	func_2629(var_398_int, "oob1Laska4");
	if(var_398_int == 0) {
		var_396_bool = true;
		return 0;
	}
	var_396_bool = false;
}


void func_2412(void)
{
	bool var_257_bool;
	@CameraSwitchToNormal();
	bool var_258_bool;
	func_2750(var_258_bool);
	if(var_258_bool != 0) {
	} else {
		@HasAnimationTrack(var_257_bool, "head");
		if(var_257_bool == 0) goto Label_2428;
		@UnlookAsync("head");
	}
Label_2428:
	
}


// @pe
void func_1650(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_215_object, object var_216_object)
{
	var_0_object = var_216_object;
	var_1_object = var_215_object;
	var_3_string = false;
	if(1 != 0) {
		func_1708(var_216_object, "Neutral");
		var_0_object->SetMessage(520750); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(520751, 21964, 21963); //@t
		var_0_object->AddReply(520755, 21968, 21967); //@t
		goto Label_1678;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x676";
	}
Label_1678:
	bool var_241_bool;
	func_2750(var_241_bool);
	if(var_241_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2567(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1707;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1707:
		return 0;

	}
	
}


void func_2676(float var_172_float)
{
	object var_174_object;
	@CreateFloatVector(var_174_object);
	var_174_object->add(var_172_float);
	@SendWorldWndMessage(16, var_174_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2935(bool var_465_bool)
{
	int var_467_int;
	func_2629(var_467_int, "b6q01KlaraLaska");
	if(var_467_int != 0) {
		var_465_bool = true;
		return 0;
	}
	var_465_bool = false;
}


void func_2429(bool var_60_bool, object var_61_object)
{
	int var_67_int; int var_68_int;
	@GetVariable("voice_common", var_67_int);
	if(var_67_int != 0) {
		bool var_71_bool; object var_72_object;
		var_61_object = var_72_object;
		func_2487(var_71_bool, var_72_object);
		if(!var_71_bool) { //@nz
			bool var_102_bool; object var_103_object;
			var_61_object = var_103_object;
			func_2524(var_102_bool, var_103_object);
			if(!var_102_bool) { //@nz
				var_60_bool = false;
				return 4;
			}
		}
		@irand(var_68_int, 2);
		if(var_68_int != 0)
			@SetVariable("voice_common", ((var_67_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_147_bool; object var_148_object;
		var_61_object = var_148_object;
		func_2524(var_147_bool, var_148_object);
		if(!var_147_bool) { //@nz
			bool var_150_bool; object var_151_object;
			var_61_object = var_151_object;
			func_2487(var_150_bool, var_151_object);
			if(!var_150_bool) { //@nz
				var_60_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2485;
	
Label_2485:
	var_60_bool = true;
	
}


void func_2686(bool var_154_bool, string var_155_string, string var_156_string)
{
	object var_158_object;
	@FindActor(var_158_object, var_155_string);
	if(var_158_object == null)
		var_154_bool = false;
	@Trigger(var_158_object, var_156_string);
	var_154_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2947(bool var_402_bool)
{
	int var_404_int;
	func_2629(var_404_int, "b1q05");
	if(var_404_int == 1000)
		var_402_bool = true;
	var_402_bool = false;
}


void func_3204(int var_206_int)
{
	int var_208_int;
	@GetVariable("branch", var_208_int);
	if(var_208_int == 0) {
		var_206_int = 1;
		return 2;
	EMIT "GOTO 0xc93";
	}
	if(var_208_int == 1) {
		var_206_int = 2;
		return 2;
	}
	var_206_int = 3;
}


void func_2698(float var_49_float)
{
	float var_51_float;
	@GetGameTime(var_51_float);
	var_51_float = var_49_float;
}


void func_2703(int var_115_int)
{
	float var_117_float;
	@GetGameTime(var_117_float);
	var_115_int = 1 + (var_117_float / 24);
}


// @pe
void func_2959(bool var_529_bool)
{
	int var_531_int;
	func_2629(var_531_int, "oob12Laska1");
	if(var_531_int == 0) {
		var_529_bool = true;
		return 0;
	}
	var_529_bool = false;
}


void func_3221(object var_44_object)
{
	int var_46_int;
	@GetVariable("mt_laska", var_46_int);
	if(!var_46_int) { //@nz
		int var_49_int; object var_50_object;
		var_44_object = var_50_object;
		TaskCall(7);
		func_1569(var_51_object, var_49_int, var_50_object);
		TaskReturn();
		@SetVariable("mt_laska", 1);
	}
	bool var_264_bool;
	func_2712(var_264_bool, 1);
	if(var_264_bool != 0) {
		int var_267_int; object var_268_object;
		var_44_object = var_268_object;
		TaskCall(3);
		func_331(var_269_object, var_267_int, var_268_object);
		TaskReturn();
		return 2;
	}
	bool var_416_bool;
	func_2712(var_416_bool, 6);
	if(var_416_bool != 0) {
		int var_418_int; object var_419_object;
		var_44_object = var_419_object;
		TaskCall(5);
		func_1276(var_420_object, var_418_int, var_419_object);
		TaskReturn();
		return 2;
	}
	bool var_487_bool;
	func_2712(var_487_bool, 12);
	if(var_487_bool != 0) {
		int var_489_int; object var_490_object;
		var_44_object = var_490_object;
		TaskCall(1);
		func_13(var_491_object, var_489_int, var_490_object);
		TaskReturn();
		return 2;
	}
	int var_554_int; object var_555_object;
	var_44_object = var_555_object;
	TaskCall(9);
	func_1813(var_556_object, var_554_int, var_555_object);
	TaskReturn();
}


// @pe
void func_1429(object var_2_object, string var_449_string)
{
	bool var_450_bool;
	func_2750(var_450_bool);
	if(!var_450_bool) //@nz
		return 0;
	if(var_449_string == var_2_object)
		return 0;
	string var_453_string; bool var_454_bool;
	var_449_string = var_453_string;
	if(var_449_string == "")
		var_454_bool = false;
	else
		var_454_bool = true;
	func_2574(var_453_string, var_454_bool);
	var_2_object = var_449_string;
	
}


// @pe
void func_2712(bool var_264_bool, int var_265_int)
{
	int var_266_int;
	func_2703(var_266_int);
	var_264_bool = var_266_int == var_265_int;
}


void func_2202(void)
{
	bool var_52_bool; int var_53_int; int var_54_int; bool var_55_bool;
	@WaitForAnimEnd();
	bool var_56_bool;
	func_2339(var_56_bool);
	if(!var_56_bool) //@nz
		return 12;
	int var_58_int;
	func_2725(var_58_int);
	int var_50_int;
	var_58_int = var_50_int;
	int var_51_int = 0;
	
	for(;;) {
		bool var_71_bool = false;
		if(var_51_int < 5) {
			bool var_74_bool;
			func_2339(var_74_bool);
			if(var_74_bool != 0)
				var_71_bool = true;
		}
		if(var_71_bool != 0) {
			if(!var_50_int) { //@nz
				@Sleep(3, var_52_bool);
				if(!var_52_bool) { //@nz
				} else {
			} else {
			@irand(var_53_int, var_50_int);
			@irand(var_54_int, 5);
			if(var_54_int != 0)
				var_53_int = 0;
			string var_85_string; int var_86_int;
			var_53_int = var_86_int;
			func_2718(var_85_string, var_86_int);
			@PlayAnimation("all", var_85_string);
			@WaitForAnimEnd(var_55_bool);
			var_87_bool = !var_55_bool; //@nz
			if(var_87_bool == 0) goto Label_2257;
			goto Label_2268;
			}
				Label_2257:
					bool var_78_bool;
					func_2271(var_78_bool);
					var_79_bool = !var_78_bool; //@nz
					if(var_79_bool == 0) goto Label_2263;
			}
		}
	Label_2268:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2263:
		@ResetAAS();
		var_51_int += 1;
	}
	
}


// @pe
void func_2971(bool var_299_bool)
{
	int var_301_int;
	func_2629(var_301_int, "oob1Laska1");
	if(var_301_int == 0) {
		var_299_bool = true;
		return 0;
	}
	var_299_bool = false;
}


// @pe
void func_412(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_291_object, object var_292_object)
{
	var_0_object = var_292_object;
	var_1_object = var_291_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_298_bool = false;
		bool var_299_bool;
		func_2971(var_1_object);
		if(var_299_bool != 0) {
			bool var_307_bool;
			func_3025(var_1_object);
			if(!var_307_bool) //@nz
				var_298_bool = true;
		}
		if(var_298_bool != 0) {
			object var_314_object; object var_315_object;
			var_314_object = var_1_object;
			var_315_object = var_0_object;
			func_2832();
			func_592(var_292_object, "Neutral");
			var_0_object->SetMessage(517892); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(519614, 20800, 20799); //@t
			var_0_object->AddReply(520399, 21606, 21605); //@t
		} else {
					func_592(var_292_object, "Neutral");
					var_0_object->SetMessage(517901); //@t
					var_0_object->ClearReplies(); //@t
					bool var_343_bool = false;
					bool var_344_bool;
					func_2983(var_1_object);
					if(var_344_bool != 0) {
						bool var_350_bool;
						func_3025(var_1_object);
						if(!var_350_bool) //@nz
							var_343_bool = true;
					}
					if(var_343_bool != 0)
						var_0_object->AddReply(517902, 19042, 19040); //@t
					bool var_356_bool = false;
					bool var_357_bool = false;
					bool var_358_bool;
					func_2995(var_358_bool, var_1_object);
					if(var_358_bool != 0) {
						bool var_371_bool;
						func_3013(var_1_object);
						if(var_371_bool != 0)
							var_357_bool = true;
					}
					if(var_357_bool != 0) {
						bool var_377_bool;
						func_3025(var_1_object);
						if(!var_377_bool) //@nz
							var_356_bool = true;
					}
					if(var_356_bool != 0)
						var_0_object->AddReply(517906, 19045, 19044); //@t
					bool var_383_bool = false;
					bool var_384_bool;
					func_3025(var_1_object);
					if(var_384_bool != 0) {
						bool var_386_bool;
						func_3037(var_1_object);
						if(var_386_bool != 0)
							var_383_bool = true;
					}
					if(var_383_bool != 0)
						var_0_object->AddReply(517978, 20805, 19111); //@t
					bool var_395_bool = false;
					bool var_396_bool;
					func_2923(var_1_object);
					if(var_396_bool != 0) {
						bool var_402_bool;
						func_2947(var_1_object);
						if(var_402_bool != 0)
							var_395_bool = true;
					}
					if(var_395_bool != 0)
						var_0_object->AddReply(527102, 28401, 28400); //@t
					var_0_object->AddReply(517903, -1, 19041); //@t
		}
	}
	for(;;) {
		bool var_333_bool;
		func_2750(var_333_bool);
		if(var_333_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2567(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_591;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_591:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1a0";


void func_2718(string var_64_string, int var_65_int)
{
	string var_67_string = "idle";
	if(var_65_int != 0)
		var_67_string += var_65_int;
	var_67_string = var_64_string;
}


// @pe
void func_1952(object var_2_object, string var_585_string)
{
	bool var_586_bool;
	func_2750(var_586_bool);
	if(!var_586_bool) //@nz
		return 0;
	if(var_585_string == var_2_object)
		return 0;
	string var_589_string; bool var_590_bool;
	var_585_string = var_589_string;
	if(var_585_string == "")
		var_590_bool = false;
	else
		var_590_bool = true;
	func_2574(var_589_string, var_590_bool);
	var_2_object = var_585_string;
	
}


// @pe
void func_162(object var_2_object, string var_520_string)
{
	bool var_521_bool;
	func_2750(var_521_bool);
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
	func_2574(var_524_string, var_525_bool);
	var_2_object = var_520_string;
	
}


void func_2725(int var_58_int)
{
	int var_61_int; bool var_62_bool;
	var_61_int = 0;
	
	for(;;) {
		string var_64_string; int var_65_int;
		var_61_int = var_65_int;
		func_2718(var_64_string, var_65_int);
		@HasAnimation(var_62_bool, "all", var_64_string);
		if(!var_62_bool) //@nz
			break;
		var_61_int += 1;
	}
	var_61_int = var_58_int;
}


// @pe
void func_2983(bool var_344_bool)
{
	int var_346_int;
	func_2629(var_346_int, "b1q02");
	if(var_346_int == 0) {
		var_344_bool = true;
		return 0;
	}
	var_344_bool = false;
}


// @pe
void func_1708(object var_2_object, string var_222_string)
{
	bool var_223_bool;
	func_2750(var_223_bool);
	if(!var_223_bool) //@nz
		return 0;
	if(var_222_string == var_2_object)
		return 0;
	string var_226_string; bool var_227_bool;
	var_222_string = var_226_string;
	if(var_222_string == "")
		var_227_bool = false;
	else
		var_227_bool = true;
	func_2574(var_226_string, var_227_bool);
	var_2_object = var_222_string;
	
}


// @pe
void func_2995(bool var_358_bool, object var_359_object)
{
	object var_361_object;
	var_359_object = var_361_object;
	bool var_360_bool;
	func_2634(var_360_bool, var_361_object, "b1q02_blood");
	if(var_360_bool != 0) {
		int var_367_int;
		func_2629(var_367_int, "b1q02");
		if(var_367_int == 2) {
			var_358_bool = true;
			return 0;
		}
	}
	var_358_bool = false;
}


void func_2742(int var_203_int)
{
	var_203_int = 515542;
}


void func_2487(bool var_71_bool, object var_72_object)
{
	string var_78_string; bool var_80_bool; int var_81_int; string var_82_string;
	var_78_string = "c";
	int var_79_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_72_object->HasProperty((var_78_string + (var_79_int + 1)), var_80_bool);
			if(!var_80_bool) { //@nz
			} else {
				var_79_int += 1;
			}
		}
		if(!var_79_int) { //@nz
			var_71_bool = false;
			return 10;
		}
		var_81_int = 0;
		if(var_79_int > 1)
			@irand(var_81_int, var_79_int);
		var_72_object->GetProperty((var_78_string + (var_81_int + 1)), var_82_string);
		bool var_94_bool; string var_95_string;
		var_82_string = var_95_string;
		func_2580(var_94_bool, var_95_string);
		var_94_bool = var_71_bool;
		return 10;

	}
}


void func_2744(int var_202_int)
{
	var_202_int = 502867;
}


void func_2746(string var_204_string)
{
	var_204_string = "ui/NPC_Laska.png";
}


void func_2748(string var_205_string)
{
	var_205_string = "ui/NPC_Laska_b.png";
}


void func_2750(bool var_98_bool)
{
	var_98_bool = true;
}


// @pe
void func_2752(void)
{
	@SetVariable("oob6Laska1", 1);
}


// @pe
void func_3013(bool var_371_bool)
{
	int var_373_int;
	func_2629(var_373_int, "oob1Laska2");
	if(var_373_int == 0) {
		var_371_bool = true;
		return 0;
	}
	var_371_bool = false;
}


// @pe
void func_2758(void)
{
	@SetVariable("oob1Laska4", 1);
}


void func_2764(void)
{
	object var_249_object;
	func_3154(var_249_object);
	object var_248_object;
	var_249_object = var_248_object;
	float var_254_float;
	func_2698(var_254_float);
	var_248_object->AddMark("b1LaskaGotoMishka", "pt_map_mishka", 3, 530602, var_254_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3025(bool var_307_bool)
{
	int var_309_int;
	func_2629(var_309_int, "b1q02_dead");
	if(var_309_int != 0) {
		var_307_bool = true;
		return 0;
	}
	var_307_bool = false;
}


// @pe
void func_2780(void)
{
	@SetVariable("oob12Laska1", 1);
}


void func_2524(bool var_102_bool, object var_103_object)
{
	bool var_111_bool; int var_112_int; string var_113_string;
	int var_115_int;
	func_2703(var_115_int);
	string var_109_string = ("d" + var_115_int) + "m";
	int var_110_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_103_object->HasProperty((var_109_string + (var_110_int + 1)), var_111_bool);
			if(!var_111_bool) { //@nz
			} else {
				var_110_int += 1;
			}
		}
		if(!var_110_int) { //@nz
			var_102_bool = false;
			return 10;
		}
		var_112_int = 0;
		if(var_110_int > 1)
			@irand(var_112_int, var_110_int);
		var_103_object->GetProperty((var_109_string + (var_112_int + 1)), var_113_string);
		bool var_134_bool; string var_135_string;
		var_113_string = var_135_string;
		func_2580(var_134_bool, var_135_string);
		var_134_bool = var_102_bool;
		return 10;

	}
}


// @pe
void func_3037(bool var_386_bool)
{
	int var_388_int;
	func_2629(var_388_int, "oob1Laska3");
	if(var_388_int == 0) {
		var_386_bool = true;
		return 0;
	}
	var_386_bool = false;
}


void func_2271(bool var_78_bool)
{
	var_78_bool = true;
}


void func_2273(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2786(object var_256_object)
{
	object var_260_object;
	func_3154(var_260_object);
	object var_257_object;
	var_260_object = var_257_object;
	func_3171(var_257_object, "pt_map_mishka", (float)2);
	object var_261_object;
	func_3154(var_261_object);
	var_256_object->ShowMap(var_261_object);
}


void func_2020(object var_0_object)
{
	bool var_26_bool;
	func_2339(var_26_bool);
	if(!var_26_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2148();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2202();
	}
}
EMIT "Return(); Pop(0)";


void func_2278(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


// @pe
void func_3049(bool var_459_bool)
{
	int var_461_int;
	func_2629(var_461_int, "oob6Laska1");
	if(var_461_int == 0) {
		var_459_bool = true;
		return 0;
	}
	var_459_bool = false;
}


void func_2286(bool var_184_bool, object var_185_object, string var_186_string)
{
	var_191_bool = IsFuncExist(var_185_object, "HasProperty", 2);
	if(!var_191_bool) { //@nz
		var_184_bool = false;
		return 2;
	}
	bool var_188_bool;
	var_185_object->HasProperty(var_186_string, var_188_bool);
	var_188_bool = var_184_bool;
}


// @pe
void func_2802(object var_163_object)
{
	object var_166_object;
	var_163_object = var_166_object;
	bool var_165_bool;
	func_2641(var_165_bool, var_166_object, 0.3);
}


void func_3061(void)
{
	object var_58_object;
	@CreateDiaryEntry(var_58_object, 200, 2, 517940);
	bool var_62_bool; object var_63_object;
	var_58_object = var_63_object;
	func_3126(var_62_bool, var_63_object, -1);
}
EMIT "Stack[-1] = 0";


void func_2040(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_2330(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2809(object var_211_object)
{
	object var_214_object;
	var_211_object = var_214_object;
	bool var_213_bool;
	func_2641(var_213_bool, var_214_object, -0.1);
}


void func_2298(bool var_176_bool, object var_177_object, string var_178_string, float var_179_float, float var_180_float, float var_181_float)
{
	object var_185_object;
	var_177_object = var_185_object;
	string var_186_string;
	var_178_string = var_186_string;
	bool var_184_bool;
	func_2286(var_184_bool, var_185_object, var_186_string);
	if(!var_184_bool) //@nz
		var_176_bool = false;
	float var_183_float;
	var_177_object->GetProperty(var_178_string, var_183_float);
	float var_194_float; float var_196_float; float var_197_float;
	var_180_float = var_196_float;
	var_181_float = var_197_float;
	func_2618(var_194_float, (var_183_float + var_179_float), var_196_float, var_197_float);
	var_177_object->SetProperty(var_178_string, var_194_float);
	var_176_bool = true;
}


void func_1276(object var_0_object, int var_418_int, object var_419_object)
{
	var_0_object = var_419_object;
	bool var_429_bool; object var_430_object;
	object var_431_object;
	func_2602(var_431_object);
	var_431_object = var_430_object;
	func_2429(var_429_bool, var_430_object);
	bool var_432_bool; object var_433_object;
	var_419_object = var_433_object;
	func_2344(var_432_bool, var_433_object, 70.0);
	if(!var_432_bool) { //@nz
		var_418_int = -2;
		return 8;
	}
	object var_425_object;
	@CreateDialog(var_425_object);
	int var_436_int;
	func_2744(var_436_int);
	var_425_object->SetNPCName(var_436_int);
	int var_437_int;
	func_2742(var_437_int);
	var_425_object->SetNPCDescription(var_437_int);
	string var_438_string;
	func_2746(var_438_string);
	var_425_object->SetPhoto(var_438_string);
	string var_439_string;
	func_2748(var_439_string);
	var_425_object->SetPhoto2(var_439_string);
	int var_440_int;
	func_3204(var_440_int);
	var_425_object->SetPlayerName(var_440_int);
	bool var_426_bool;
	@IsOverrideActive(var_426_bool);
	if(var_426_bool != 0) {
		var_418_int = -2;
		return 8;
	}
	@DoDialog(var_425_object);
	object var_442_object; object var_443_object;
	var_419_object = var_442_object;
	var_425_object = var_443_object;
	TaskCall(6);
	func_1357(var_444_object, var_445_object, var_446_string, var_447_bool, var_442_object, var_443_object);
	TaskReturn();
	bool var_428_bool;
	var_425_object->IsDialogEnd(var_428_bool);
	
	for(;;) {
		var_485_bool = !var_428_bool; //@nz
		if(var_485_bool == 0) goto Label_1346;
		@sync();
		var_425_object->IsDialogEnd(var_428_bool);
	}
	
Label_1346:
	object var_486_object;
	var_419_object = var_486_object;
	func_2412();
	@StopDialog(var_425_object);
	var_425_object->GetReturnValue(-1);
	int var_427_int = var_418_int;
}
EMIT "Stack[-4] = 0";


