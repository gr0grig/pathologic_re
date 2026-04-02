// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool)
	{
		func_5888();
		bool var_26_bool;
		func_4755(var_26_bool);
		if(!var_26_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_4820("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool)
	{
		object var_26_object;
		var_25_bool = var_26_object;
		func_5892(var_26_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool)
	{
		object var_27_object;
		var_25_bool = var_27_object;
		bool var_26_bool;
		func_4743(var_26_bool, var_27_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool)
	{
		if(1 != 0) {
			func_4838();
			if(var_26_bool == 14281) {
				object var_31_object; object var_32_object;
				var_31_object = var_1_object;
				var_32_object = var_0_object;
				func_4920();
			}
			if(var_26_bool == 14282) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_4920();
			}
			if(var_26_bool == 14283) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_4920();
			}
			if(var_26_bool == 14558) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_4926();
			}
			if(var_26_bool == 14343) {
				object var_51_object; object var_52_object;
				var_51_object = var_1_object;
				var_52_object = var_0_object;
				func_4932();
			}
			if(var_26_bool == 14363) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_5043();
			}
			if(var_26_bool == 14391) {
				object var_159_object = var_1_object;
				func_4996(var_0_object);
				object var_188_object; object var_189_object;
				var_188_object = var_1_object;
				var_189_object = var_0_object;
				func_5037();
				object var_192_object; object var_193_object;
				var_192_object = var_1_object;
				var_193_object = var_0_object;
				func_4914();
			}
			if(var_26_bool == 14394) {
				object var_198_object = var_1_object;
				func_4996(var_0_object);
				object var_200_object; object var_201_object;
				var_200_object = var_1_object;
				var_201_object = var_0_object;
				func_5037();
				object var_202_object; object var_203_object;
				var_202_object = var_1_object;
				var_203_object = var_0_object;
				func_4914();
			}
			if(var_26_bool == 14389) {
				object var_206_object = var_1_object;
				func_4996(var_0_object);
				object var_208_object; object var_209_object;
				var_208_object = var_1_object;
				var_209_object = var_0_object;
				func_5037();
				object var_210_object; object var_211_object;
				var_210_object = var_1_object;
				var_211_object = var_0_object;
				func_4914();
			}
			if(var_26_bool == 14344) {
				object var_214_object; object var_215_object;
				var_214_object = var_1_object;
				var_215_object = var_0_object;
				func_5031();
			}
			if(var_26_bool == 14242) {
				object var_220_object; object var_221_object;
				var_220_object = var_1_object;
				var_221_object = var_0_object;
				func_4990();
			}
			if(var_26_bool == 14623) {
				object var_226_object; object var_227_object;
				var_226_object = var_1_object;
				var_227_object = var_0_object;
				func_5094();
			}
			if(var_25_string == 13340) {
				bool var_232_bool = false;
				bool var_233_bool;
				func_5286(var_1_object);
				if(var_233_bool != 0) {
					bool var_241_bool;
					func_5276(var_241_bool, var_1_object);
					if(var_241_bool != 0)
						var_232_bool = true;
				}
				if(var_232_bool != 0) {
					func_331(var_26_bool, "Neutral");
					var_0_object->SetMessage(12185); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12186, 14254, 13341); //@t
					var_0_object->AddReply(13037, 14245, 14244); //@t
					return 0;
				}
				bool var_267_bool = false;
				bool var_268_bool;
				func_5298(var_1_object);
				if(var_268_bool != 0) {
					bool var_274_bool;
					func_5276(var_274_bool, var_1_object);
					if(var_274_bool != 0)
						var_267_bool = true;
				}
				if(var_267_bool != 0) {
					func_331(var_26_bool, "Neutral");
					var_0_object->SetMessage(13033); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13034, 14260, 14241); //@t
					return 0;
				}
				bool var_281_bool;
				func_5310(var_1_object);
				if(var_281_bool != 0) {
					func_331(var_26_bool, "Neutral");
					var_0_object->SetMessage(13074); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13076, 14287, 14286); //@t
					var_0_object->AddReply(13117, 14336, 14335); //@t
					return 0;
				}
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13031); //@t
				var_0_object->ClearReplies(); //@t
				bool var_297_bool;
				func_5401(var_1_object);
				if(var_297_bool != 0)
					var_0_object->AddReply(13141, 14362, 14360); //@t
				bool var_306_bool = false;
				bool var_307_bool;
				func_5358(var_307_bool, var_1_object);
				if(var_307_bool != 0) {
					bool var_324_bool;
					func_5389(var_1_object);
					if(var_324_bool != 0)
						var_306_bool = true;
				}
				if(var_306_bool != 0)
					var_0_object->AddReply(13075, 14369, 14285); //@t
				bool var_333_bool = false;
				bool var_334_bool;
				func_5334(var_1_object);
				if(var_334_bool != 0) {
					bool var_340_bool;
					func_5346(var_1_object);
					if(var_340_bool != 0)
						var_333_bool = true;
				}
				if(var_333_bool != 0)
					var_0_object->AddReply(13125, 14345, 14344); //@t
				bool var_349_bool;
				func_5322(var_1_object);
				if(var_349_bool != 0)
					var_0_object->AddReply(13035, 14243, 14242); //@t
				bool var_358_bool;
				func_5276(var_358_bool, var_1_object);
				if(var_358_bool != 0)
					var_0_object->AddReply(13142, 14364, 14361); //@t
				bool var_363_bool;
				func_5413(var_1_object);
				if(var_363_bool != 0)
					var_0_object->AddReply(13377, 14610, 14609); //@t
				var_0_object->AddReply(13032, -1, 14239); //@t
				return 0;
			}
			if(var_25_string == 14610) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13378); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13379, 14612, 14611); //@t
				return 0;
			}
			if(var_25_string == 14612) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13380); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13381, 14619, 14613); //@t
				var_0_object->AddReply(13382, 14616, 14614); //@t
				var_0_object->AddReply(13383, 14616, 14615); //@t
				return 0;
			}
			if(var_25_string == 14616) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13384); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13385, 14619, 14618); //@t
				return 0;
			}
			if(var_25_string == 14619) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13386); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13387, 14622, 14620); //@t
				return 0;
			}
			if(var_25_string == 14622) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13388); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13389, -1, 14623); //@t
				return 0;
			}
			if(var_25_string == 14364) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13145); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13147, 14367, 14366); //@t
				var_0_object->AddReply(13146, -1, 14365); //@t
				return 0;
			}
			if(var_25_string == 14367) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13148); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13149, -1, 14368); //@t
				return 0;
			}
			if(var_25_string == 14243) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13036); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13134, 14354, 14353); //@t
				var_0_object->AddReply(13136, 14358, 14355); //@t
				return 0;
			}
			if(var_25_string == 14358) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13139); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13140, -1, 14359); //@t
				return 0;
			}
			if(var_25_string == 14354) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13135); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13138, -1, 14357); //@t
				return 0;
			}
			if(var_25_string == 14345) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13126); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13127, 14348, 14346); //@t
				var_0_object->AddReply(13128, -1, 14347); //@t
				return 0;
			}
			if(var_25_string == 14348) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13129); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13130, 14350, 14349); //@t
				return 0;
			}
			if(var_25_string == 14350) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13131); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13132, -1, 14351); //@t
				var_0_object->AddReply(13133, -1, 14352); //@t
				return 0;
			}
			if(var_25_string == 14369) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13150); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13151, 14371, 14370); //@t
				return 0;
			}
			if(var_25_string == 14371) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13152); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13153, 14373, 14372); //@t
				return 0;
			}
			if(var_25_string == 14373) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13154); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13155, 14375, 14374); //@t
				return 0;
			}
			if(var_25_string == 14375) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13156); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13157, 14377, 14376); //@t
				return 0;
			}
			if(var_25_string == 14377) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13158); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13159, 14379, 14378); //@t
				var_0_object->AddReply(13161, 14381, 14380); //@t
				return 0;
			}
			if(var_25_string == 14381) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13162); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13164, 14384, 14383); //@t
				return 0;
			}
			if(var_25_string == 14379) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13160); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13163, 14384, 14382); //@t
				return 0;
			}
			if(var_25_string == 14384) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13165); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13166, 14390, 14386); //@t
				var_0_object->AddReply(13167, 14388, 14387); //@t
				return 0;
			}
			if(var_25_string == 14388) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13168); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13169, -1, 14389); //@t
				return 0;
			}
			if(var_25_string == 14390) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13170); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13171, -1, 14391); //@t
				var_0_object->AddReply(13172, 14393, 14392); //@t
				return 0;
			}
			if(var_25_string == 14393) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13173); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13174, -1, 14394); //@t
				return 0;
			}
			if(var_25_string == 14362) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13143); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13144, -1, 14363); //@t
				return 0;
			}
			if(var_25_string == 14336) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13118); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13119, 14289, 14337); //@t
				return 0;
			}
			if(var_25_string == 14287) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13077); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13078, 14289, 14288); //@t
				return 0;
			}
			if(var_25_string == 14289) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13079); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13082, 14296, 14292); //@t
				var_0_object->AddReply(13080, 14291, 14290); //@t
				return 0;
			}
			if(var_25_string == 14291) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13081); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13083, 14294, 14293); //@t
				return 0;
			}
			if(var_25_string == 14294) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13084); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13085, 14296, 14295); //@t
				return 0;
			}
			if(var_25_string == 14296) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13086); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13111, 14329, 14328); //@t
				return 0;
			}
			if(var_25_string == 14329) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13112); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13113, 14332, 14331); //@t
				return 0;
			}
			if(var_25_string == 14332) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13114); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13115, 14334, 14333); //@t
				return 0;
			}
			if(var_25_string == 14334) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13116); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13120, 14340, 14339); //@t
				return 0;
			}
			if(var_25_string == 14340) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13121); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13122, 14342, 14341); //@t
				return 0;
			}
			if(var_25_string == 14342) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13123); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13124, -1, 14343); //@t
				return 0;
			}
			if(var_25_string == 14260) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13052); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13053, 14262, 14261); //@t
				var_0_object->AddReply(13108, 14262, 14323); //@t
				return 0;
			}
			if(var_25_string == 14262) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13054); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13055, 14264, 14263); //@t
				var_0_object->AddReply(13110, 14264, 14326); //@t
				return 0;
			}
			if(var_25_string == 14264) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13056); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13057, 14266, 14265); //@t
				return 0;
			}
			if(var_25_string == 14266) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13058); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13059, 14269, 14267); //@t
				var_0_object->AddReply(13060, 14269, 14268); //@t
				return 0;
			}
			if(var_25_string == 14269) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13061); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13321, 14557, 14556); //@t
				return 0;
			}
			if(var_25_string == 14557) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13322); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13323, -1, 14558); //@t
				return 0;
			}
			if(var_25_string == 14245) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13038); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13039, 14247, 14246); //@t
				var_0_object->AddReply(13088, 14299, 14298); //@t
				return 0;
			}
			if(var_25_string == 14299) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13089); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13093, 14306, 14303); //@t
				var_0_object->AddReply(13091, 14307, 14301); //@t
				var_0_object->AddReply(13092, 14307, 14302); //@t
				var_0_object->AddReply(13094, 14307, 14304); //@t
				var_0_object->AddReply(13090, 14307, 14300); //@t
				return 0;
			}
			if(var_25_string == 14307) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13097); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13098, 14314, 14308); //@t
				return 0;
			}
			if(var_25_string == 14314) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13100); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13101, 14316, 14315); //@t
				return 0;
			}
			if(var_25_string == 14316) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13102); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13103, 14318, 14317); //@t
				return 0;
			}
			if(var_25_string == 14318) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13104); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13105, 14320, 14319); //@t
				return 0;
			}
			if(var_25_string == 14320) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13106); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13107, 14249, 14321); //@t
				return 0;
			}
			if(var_25_string == 14306) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13096); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13099, 14307, 14312); //@t
				return 0;
			}
			if(var_25_string == 14247) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13040); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13041, 14249, 14248); //@t
				return 0;
			}
			if(var_25_string == 14249) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13042); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13043, 14251, 14250); //@t
				return 0;
			}
			if(var_25_string == 14251) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13044); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13045, 14253, 14252); //@t
				return 0;
			}
			if(var_25_string == 14253) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13046); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13062, 14273, 14272); //@t
				return 0;
			}
			if(var_25_string == 14273) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13063); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13064, -1, 14274); //@t
				var_0_object->AddReply(13065, 14276, 14275); //@t
				var_0_object->AddReply(13073, -1, 14283); //@t
				return 0;
			}
			if(var_25_string == 14276) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13066); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13067, 14278, 14277); //@t
				return 0;
			}
			if(var_25_string == 14278) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13068); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13069, 14280, 14279); //@t
				return 0;
			}
			if(var_25_string == 14280) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13070); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13071, -1, 14281); //@t
				var_0_object->AddReply(13072, -1, 14282); //@t
				return 0;
			}
			if(var_25_string == 14254) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13047); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13048, 14256, 14255); //@t
				var_0_object->AddReply(13051, 14245, 14258); //@t
				return 0;
			}
			if(var_25_string == 14256) {
				func_331(var_26_bool, "Neutral");
				var_0_object->SetMessage(13049); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13050, 14245, 14257); //@t
				return 0;
			}
			var_3_string = true;
			bool var_861_bool;
			func_4912(var_861_bool);
			if(var_861_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x15c";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool)
	{
		if(1 != 0) {
			func_4838();
			if(var_26_bool == 14980) {
				object var_31_object; object var_32_object;
				var_31_object = var_1_object;
				var_32_object = var_0_object;
				func_5100();
			}
			if(var_26_bool == 14645) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_object;
				func_5117();
			}
			if(var_26_bool == 13413) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_5129();
			}
			if(var_26_bool == 14646) {
				object var_89_object; object var_90_object;
				var_89_object = var_1_object;
				var_90_object = var_0_object;
				func_5123();
			}
			if(var_25_string == 14647) {
				bool var_95_bool;
				func_5425(var_1_object);
				if(var_95_bool != 0) {
					func_2056(var_26_bool, "Neutral");
					var_0_object->SetMessage(13413); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13415, 14650, 14649); //@t
					var_0_object->AddReply(13417, 14949, 14652); //@t
					var_0_object->AddReply(13414, 14650, 14648); //@t
					return 0;
				}
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(13409); //@t
				var_0_object->ClearReplies(); //@t
				bool var_130_bool;
				func_5437(var_1_object);
				if(var_130_bool != 0)
					var_0_object->AddReply(13411, 13400, 14645); //@t
				bool var_139_bool = false;
				bool var_140_bool;
				func_5449(var_1_object);
				if(var_140_bool != 0) {
					bool var_146_bool;
					func_5461(var_1_object);
					if(var_146_bool != 0)
						var_139_bool = true;
				}
				if(var_139_bool != 0)
					var_0_object->AddReply(13412, 13452, 14646); //@t
				var_0_object->AddReply(13410, -1, 14644); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0x808";
			EMIT "Pop(1)";
			EMIT "Push((int) 15089)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 15090)";
			EMIT "Push((int) 16357)";
			EMIT "Push((int) 16356)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_25_string == 16357) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(15091); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15092, 16359, 16358); //@t
				return 0;
			}
			if(var_25_string == 16359) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(15093); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15094, -1, 16360); //@t
				return 0;
			}
			if(var_25_string == 13452) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(12293); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12294, 13454, 13453); //@t
				return 0;
			}
			if(var_25_string == 13454) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(12295); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12296, 13457, 13455); //@t
				var_0_object->AddReply(12297, -1, 13456); //@t
				return 0;
			}
			if(var_25_string == 13457) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(12298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12299, 13459, 13458); //@t
				return 0;
			}
			if(var_25_string == 13459) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(12300); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12301, 13461, 13460); //@t
				return 0;
			}
			if(var_25_string == 13461) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(12302); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12303, 13463, 13462); //@t
				return 0;
			}
			if(var_25_string == 13463) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(12304); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12305, 13465, 13464); //@t
				return 0;
			}
			if(var_25_string == 13465) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(12306); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12307, -1, 13466); //@t
				var_0_object->AddReply(12308, -1, 13467); //@t
				return 0;
			}
			if(var_25_string == 13400) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(12244); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12245, 13402, 13401); //@t
				return 0;
			}
			if(var_25_string == 13402) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(12246); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12248, 13405, 13404); //@t
				var_0_object->AddReply(12247, 13409, 13403); //@t
				return 0;
			}
			if(var_25_string == 13405) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(12249); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12250, 13407, 13406); //@t
				return 0;
			}
			if(var_25_string == 13407) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(12251); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12252, 13409, 13408); //@t
				return 0;
			}
			if(var_25_string == 13409) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(12253); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12254, 13411, 13410); //@t
				return 0;
			}
			if(var_25_string == 13411) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(12255); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12256, -1, 13413); //@t
				return 0;
			}
			if(var_25_string == 14949) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(13688); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13689, 14952, 14951); //@t
				return 0;
			}
			if(var_25_string == 14952) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(13690); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13691, 14650, 14953); //@t
				var_0_object->AddReply(13692, 14650, 14954); //@t
				var_0_object->AddReply(13693, 14650, 14955); //@t
				return 0;
			}
			if(var_25_string == 14650) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(13416); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13421, 14959, 14657); //@t
				return 0;
			}
			if(var_25_string == 14959) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(13694); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13695, 14963, 14960); //@t
				var_0_object->AddReply(13696, 14963, 14961); //@t
				var_0_object->AddReply(13697, 14963, 14962); //@t
				return 0;
			}
			if(var_25_string == 14963) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(13698); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13699, 14970, 14964); //@t
				var_0_object->AddReply(13700, 14968, 14967); //@t
				return 0;
			}
			if(var_25_string == 14968) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(13701); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13702, 14970, 14969); //@t
				return 0;
			}
			if(var_25_string == 14970) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(13703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13704, 14972, 14971); //@t
				return 0;
			}
			if(var_25_string == 14972) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(13705); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13706, 14975, 14974); //@t
				return 0;
			}
			if(var_25_string == 14975) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(13707); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13708, 14978, 14976); //@t
				var_0_object->AddReply(13709, 14978, 14977); //@t
				return 0;
			}
			if(var_25_string == 14978) {
				func_2056(var_26_bool, "Neutral");
				var_0_object->SetMessage(13710); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13711, -1, 14980); //@t
				return 0;
			}
			var_3_string = true;
			bool var_360_bool;
			func_4912(var_360_bool);
			if(var_360_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x819";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool)
	{
		if(1 != 0) {
			func_4838();
			if(var_26_bool == 14106) {
				object var_31_object; object var_32_object;
				var_31_object = var_1_object;
				var_32_object = var_0_object;
				func_5197();
			}
			if(var_26_bool == 14118) {
				object var_93_object; object var_94_object;
				var_93_object = var_1_object;
				var_94_object = var_0_object;
				func_5234();
			}
			if(var_26_bool == 14114) {
				object var_118_object; object var_119_object;
				var_118_object = var_1_object;
				var_119_object = var_0_object;
				func_5264();
			}
			if(var_25_string == 14101) {
				bool var_124_bool;
				func_5569(var_1_object);
				if(var_124_bool != 0) {
					object var_132_object; object var_133_object;
					var_132_object = var_1_object;
					var_133_object = var_0_object;
					func_5228();
					func_2880(var_26_bool, "Neutral");
					var_0_object->SetMessage(12899); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12900, 14103, 14102); //@t
					return 0;
				}
				func_2880(var_26_bool, "Neutral");
				var_0_object->SetMessage(12905); //@t
				var_0_object->ClearReplies(); //@t
				bool var_157_bool;
				func_5605(var_1_object);
				if(var_157_bool != 0)
					var_0_object->AddReply(12906, 14109, 14108); //@t
				bool var_166_bool = false;
				bool var_167_bool;
				func_5581(var_1_object);
				if(var_167_bool != 0) {
					bool var_173_bool;
					func_5593(var_1_object);
					if(var_173_bool != 0)
						var_166_bool = true;
				}
				if(var_166_bool != 0)
					var_0_object->AddReply(12912, 14119, 14114); //@t
				var_0_object->AddReply(12911, -1, 14113); //@t
				return 0;
			}
			if(var_25_string == 14119) {
				func_2880(var_26_bool, "Neutral");
				var_0_object->SetMessage(12915); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12916, 14122, 14120); //@t
				var_0_object->AddReply(12917, 14122, 14121); //@t
				return 0;
			}
			if(var_25_string == 14122) {
				func_2880(var_26_bool, "Neutral");
				var_0_object->SetMessage(12918); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12919, 14125, 14124); //@t
				return 0;
			}
			if(var_25_string == 14125) {
				func_2880(var_26_bool, "Neutral");
				var_0_object->SetMessage(12920); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12921, -1, 14126); //@t
				var_0_object->AddReply(12922, 14128, 14127); //@t
				return 0;
			}
			if(var_25_string == 14128) {
				func_2880(var_26_bool, "Neutral");
				var_0_object->SetMessage(12923); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12924, -1, 14129); //@t
				return 0;
			}
			if(var_25_string == 14109) {
				func_2880(var_26_bool, "Neutral");
				var_0_object->SetMessage(12907); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12908, 14115, 14110); //@t
				var_0_object->AddReply(12909, 14115, 14111); //@t
				var_0_object->AddReply(12910, 14115, 14112); //@t
				return 0;
			}
			if(var_25_string == 14115) {
				func_2880(var_26_bool, "Neutral");
				var_0_object->SetMessage(12913); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12914, -1, 14118); //@t
				return 0;
			}
			if(var_25_string == 14103) {
				func_2880(var_26_bool, "Neutral");
				var_0_object->SetMessage(12901); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12902, 14105, 14104); //@t
				return 0;
			}
			if(var_25_string == 14105) {
				func_2880(var_26_bool, "Neutral");
				var_0_object->SetMessage(12903); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12904, -1, 14106); //@t
				return 0;
			}
			var_3_string = true;
			bool var_253_bool;
			func_4912(var_253_bool);
			if(var_253_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb51";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool)
	{
		if(1 != 0) {
			func_4838();
			if(var_26_bool == 15046) {
				object var_31_object; object var_32_object;
				var_31_object = var_1_object;
				var_32_object = var_0_object;
				func_5173();
			}
			if(var_26_bool == 15069) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_5179();
			}
			if(var_26_bool == 15079) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_5185();
			}
			if(var_26_bool == 15092) {
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_5191();
			}
			if(var_25_string == 15028) {
				bool var_55_bool;
				func_5509(var_1_object);
				if(var_55_bool != 0) {
					object var_63_object; object var_64_object;
					var_63_object = var_1_object;
					var_64_object = var_0_object;
					func_5167();
					func_3370(var_26_bool, "Neutral");
					var_0_object->SetMessage(13802); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13803, 15030, 15029); //@t
					var_0_object->AddReply(13815, 15042, 15041); //@t
					return 0;
				}
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13818); //@t
				var_0_object->ClearReplies(); //@t
				bool var_91_bool;
				func_5521(var_1_object);
				if(var_91_bool != 0)
					var_0_object->AddReply(13819, 15047, 15046); //@t
				bool var_100_bool = false;
				bool var_101_bool;
				func_5473(var_1_object);
				if(var_101_bool != 0) {
					bool var_107_bool;
					func_5533(var_1_object);
					if(var_107_bool != 0)
						var_100_bool = true;
				}
				if(var_100_bool != 0)
					var_0_object->AddReply(13842, 15070, 15069); //@t
				bool var_116_bool;
				func_5545(var_1_object);
				if(var_116_bool != 0)
					var_0_object->AddReply(13852, 15080, 15079); //@t
				bool var_125_bool;
				func_5557(var_1_object);
				if(var_125_bool != 0)
					var_0_object->AddReply(13865, 15093, 15092); //@t
				var_0_object->AddReply(13880, -1, 15107); //@t
				return 0;
			}
			if(var_25_string == 15093) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13866); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13867, 15095, 15094); //@t
				return 0;
			}
			if(var_25_string == 15095) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13868); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13869, 15097, 15096); //@t
				var_0_object->AddReply(13876, 15104, 15103); //@t
				return 0;
			}
			if(var_25_string == 15104) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13877); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13878, -1, 15105); //@t
				var_0_object->AddReply(13879, -1, 15106); //@t
				return 0;
			}
			if(var_25_string == 15097) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13870); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13871, -1, 15098); //@t
				var_0_object->AddReply(13872, 15100, 15099); //@t
				return 0;
			}
			if(var_25_string == 15100) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13873); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13874, -1, 15101); //@t
				var_0_object->AddReply(13875, -1, 15102); //@t
				return 0;
			}
			if(var_25_string == 15080) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13853); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13854, 15082, 15081); //@t
				return 0;
			}
			if(var_25_string == 15082) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13855); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13856, -1, 15083); //@t
				var_0_object->AddReply(13857, 15085, 15084); //@t
				return 0;
			}
			if(var_25_string == 15085) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13858); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13859, -1, 15086); //@t
				var_0_object->AddReply(13860, 15088, 15087); //@t
				return 0;
			}
			if(var_25_string == 15088) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13861); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13862, 15090, 15089); //@t
				var_0_object->AddReply(13864, -1, 15091); //@t
				return 0;
			}
			if(var_25_string == 15090) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13863); //@t
				var_0_object->ClearReplies(); //@t
				return 0;
			}
			if(var_25_string == 15070) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13843); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13844, 15072, 15071); //@t
				return 0;
			}
			if(var_25_string == 15072) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13845); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13846, 15074, 15073); //@t
				var_0_object->AddReply(13849, 15077, 15076); //@t
				return 0;
			}
			if(var_25_string == 15077) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13850); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13851, -1, 15078); //@t
				return 0;
			}
			if(var_25_string == 15074) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13847); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13848, -1, 15075); //@t
				return 0;
			}
			if(var_25_string == 15047) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13820); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13821, 15049, 15048); //@t
				var_0_object->AddReply(13839, 15067, 15066); //@t
				return 0;
			}
			if(var_25_string == 15067) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13840); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13841, -1, 15068); //@t
				return 0;
			}
			if(var_25_string == 15049) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13822); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13823, 15051, 15050); //@t
				return 0;
			}
			if(var_25_string == 15051) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13824); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13825, 15053, 15052); //@t
				var_0_object->AddReply(13827, 15055, 15054); //@t
				return 0;
			}
			if(var_25_string == 15055) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13828); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13829, 15057, 15056); //@t
				return 0;
			}
			if(var_25_string == 15057) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13830); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13831, 15059, 15058); //@t
				var_0_object->AddReply(13838, -1, 15065); //@t
				return 0;
			}
			if(var_25_string == 15059) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13832); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13833, 15061, 15060); //@t
				return 0;
			}
			if(var_25_string == 15061) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13834); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13835, 15063, 15062); //@t
				return 0;
			}
			if(var_25_string == 15063) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13836); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13837, -1, 15064); //@t
				return 0;
			}
			if(var_25_string == 15053) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13826); //@t
				var_0_object->ClearReplies(); //@t
				return 0;
			}
			if(var_25_string == 15042) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13816); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13817, 15030, 15043); //@t
				return 0;
			}
			if(var_25_string == 15030) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13804); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13805, 15032, 15031); //@t
				return 0;
			}
			if(var_25_string == 15032) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13806); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13807, 15034, 15033); //@t
				return 0;
			}
			if(var_25_string == 15034) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13808); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13809, 15036, 15035); //@t
				return 0;
			}
			if(var_25_string == 15036) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13810); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13811, 15038, 15037); //@t
				var_0_object->AddReply(13814, -1, 15040); //@t
				return 0;
			}
			if(var_25_string == 15038) {
				func_3370(var_26_bool, "Neutral");
				var_0_object->SetMessage(13812); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13813, -1, 15039); //@t
				return 0;
			}
			var_3_string = true;
			bool var_377_bool;
			func_4912(var_377_bool);
			if(var_377_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd3b";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int)
	{
		if(1 != 0) {
			func_4838();
			if(var_26_int == 15421) {
				object var_31_object; object var_32_object;
				var_31_object = var_1_object;
				var_32_object = var_0_object;
				func_5135();
			}
			if(var_26_int == 15422) {
				object var_80_object; object var_81_object;
				var_80_object = var_1_object;
				var_81_object = var_0_object;
				func_5135();
			}
			if(var_26_int == 15451) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_5157();
			}
			if(var_25_int == 15408) {
				bool var_100_bool;
				func_5485(var_1_object);
				if(var_100_bool != 0) {
					object var_108_object; object var_109_object;
					var_108_object = var_1_object;
					var_109_object = var_0_object;
					func_5270();
					func_4285(var_26_int, "Neutral");
					var_0_object->SetMessage(14194); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14195, 15410, 15409); //@t
					return 0;
				}
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14222); //@t
				var_0_object->ClearReplies(); //@t
				bool var_133_bool;
				func_5497(var_1_object);
				if(var_133_bool != 0)
					var_0_object->AddReply(14223, 15442, 15441); //@t
				bool var_142_bool;
				func_5276(var_142_bool, var_1_object);
				if(var_142_bool != 0)
					var_0_object->AddReply(14234, 15453, 15452); //@t
				var_0_object->AddReply(14239, -1, 15457); //@t
				return 0;
			}
			if(var_25_int == 15453) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14235); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14236, 15455, 15454); //@t
				return 0;
			}
			if(var_25_int == 15455) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14237); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14238, -1, 15456); //@t
				return 0;
			}
			if(var_25_int == 15442) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14224); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14225, 15444, 15443); //@t
				return 0;
			}
			if(var_25_int == 15444) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14226); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14227, 15446, 15445); //@t
				return 0;
			}
			if(var_25_int == 15446) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14228); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14229, 15448, 15447); //@t
				return 0;
			}
			if(var_25_int == 15448) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14230); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14231, 15450, 15449); //@t
				return 0;
			}
			if(var_25_int == 15450) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14232); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14233, -1, 15451); //@t
				return 0;
			}
			if(var_25_int == 15410) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14196); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14197, 15412, 15411); //@t
				var_0_object->AddReply(14218, 15412, 15435); //@t
				var_0_object->AddReply(14219, 15438, 15437); //@t
				return 0;
			}
			if(var_25_int == 15438) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14220); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14221, 15412, 15439); //@t
				return 0;
			}
			if(var_25_int == 15412) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14198); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14199, 15414, 15413); //@t
				var_0_object->AddReply(14212, 15428, 15427); //@t
				return 0;
			}
			if(var_25_int == 15428) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14213); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14214, 15430, 15429); //@t
				var_0_object->AddReply(14217, 15430, 15433); //@t
				return 0;
			}
			if(var_25_int == 15430) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14215); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14216, 15420, 15431); //@t
				return 0;
			}
			if(var_25_int == 15414) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14200); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14201, 15416, 15415); //@t
				return 0;
			}
			if(var_25_int == 15416) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14202); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14203, 15418, 15417); //@t
				var_0_object->AddReply(14209, 15424, 15423); //@t
				return 0;
			}
			if(var_25_int == 15424) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14210); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14211, 15418, 15425); //@t
				return 0;
			}
			if(var_25_int == 15418) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14204); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14205, 15420, 15419); //@t
				var_0_object->AddReply(14208, -1, 15422); //@t
				return 0;
			}
			if(var_25_int == 15420) {
				func_4285(var_26_int, "Neutral");
				var_0_object->SetMessage(14206); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14207, -1, 15421); //@t
				return 0;
			}
			var_3_string = true;
			bool var_289_bool;
			func_4912(var_289_bool);
			if(var_289_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x10ce";
	
	}

}


void func_0(void)
{
	@Hold();
}


void func_5633(bool var_41_bool, object var_42_object, int var_43_int)
{
	object var_50_object;
	func_5620(var_50_object);
	object var_47_object;
	var_50_object = var_47_object;
	object var_48_object;
	var_47_object->Find(var_43_int, var_48_object);
	if(!var_48_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_43_int);
		var_41_bool = false;
	}
	var_48_object->AddChild(var_42_object);
	@SetVariable("player_diary", 1);
	int var_49_int;
	var_42_object->GetCategory(var_49_int);
	@SetDiarySection(var_49_int);
	var_41_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_5888(void)
{
	var_25_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


// @pe
void func_5123(void)
{
	@SetVariable("ood8Aglaja2", 1);
}


void func_4867(bool var_69_bool, string var_70_string, string var_71_string)
{
	object var_73_object;
	@FindActor(var_73_object, var_70_string);
	if(var_73_object == null)
		var_69_bool = false;
	@Trigger(var_73_object, var_71_string);
	var_69_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5892(object var_26_object)
{
	bool var_27_bool;
	func_4893(var_27_bool, 7);
	if(var_27_bool != 0) {
		int var_35_int; object var_36_object;
		var_26_object = var_36_object;
		TaskCall(2);
		func_49(var_37_object, var_35_int, var_36_object);
		TaskReturn();
		return 0;
	}
	bool var_258_bool;
	func_4893(var_258_bool, 8);
	if(var_258_bool != 0) {
		int var_260_int; object var_261_object;
		var_26_object = var_261_object;
		TaskCall(4);
		func_1866(var_262_object, var_260_int, var_261_object);
		TaskReturn();
		return 0;
	}
	bool var_346_bool;
	func_4893(var_346_bool, 9);
	if(var_346_bool != 0) {
		int var_348_int; object var_349_object;
		var_26_object = var_349_object;
		TaskCall(8);
		func_3175(var_350_object, var_348_int, var_349_object);
		TaskReturn();
		return 0;
	}
	bool var_453_bool;
	func_4893(var_453_bool, 10);
	if(var_453_bool != 0) {
		int var_455_int; object var_456_object;
		var_26_object = var_456_object;
		TaskCall(6);
		func_2710(var_457_object, var_455_int, var_456_object);
		TaskReturn();
		return 0;
	}
	bool var_539_bool;
	func_4893(var_539_bool, 11);
	if(var_539_bool != 0) {
		int var_541_int; object var_542_object;
		var_26_object = var_542_object;
		TaskCall(10);
		func_4124(var_543_object, var_541_int, var_542_object);
		TaskReturn();
		return 0;
	}
	bool var_614_bool;
	func_4899(var_614_bool);
}


// @pe
void func_2056(object var_2_object, string var_103_string)
{
	bool var_104_bool;
	func_4912(var_104_bool);
	if(!var_104_bool) //@nz
		return 0;
	if(var_103_string == var_2_object)
		return 0;
	string var_107_string;
	func_4820(var_107_string);
	var_2_object = var_107_string;
}


// @pe
void func_5129(void)
{
	@SetVariable("d8KainIsReason", 1);
}


// @pe
void func_5389(bool var_324_bool)
{
	int var_326_int;
	func_4855(var_326_int, "ood7Aglaja5");
	if(var_326_int == 0) {
		var_324_bool = true;
		return 0;
	}
	var_324_bool = false;
}


// @pe
void func_5135(void)
{
	@SetVariable("d11q01", 1);
	func_5744();
	func_5760();
	bool var_69_bool;
	func_4867(var_69_bool, "quest_d11_01", "init_girl");
	bool var_75_bool;
	func_4867(var_75_bool, "quest_d11_01", "remove_andrei");
}


void func_4879(float var_48_float)
{
	float var_50_float;
	@GetGameTime(var_50_float);
	var_50_float = var_48_float;
}


void func_4884(int var_29_int)
{
	float var_31_float;
	@GetGameTime(var_31_float);
	var_29_int = 1 + (var_31_float / 24);
}


// @pe
void func_5401(bool var_297_bool)
{
	int var_299_int;
	func_4855(var_299_int, "d7q01");
	if(var_299_int == 3)
		var_297_bool = true;
	var_297_bool = false;
}


void func_4124(object var_0_object, int var_541_int, object var_542_object)
{
	var_0_object = var_542_object;
	bool var_552_bool; object var_553_object;
	var_542_object = var_553_object;
	func_4760(var_552_bool, var_553_object);
	if(!var_552_bool) { //@nz
		var_541_int = -2;
		return 8;
	}
	object var_548_object;
	@CreateDialog(var_548_object);
	int var_555_int;
	func_4908(var_555_int);
	var_548_object->SetNPCName(var_555_int);
	string var_556_string;
	func_4910(var_556_string);
	var_548_object->SetPhoto(var_556_string);
	int var_557_int;
	func_5679(var_557_int);
	var_548_object->SetPlayerName(var_557_int);
	bool var_549_bool;
	@IsOverrideActive(var_549_bool);
	if(var_549_bool != 0) {
		var_541_int = -2;
		return 8;
	}
	@DoDialog(var_548_object);
	object var_559_object; object var_560_object;
	var_542_object = var_559_object;
	var_548_object = var_560_object;
	TaskCall(11);
	func_4187(var_561_object, var_562_object, var_563_string, var_564_bool, var_559_object, var_560_object);
	TaskReturn();
	bool var_551_bool;
	var_548_object->IsDialogEnd(var_551_bool);
	
	for(;;) {
		var_612_bool = !var_551_bool; //@nz
		if(var_612_bool == 0) goto Label_4176;
		@sync();
		var_548_object->IsDialogEnd(var_551_bool);
	}
	
Label_4176:
	object var_613_object;
	var_542_object = var_613_object;
	func_4816();
	@StopDialog(var_548_object);
	var_548_object->GetReturnValue(-1);
	int var_550_int = var_541_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4893(bool var_27_bool, int var_28_int)
{
	int var_29_int;
	func_4884(var_29_int);
	var_27_bool = var_29_int == var_28_int;
}


void func_5662(object var_37_object)
{
	object var_40_object; object var_41_object;
	@GetMainOutdoorScene(var_40_object);
	if(var_40_object == null) {
		@Trace("Can't find main outdoor scene");
		var_41_object = null;
		var_41_object = var_37_object;
	}
	var_40_object->GetMap(var_41_object);
	var_41_object = var_37_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_4899(bool var_614_bool)
{
	func_4820("No");
	bool var_616_bool;
	@lshWaitForAnimEnd(var_616_bool);
	var_616_bool = var_614_bool;
}


// @pe
void func_5157(void)
{
	func_5776();
	bool var_95_bool;
	func_4867(var_95_bool, "quest_d11_01", "completed");
}


// @pe
void func_5413(bool var_363_bool)
{
	int var_365_int;
	func_4855(var_365_int, "d7q02");
	if(var_365_int == 2)
		var_363_bool = true;
	var_363_bool = false;
}


// @pe
void func_3370(object var_2_object, string var_67_string)
{
	bool var_68_bool;
	func_4912(var_68_bool);
	if(!var_68_bool) //@nz
		return 0;
	if(var_67_string == var_2_object)
		return 0;
	string var_71_string;
	func_4820(var_71_string);
	var_2_object = var_71_string;
}


void func_4908(int var_87_int)
{
	var_87_int = 13334;
}


void func_4910(string var_88_string)
{
	var_88_string = "ui/NPC_Aglaja.png";
}


void func_5679(int var_89_int)
{
	int var_91_int;
	@GetVariable("player", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 200001;
		return 2;
	EMIT "GOTO 0x163e";
	}
	if(var_91_int == 1) {
		var_89_int = 200002;
		return 2;
	}
	var_89_int = 200003;
}


// @pe
void func_5167(void)
{
	@SetVariable("ood9Aglaja1", 1);
}


void func_49(object var_0_object, int var_35_int, object var_36_object)
{
	var_0_object = var_36_object;
	bool var_46_bool; object var_47_object;
	var_36_object = var_47_object;
	func_4760(var_46_bool, var_47_object);
	if(!var_46_bool) { //@nz
		var_35_int = -2;
		return 8;
	}
	object var_42_object;
	@CreateDialog(var_42_object);
	int var_87_int;
	func_4908(var_87_int);
	var_42_object->SetNPCName(var_87_int);
	string var_88_string;
	func_4910(var_88_string);
	var_42_object->SetPhoto(var_88_string);
	int var_89_int;
	func_5679(var_89_int);
	var_42_object->SetPlayerName(var_89_int);
	bool var_43_bool;
	@IsOverrideActive(var_43_bool);
	if(var_43_bool != 0) {
		var_35_int = -2;
		return 8;
	}
	@DoDialog(var_42_object);
	object var_98_object; object var_99_object;
	var_36_object = var_98_object;
	var_42_object = var_99_object;
	TaskCall(3);
	func_112(var_100_object, var_101_object, var_102_string, var_103_bool, var_98_object, var_99_object);
	TaskReturn();
	bool var_45_bool;
	var_42_object->IsDialogEnd(var_45_bool);
	
	for(;;) {
		var_256_bool = !var_45_bool; //@nz
		if(var_256_bool == 0) goto Label_101;
		@sync();
		var_42_object->IsDialogEnd(var_45_bool);
	}
	
Label_101:
	object var_257_object;
	var_36_object = var_257_object;
	func_4816();
	@StopDialog(var_42_object);
	var_42_object->GetReturnValue(-1);
	int var_44_int = var_35_int;
}
EMIT "Stack[-4] = 0";


void func_4912(bool var_28_bool)
{
	var_28_bool = true;
}


// @pe
void func_5425(bool var_95_bool)
{
	int var_97_int;
	func_4855(var_97_int, "d8q01");
	if(var_97_int == 0) {
		var_95_bool = true;
		return 0;
	}
	var_95_bool = false;
}


// @pe
void func_4914(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_5173(void)
{
	@SetVariable("ood9Aglaja2", 1);
}


// @pe
void func_4920(void)
{
	@SetVariable("ood7Aglaja1", 1);
}


// @pe
void func_5179(void)
{
	@SetVariable("ood9Aglaja3", 1);
}


// @pe
void func_5437(bool var_130_bool)
{
	int var_132_int;
	func_4855(var_132_int, "ood8Aglaja1");
	if(var_132_int == 0) {
		var_130_bool = true;
		return 0;
	}
	var_130_bool = false;
}


// @pe
void func_4926(void)
{
	@SetVariable("ood7Aglaja2", 1);
}


void func_5696(void)
{
	@Trace("Adding diary entry");
	object var_52_object;
	@CreateDiaryEntry(var_52_object, 186, 1, 15449);
	bool var_57_bool; object var_58_object;
	var_52_object = var_58_object;
	func_5633(var_57_bool, var_58_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5185(void)
{
	@SetVariable("ood9Aglaja4", 1);
}


// @pe
void func_2880(object var_2_object, string var_136_string)
{
	bool var_137_bool;
	func_4912(var_137_bool);
	if(!var_137_bool) //@nz
		return 0;
	if(var_136_string == var_2_object)
		return 0;
	string var_140_string;
	func_4820(var_140_string);
	var_2_object = var_140_string;
}


void func_4932(void)
{
	@SetVariable("d7q01", 1);
	object var_57_object;
	func_5662(var_57_object);
	object var_54_object;
	var_57_object = var_54_object;
	float var_68_float;
	func_4879(var_68_float);
	var_54_object->AddMark("d7q01AglajaGotoBirdmaskSelf", "pt_map_aglaja", 1, 15410, var_68_float);
	float var_75_float;
	func_4879(var_75_float);
	var_54_object->AddMark("d7q01BirdmaskD", "pt_d7q01_dbirdmask", 1, 15408, var_75_float);
	float var_80_float;
	func_4879(var_80_float);
	var_54_object->AddMark("d7q01BirdmaskM", "pt_d7q01_mbirdmask", 1, 15409, var_80_float);
	float var_85_float;
	func_4879(var_85_float);
	var_54_object->AddMark("d7q01BirdmaskU", "pt_d7q01_ubirdmask", 1, 15407, var_85_float);
	func_5792();
	func_5808();
	bool var_120_bool;
	func_4867(var_120_bool, "quest_d7_01", "place_birdmasks");
}
EMIT "Stack[-1] = 0";


// @pe
void func_5191(void)
{
	@SetVariable("ood9Aglaja5", 1);
}


// @pe
void func_5449(bool var_140_bool)
{
	int var_142_int;
	func_4855(var_142_int, "ood8Aglaja2");
	if(var_142_int == 0) {
		var_140_bool = true;
		return 0;
	}
	var_140_bool = false;
}


void func_1866(object var_0_object, int var_260_int, object var_261_object)
{
	var_0_object = var_261_object;
	bool var_271_bool; object var_272_object;
	var_261_object = var_272_object;
	func_4760(var_271_bool, var_272_object);
	if(!var_271_bool) { //@nz
		var_260_int = -2;
		return 8;
	}
	object var_267_object;
	@CreateDialog(var_267_object);
	int var_274_int;
	func_4908(var_274_int);
	var_267_object->SetNPCName(var_274_int);
	string var_275_string;
	func_4910(var_275_string);
	var_267_object->SetPhoto(var_275_string);
	int var_276_int;
	func_5679(var_276_int);
	var_267_object->SetPlayerName(var_276_int);
	bool var_268_bool;
	@IsOverrideActive(var_268_bool);
	if(var_268_bool != 0) {
		var_260_int = -2;
		return 8;
	}
	@DoDialog(var_267_object);
	object var_278_object; object var_279_object;
	var_261_object = var_278_object;
	var_267_object = var_279_object;
	TaskCall(5);
	func_1929(var_280_object, var_281_object, var_282_string, var_283_bool, var_278_object, var_279_object);
	TaskReturn();
	bool var_270_bool;
	var_267_object->IsDialogEnd(var_270_bool);
	
	for(;;) {
		var_344_bool = !var_270_bool; //@nz
		if(var_344_bool == 0) goto Label_1918;
		@sync();
		var_267_object->IsDialogEnd(var_270_bool);
	}
	
Label_1918:
	object var_345_object;
	var_261_object = var_345_object;
	func_4816();
	@StopDialog(var_267_object);
	var_267_object->GetReturnValue(-1);
	int var_269_int = var_260_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_331(object var_2_object, string var_245_string)
{
	bool var_246_bool;
	func_4912(var_246_bool);
	if(!var_246_bool) //@nz
		return 0;
	if(var_245_string == var_2_object)
		return 0;
	string var_249_string;
	func_4820(var_249_string);
	var_2_object = var_249_string;
}


void func_5197(void)
{
	@SetVariable("d10q01", 1);
	object var_37_object;
	func_5662(var_37_object);
	object var_34_object;
	var_37_object = var_34_object;
	float var_48_float;
	func_4879(var_48_float);
	var_34_object->AddMark("d10q01AglajaGotoPetr", "pt_map_petr", 1, 15451, var_48_float);
	func_5696();
	func_5712();
	bool var_85_bool;
	func_4867(var_85_bool, "quest_d10_01", "init_house");
}
EMIT "Stack[-1] = 0";


void func_5712(void)
{
	@Trace("Adding diary entry");
	object var_77_object;
	@CreateDiaryEntry(var_77_object, 187, 1, 15450);
	bool var_82_bool; object var_83_object;
	var_77_object = var_83_object;
	func_5633(var_82_bool, var_83_object, 186);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5461(bool var_146_bool)
{
	int var_148_int;
	func_4855(var_148_int, "d8TermitnikLoad");
	if(var_148_int != 0) {
		var_146_bool = true;
		return 0;
	}
	var_146_bool = false;
}


// @pe
void func_4187(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_559_object, object var_560_object)
{
	var_0_object = var_560_object;
	var_1_object = var_559_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_566_bool;
		func_5485(var_1_object);
		if(var_566_bool != 0) {
			object var_572_object; object var_573_object;
			var_572_object = var_1_object;
			var_573_object = var_0_object;
			func_5270();
			func_4285(var_560_object, "Neutral");
			var_0_object->SetMessage(14194); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(14195, 15410, 15409); //@t
		} else {
					func_4285(var_560_object, "Neutral");
					var_0_object->SetMessage(14222); //@t
					var_0_object->ClearReplies(); //@t
					bool var_595_bool;
					func_5497(var_1_object);
					if(var_595_bool != 0)
						var_0_object->AddReply(14223, 15442, 15441); //@t
					bool var_604_bool;
					func_5276(var_604_bool, var_1_object);
					if(var_604_bool != 0)
						var_0_object->AddReply(14234, 15453, 15452); //@t
					var_0_object->AddReply(14239, -1, 15457); //@t
		}
	}
	for(;;) {
		bool var_585_bool;
		func_4912(var_585_bool);
		if(var_585_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4820(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_4284;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_4284:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x105f";


void func_5728(void)
{
	@Trace("Adding diary entry");
	object var_105_object;
	@CreateDiaryEntry(var_105_object, 191, 1, 15476);
	bool var_110_bool; object var_111_object;
	var_105_object = var_111_object;
	func_5633(var_110_bool, var_111_object, 186);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5473(bool var_101_bool)
{
	int var_103_int;
	func_4855(var_103_int, "d9TalkToPolkovodec");
	if(var_103_int != 0) {
		var_101_bool = true;
		return 0;
	}
	var_101_bool = false;
}


void func_3175(object var_0_object, int var_348_int, object var_349_object)
{
	var_0_object = var_349_object;
	bool var_359_bool; object var_360_object;
	var_349_object = var_360_object;
	func_4760(var_359_bool, var_360_object);
	if(!var_359_bool) { //@nz
		var_348_int = -2;
		return 8;
	}
	object var_355_object;
	@CreateDialog(var_355_object);
	int var_362_int;
	func_4908(var_362_int);
	var_355_object->SetNPCName(var_362_int);
	string var_363_string;
	func_4910(var_363_string);
	var_355_object->SetPhoto(var_363_string);
	int var_364_int;
	func_5679(var_364_int);
	var_355_object->SetPlayerName(var_364_int);
	bool var_356_bool;
	@IsOverrideActive(var_356_bool);
	if(var_356_bool != 0) {
		var_348_int = -2;
		return 8;
	}
	@DoDialog(var_355_object);
	object var_366_object; object var_367_object;
	var_349_object = var_366_object;
	var_355_object = var_367_object;
	TaskCall(9);
	func_3238(var_368_object, var_369_object, var_370_string, var_371_bool, var_366_object, var_367_object);
	TaskReturn();
	bool var_358_bool;
	var_355_object->IsDialogEnd(var_358_bool);
	
	for(;;) {
		var_451_bool = !var_358_bool; //@nz
		if(var_451_bool == 0) goto Label_3227;
		@sync();
		var_355_object->IsDialogEnd(var_358_bool);
	}
	
Label_3227:
	object var_452_object;
	var_349_object = var_452_object;
	func_4816();
	@StopDialog(var_355_object);
	var_355_object->GetReturnValue(-1);
	int var_357_int = var_348_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5228(void)
{
	@SetVariable("ood10Aglaja1", 1);
}


// @pe
void func_5485(bool var_100_bool)
{
	int var_102_int;
	func_4855(var_102_int, "d11q01");
	if(var_102_int == 0) {
		var_100_bool = true;
		return 0;
	}
	var_100_bool = false;
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_98_object, object var_99_object)
{
	var_0_object = var_99_object;
	var_1_object = var_98_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_105_bool = false;
		bool var_106_bool;
		func_5286(var_1_object);
		if(var_106_bool != 0) {
			bool var_114_bool;
			func_5276(var_114_bool, var_1_object);
			if(var_114_bool != 0)
				var_105_bool = true;
		}
		if(var_105_bool != 0) {
			func_331(var_99_object, "Neutral");
			var_0_object->SetMessage(12185); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(12186, 14254, 13341); //@t
			var_0_object->AddReply(13037, 14245, 14244); //@t
		} else {
					bool var_148_bool = false;
					bool var_149_bool;
					func_5298(var_1_object);
					if(var_149_bool != 0) {
						bool var_155_bool;
						func_5276(var_155_bool, var_1_object);
						if(var_155_bool != 0)
							var_148_bool = true;
					}
					if(var_148_bool == 0) goto Label_181;
					func_331(var_99_object, "Neutral");
					var_0_object->SetMessage(13033); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13034, 14260, 14241); //@t
		}
	}
Label_301:
	for(;;) {
		bool var_140_bool;
		func_4912(var_140_bool);
		if(var_140_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4820(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_330;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_330:
			}
			bool var_162_bool;
			func_5310(var_1_object);
			if(var_162_bool != 0) {
			func_331(var_99_object, "Neutral");
			var_0_object->SetMessage(13074); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(13076, 14287, 14286); //@t
			var_0_object->AddReply(13117, 14336, 14335); //@t
			goto Label_301;
		}
		return 0;
	}
	func_331(var_99_object, "Neutral");
	var_0_object->SetMessage(13031); //@t
	var_0_object->ClearReplies(); //@t
	bool var_178_bool;
	func_5401(var_1_object);
	if(var_178_bool != 0)
		var_0_object->AddReply(13141, 14362, 14360); //@t
	bool var_187_bool = false;
	bool var_188_bool;
	func_5358(var_188_bool, var_1_object);
	if(var_188_bool != 0) {
		bool var_205_bool;
		func_5389(var_1_object);
		if(var_205_bool != 0)
			var_187_bool = true;
	}
	if(var_187_bool != 0)
		var_0_object->AddReply(13075, 14369, 14285); //@t
	bool var_214_bool = false;
	bool var_215_bool;
	func_5334(var_1_object);
	if(var_215_bool != 0) {
		bool var_221_bool;
		func_5346(var_1_object);
		if(var_221_bool != 0)
			var_214_bool = true;
	}
	if(var_214_bool != 0)
		var_0_object->AddReply(13125, 14345, 14344); //@t
	bool var_230_bool;
	func_5322(var_1_object);
	if(var_230_bool != 0)
		var_0_object->AddReply(13035, 14243, 14242); //@t
	bool var_239_bool;
	func_5276(var_239_bool, var_1_object);
	if(var_239_bool != 0)
		var_0_object->AddReply(13142, 14364, 14361); //@t
	bool var_244_bool;
	func_5413(var_1_object);
	if(var_244_bool != 0)
		var_0_object->AddReply(13377, 14610, 14609); //@t
	var_0_object->AddReply(13032, -1, 14239); //@t
	goto Label_301;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x74";


void func_5744(void)
{
	@Trace("Adding diary entry");
	object var_36_object;
	@CreateDiaryEntry(var_36_object, 192, 1, 15477);
	bool var_41_bool; object var_42_object;
	var_36_object = var_42_object;
	func_5633(var_41_bool, var_42_object, -1);
}
EMIT "Stack[-1] = 0";


void func_5234(void)
{
	object var_99_object;
	func_5662(var_99_object);
	object var_97_object;
	var_99_object = var_97_object;
	object var_98_object;
	var_97_object->FindMark(var_98_object, "d10q01AglajaGotoPetr");
	if(var_98_object != 0)
		var_98_object->Remove();
	var_97_object->FindMark(var_98_object, "d10q01SoldierGotoPetr");
	if(var_98_object != 0)
		var_98_object->Remove();
	func_5728();
	bool var_113_bool;
	func_4867(var_113_bool, "quest_d10_01", "completed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5497(bool var_133_bool)
{
	int var_135_int;
	func_4855(var_135_int, "d11q01");
	if(var_135_int == 4)
		var_133_bool = true;
	var_133_bool = false;
}


// @pe
void func_4990(void)
{
	@SetVariable("ood7Aglaja3", 1);
}


void func_5760(void)
{
	@Trace("Adding diary entry");
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 193, 1, 15478);
	bool var_66_bool; object var_67_object;
	var_61_object = var_67_object;
	func_5633(var_66_bool, var_67_object, 192);
}
EMIT "Stack[-1] = 0";


void func_4996(object var_159_object)
{
	@SetVariable("d7q01", 2);
	object var_167_object;
	func_5662(var_167_object);
	object var_163_object;
	var_167_object = var_163_object;
	float var_172_float;
	func_4879(var_172_float);
	var_163_object->AddMark("d7q01AglajaFindLierSelf", "pt_map_aglaja", 1, 15411, var_172_float);
	func_5840();
	int var_164_int;
	var_159_object->RemoveItemByType(var_164_int, "d7q01_mreport", 1);
	var_159_object->RemoveItemByType(var_164_int, "d7q01_dreport", 1);
	var_159_object->RemoveItemByType(var_164_int, "d7q01_ureport", 1);
}
EMIT "Stack[-2] = 0";


// @pe
void func_5509(bool var_55_bool)
{
	int var_57_int;
	func_4855(var_57_int, "ood9Aglaja1");
	if(var_57_int == 0) {
		var_55_bool = true;
		return 0;
	}
	var_55_bool = false;
}


void func_4743(bool var_26_bool, object var_27_object)
{
	cvector var_32_cvector;
	var_27_object->GetPosition(var_32_cvector);
	cvector var_33_cvector;
	@GetPosition(var_33_cvector);
	cvector var_34_cvector = var_32_cvector - var_33_cvector;
	var_36_float = GetByIndex(var_34_cvector, 0);
	var_37_float = GetByIndex(var_34_cvector, 2);
	bool var_35_bool;
	@Rotate(var_36_float, var_37_float, var_35_bool);
	var_35_bool = var_26_bool;
}


// @pe
void func_1929(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_278_object, object var_279_object)
{
	var_0_object = var_279_object;
	var_1_object = var_278_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_285_bool;
		func_5425(var_1_object);
		if(var_285_bool != 0) {
			func_2056(var_279_object, "Neutral");
			var_0_object->SetMessage(13413); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(13415, 14650, 14649); //@t
			var_0_object->AddReply(13417, 14949, 14652); //@t
			var_0_object->AddReply(13414, 14650, 14648); //@t
		} else {
					func_2056(var_279_object, "Neutral");
					var_0_object->SetMessage(13409); //@t
					var_0_object->ClearReplies(); //@t
					bool var_316_bool;
					func_5437(var_1_object);
					if(var_316_bool != 0)
						var_0_object->AddReply(13411, 13400, 14645); //@t
					bool var_325_bool = false;
					bool var_326_bool;
					func_5449(var_1_object);
					if(var_326_bool != 0) {
						bool var_332_bool;
						func_5461(var_1_object);
						if(var_332_bool != 0)
							var_325_bool = true;
					}
					if(var_325_bool != 0)
						var_0_object->AddReply(13412, 13452, 14646); //@t
					var_0_object->AddReply(13410, -1, 14644); //@t
		}
	}
	for(;;) {
		bool var_306_bool;
		func_4912(var_306_bool);
		if(var_306_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4820(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2055;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2055:
			return 0;

		}

	}
}
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=0";
EMIT "Call 0x808";
EMIT "Pop(1)";
EMIT "Push((int) 15089)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 15090)";
EMIT "Push((int) 16357)";
EMIT "Push((int) 16356)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0x7ea";
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x78d";


// @pe
void func_5264(void)
{
	@SetVariable("ood10Aglaja2", 1);
}


void func_5776(void)
{
	@Trace("Adding diary entry");
	object var_87_object;
	@CreateDiaryEntry(var_87_object, 196, 1, 15481);
	bool var_92_bool; object var_93_object;
	var_87_object = var_93_object;
	func_5633(var_92_bool, var_93_object, 192);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5521(bool var_91_bool)
{
	int var_93_int;
	func_4855(var_93_int, "ood9Aglaja2");
	if(var_93_int == 0) {
		var_91_bool = true;
		return 0;
	}
	var_91_bool = false;
}


void func_4755(bool var_26_bool)
{
	bool var_28_bool;
	@IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
}


// @pe
void func_5270(void)
{
	@SetVariable("d11AglajaVisit", 1);
}


void func_2710(object var_0_object, int var_455_int, object var_456_object)
{
	var_0_object = var_456_object;
	bool var_466_bool; object var_467_object;
	var_456_object = var_467_object;
	func_4760(var_466_bool, var_467_object);
	if(!var_466_bool) { //@nz
		var_455_int = -2;
		return 8;
	}
	object var_462_object;
	@CreateDialog(var_462_object);
	int var_469_int;
	func_4908(var_469_int);
	var_462_object->SetNPCName(var_469_int);
	string var_470_string;
	func_4910(var_470_string);
	var_462_object->SetPhoto(var_470_string);
	int var_471_int;
	func_5679(var_471_int);
	var_462_object->SetPlayerName(var_471_int);
	bool var_463_bool;
	@IsOverrideActive(var_463_bool);
	if(var_463_bool != 0) {
		var_455_int = -2;
		return 8;
	}
	@DoDialog(var_462_object);
	object var_473_object; object var_474_object;
	var_456_object = var_473_object;
	var_462_object = var_474_object;
	TaskCall(7);
	func_2773(var_475_object, var_476_object, var_477_string, var_478_bool, var_473_object, var_474_object);
	TaskReturn();
	bool var_465_bool;
	var_462_object->IsDialogEnd(var_465_bool);
	
	for(;;) {
		var_537_bool = !var_465_bool; //@nz
		if(var_537_bool == 0) goto Label_2762;
		@sync();
		var_462_object->IsDialogEnd(var_465_bool);
	}
	
Label_2762:
	object var_538_object;
	var_456_object = var_538_object;
	func_4816();
	@StopDialog(var_462_object);
	var_462_object->GetReturnValue(-1);
	int var_464_int = var_455_int;
}
EMIT "Stack[-4] = 0";


void func_4760(bool var_46_bool, object var_47_object)
{
	cvector var_57_cvector;
	var_47_object->GetPosition(var_57_cvector);
	float var_56_float;
	var_47_object->GetEyesHeight(var_56_float);
	var_64_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (var_64_float + var_56_float);
	cvector var_58_cvector;
	@GetPosition(var_58_cvector);
	@GetEyesHeight(var_56_float);
	var_65_float = GetByIndex(var_58_cvector, 1);
	SetByIndex(var_58_cvector, 1) = (var_65_float + var_56_float);
	cvector var_59_cvector = var_57_cvector - var_58_cvector;
	var_66_float = GetByIndex(var_59_cvector, 1);
	SetByIndex(var_59_cvector, 1) = (float)0;
	var_68_float = sqrt(var_59_cvector | var_59_cvector);
	var_59_cvector /= var_68_float;
	cvector var_60_cvector = -var_59_cvector;
	cvector var_71_cvector;
	func_4845(var_71_cvector, (var_60_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_61_cvector = ((var_59_cvector * 70) + (var_71_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_63_bool;
	@IsOverrideActive(var_63_bool);
	if(var_63_bool != 0)
		var_46_bool = false;
	@StopWorld();
	@CameraTransit((var_58_cvector + var_61_cvector), var_60_cvector);
	var_84_float = GetByIndex(var_61_cvector, 0);
	var_85_float = GetByIndex(var_61_cvector, 2);
	@Rotate(var_84_float, var_85_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_46_bool = true;
}


// @pe
void func_5276(bool var_142_bool, object var_143_object)
{
	object var_145_object;
	var_143_object = var_145_object;
	func_5617(var_145_object);
	bool var_144_bool;
	if(var_144_bool != 0) {
		var_142_bool = true;
		return 0;
	}
	var_142_bool = false;
}


// @pe
void func_5533(bool var_107_bool)
{
	int var_109_int;
	func_4855(var_109_int, "ood9Aglaja3");
	if(var_109_int == 0) {
		var_107_bool = true;
		return 0;
	}
	var_107_bool = false;
}


void func_5792(void)
{
	@Trace("Adding diary entry");
	object var_87_object;
	@CreateDiaryEntry(var_87_object, 165, 1, 15412);
	bool var_92_bool; object var_93_object;
	var_87_object = var_93_object;
	func_5633(var_92_bool, var_93_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5286(bool var_233_bool)
{
	int var_235_int;
	func_4855(var_235_int, "ood7Aglaja1");
	if(var_235_int == 0) {
		var_233_bool = true;
		return 0;
	}
	var_233_bool = false;
}


// @pe
void func_3238(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_366_object, object var_367_object)
{
	var_0_object = var_367_object;
	var_1_object = var_366_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_373_bool;
		func_5509(var_1_object);
		if(var_373_bool != 0) {
			object var_379_object; object var_380_object;
			var_379_object = var_1_object;
			var_380_object = var_0_object;
			func_5167();
			func_3370(var_367_object, "Neutral");
			var_0_object->SetMessage(13802); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(13803, 15030, 15029); //@t
			var_0_object->AddReply(13815, 15042, 15041); //@t
		} else {
					func_3370(var_367_object, "Neutral");
					var_0_object->SetMessage(13818); //@t
					var_0_object->ClearReplies(); //@t
					bool var_405_bool;
					func_5521(var_1_object);
					if(var_405_bool != 0)
						var_0_object->AddReply(13819, 15047, 15046); //@t
					bool var_414_bool = false;
					bool var_415_bool;
					func_5473(var_1_object);
					if(var_415_bool != 0) {
						bool var_421_bool;
						func_5533(var_1_object);
						if(var_421_bool != 0)
							var_414_bool = true;
					}
					if(var_414_bool != 0)
						var_0_object->AddReply(13842, 15070, 15069); //@t
					bool var_430_bool;
					func_5545(var_1_object);
					if(var_430_bool != 0)
						var_0_object->AddReply(13852, 15080, 15079); //@t
					bool var_439_bool;
					func_5557(var_1_object);
					if(var_439_bool != 0)
						var_0_object->AddReply(13865, 15093, 15092); //@t
					var_0_object->AddReply(13880, -1, 15107); //@t
		}
	}
	for(;;) {
		bool var_395_bool;
		func_4912(var_395_bool);
		if(var_395_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4820(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_3369;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_3369:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xcaa";


// @pe
void func_5031(void)
{
	@SetVariable("ood7Aglaja4", 1);
}


// @pe
void func_5545(bool var_116_bool)
{
	int var_118_int;
	func_4855(var_118_int, "ood9Aglaja4");
	if(var_118_int == 0) {
		var_116_bool = true;
		return 0;
	}
	var_116_bool = false;
}


// @pe
void func_5037(void)
{
	@SetVariable("ood7Aglaja5", 1);
}


void func_5808(void)
{
	@Trace("Adding diary entry");
	object var_112_object;
	@CreateDiaryEntry(var_112_object, 166, 1, 15413);
	bool var_117_bool; object var_118_object;
	var_112_object = var_118_object;
	func_5633(var_117_bool, var_118_object, 165);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5298(bool var_268_bool)
{
	int var_270_int;
	func_4855(var_270_int, "ood7Aglaja2");
	if(var_270_int == 0) {
		var_268_bool = true;
		return 0;
	}
	var_268_bool = false;
}


void func_5043(void)
{
	object var_134_object;
	func_5662(var_134_object);
	object var_132_object;
	var_134_object = var_132_object;
	object var_133_object;
	var_132_object->FindMark(var_133_object, "d7q01AglajaFindLierSelf");
	if(var_133_object != 0)
		var_133_object->Remove();
	var_132_object->FindMark(var_133_object, "d7q01AglajaGotoBirdmaskSelf");
	if(var_133_object != 0)
		var_133_object->Remove();
	var_132_object->FindMark(var_133_object, "d7q01BirdmaskD");
	if(var_133_object != 0)
		var_133_object->Remove();
	var_132_object->FindMark(var_133_object, "d7q01BirdmaskM");
	if(var_133_object != 0)
		var_133_object->Remove();
	var_132_object->FindMark(var_133_object, "d7q01BirdmaskU");
	if(var_133_object != 0)
		var_133_object->Remove();
	func_5824();
	bool var_154_bool;
	func_4867(var_154_bool, "quest_d7_01", "completed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_5557(bool var_125_bool)
{
	int var_127_int;
	func_4855(var_127_int, "ood9Aglaja5");
	if(var_127_int == 0) {
		var_125_bool = true;
		return 0;
	}
	var_125_bool = false;
}


// @pe
void func_4285(object var_2_object, string var_112_string)
{
	bool var_113_bool;
	func_4912(var_113_bool);
	if(!var_113_bool) //@nz
		return 0;
	if(var_112_string == var_2_object)
		return 0;
	string var_116_string;
	func_4820(var_116_string);
	var_2_object = var_116_string;
}


// @pe
void func_5310(bool var_281_bool)
{
	int var_283_int;
	func_4855(var_283_int, "d7q01");
	if(var_283_int == 0) {
		var_281_bool = true;
		return 0;
	}
	var_281_bool = false;
}


void func_5824(void)
{
	@Trace("Adding diary entry");
	object var_146_object;
	@CreateDiaryEntry(var_146_object, 168, 1, 15415);
	bool var_151_bool; object var_152_object;
	var_146_object = var_152_object;
	func_5633(var_151_bool, var_152_object, 165);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5569(bool var_124_bool)
{
	int var_126_int;
	func_4855(var_126_int, "ood10Aglaja1");
	if(var_126_int == 0) {
		var_124_bool = true;
		return 0;
	}
	var_124_bool = false;
}


// @pe
void func_5322(bool var_349_bool)
{
	int var_351_int;
	func_4855(var_351_int, "ood7Aglaja3");
	if(var_351_int == 0) {
		var_349_bool = true;
		return 0;
	}
	var_349_bool = false;
}


// @pe
void func_5581(bool var_167_bool)
{
	int var_169_int;
	func_4855(var_169_int, "d10q01");
	if(var_169_int == 1000)
		var_167_bool = true;
	var_167_bool = false;
}


// @pe
void func_4816(void)
{
	@CameraSwitchToNormal();
}


void func_5840(void)
{
	@Trace("Adding diary entry");
	object var_174_object;
	@CreateDiaryEntry(var_174_object, 167, 1, 15414);
	bool var_179_bool; object var_180_object;
	var_174_object = var_180_object;
	func_5633(var_179_bool, var_180_object, 165);
}
EMIT "Stack[-1] = 0";


void func_4820(string var_30_string)
{
	@Trace("playing " + var_30_string);
	float var_33_float;
	float var_34_float;
	@lshGetAnimTimes(var_30_string, var_33_float, var_34_float);
	@lshPlayAnimation(var_33_float, var_34_float);
	@Trace("start: " + var_33_float);
	@Trace("end: " + var_34_float);
}


// @pe
void func_2773(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_473_object, object var_474_object)
{
	var_0_object = var_474_object;
	var_1_object = var_473_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_480_bool;
		func_5569(var_1_object);
		if(var_480_bool != 0) {
			object var_486_object; object var_487_object;
			var_486_object = var_1_object;
			var_487_object = var_0_object;
			func_5228();
			func_2880(var_474_object, "Neutral");
			var_0_object->SetMessage(12899); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(12900, 14103, 14102); //@t
		} else {
					func_2880(var_474_object, "Neutral");
					var_0_object->SetMessage(12905); //@t
					var_0_object->ClearReplies(); //@t
					bool var_509_bool;
					func_5605(var_1_object);
					if(var_509_bool != 0)
						var_0_object->AddReply(12906, 14109, 14108); //@t
					bool var_518_bool = false;
					bool var_519_bool;
					func_5581(var_1_object);
					if(var_519_bool != 0) {
						bool var_525_bool;
						func_5593(var_1_object);
						if(var_525_bool != 0)
							var_518_bool = true;
					}
					if(var_518_bool != 0)
						var_0_object->AddReply(12912, 14119, 14114); //@t
					var_0_object->AddReply(12911, -1, 14113); //@t
		}
	}
	for(;;) {
		bool var_499_bool;
		func_4912(var_499_bool);
		if(var_499_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4820(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2879;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2879:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xad9";


// @pe
void func_5334(bool var_334_bool)
{
	int var_336_int;
	func_4855(var_336_int, "d7q01");
	if(var_336_int == 1)
		var_334_bool = true;
	var_334_bool = false;
}


// @pe
void func_5593(bool var_173_bool)
{
	int var_175_int;
	func_4855(var_175_int, "ood10Aglaja2");
	if(var_175_int == 0) {
		var_173_bool = true;
		return 0;
	}
	var_173_bool = false;
}


void func_5856(void)
{
	@Trace("Adding diary entry");
	object var_36_object;
	@CreateDiaryEntry(var_36_object, 175, 1, 15434);
	bool var_41_bool; object var_42_object;
	var_36_object = var_42_object;
	func_5633(var_41_bool, var_42_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5346(bool var_340_bool)
{
	int var_342_int;
	func_4855(var_342_int, "ood7Aglaja4");
	if(var_342_int == 0) {
		var_340_bool = true;
		return 0;
	}
	var_340_bool = false;
}


// @pe
void func_5605(bool var_157_bool)
{
	int var_159_int;
	func_4855(var_159_int, "d10q01");
	if(var_159_int == 3)
		var_157_bool = true;
	var_157_bool = false;
}


void func_4838(void)
{
	bool var_28_bool;
	func_4912(var_28_bool);
	if(var_28_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_5094(void)
{
	@SetVariable("d7q02", 3);
}


// @pe
void func_5100(void)
{
	@SetVariable("d8q01", 1);
	func_5856();
	func_5872();
	bool var_69_bool;
	func_4867(var_69_bool, "quest_d8_01", "block_well");
}


void func_4845(cvector var_71_cvector, cvector var_72_cvector)
{
	float var_75_float = sqrt(var_72_cvector | var_72_cvector);
	if(var_75_float < 0.000001)
		var_71_cvector = [0.0, 0.0, 0.0];
	var_71_cvector = var_72_cvector / var_75_float;
}


// @pe
void func_5358(bool var_307_bool, object var_308_object)
{
	bool var_309_bool = false;
	bool var_310_bool = false;
	bool var_311_bool; object var_312_object;
	var_308_object = var_312_object;
	func_4860(var_311_bool, var_312_object, "d7q01_dreport");
	if(var_311_bool != 0) {
		bool var_318_bool; object var_319_object;
		var_308_object = var_319_object;
		func_4860(var_318_bool, var_319_object, "d7q01_mreport");
		if(var_318_bool != 0)
			var_310_bool = true;
	}
	if(var_310_bool != 0) {
		bool var_321_bool; object var_322_object;
		var_308_object = var_322_object;
		func_4860(var_321_bool, var_322_object, "d7q01_ureport");
		if(var_321_bool != 0)
			var_309_bool = true;
	}
	if(var_309_bool != 0) {
		var_307_bool = true;
		return 0;
	}
	var_307_bool = false;
}


void func_5872(void)
{
	@Trace("Adding diary entry");
	object var_61_object;
	@CreateDiaryEntry(var_61_object, 176, 1, 15435);
	bool var_66_bool; object var_67_object;
	var_61_object = var_67_object;
	func_5633(var_66_bool, var_67_object, 175);
}
EMIT "Stack[-1] = 0";


// @pe
void func_5617(bool var_144_bool)
{
	var_144_bool = false;
}


void func_5620(object var_50_object)
{
	object var_52_object;
	@GetDiaryRoot(var_52_object);
	if(!var_52_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_50_object = false;
	}
	var_52_object = var_50_object;
}
EMIT "Stack[-1] = 0";


void func_4855(int var_102_int, string var_103_string)
{
	int var_105_int;
	@GetVariable(var_103_string, var_105_int);
	var_105_int = var_102_int;
}


void func_4860(bool var_311_bool, object var_312_object, string var_313_string)
{
	int var_316_int;
	@GetInvItemByName(var_316_int, var_313_string);
	bool var_317_bool;
	var_312_object->HasItem(var_316_int, var_317_bool);
	var_317_bool = var_311_bool;
}


// @pe
void func_5117(void)
{
	@SetVariable("ood8Aglaja1", 1);
}


