// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			StopLSHSpeechIfActive();
			if(var_37_cvector == 22226) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				OnQuest_b7q01_AdvanceToStarshina();
				object var_85_object; object var_86_object;
				var_85_object = var_1_object;
				var_86_object = var_0_object;
				func_4649();
				object var_97_object; object var_98_object;
				var_97_object = var_1_object;
				var_98_object = var_0_object;
				Set_map_chertez_state_atleast_1();
				object var_109_object = var_1_object;
				ShowChertezMapToActor(var_0_object);
			}
			if(var_37_cvector == 22533) {
				object var_137_object; object var_138_object;
				var_137_object = var_1_object;
				var_138_object = var_0_object;
				OnQuest_b7q03_Start_Theater();
			}
			if(var_37_cvector == 22241) {
				object var_181_object; object var_182_object;
				var_181_object = var_1_object;
				var_182_object = var_0_object;
				OnQuest_b7q01_Complete();
				object var_194_object; object var_195_object;
				var_194_object = var_1_object;
				var_195_object = var_0_object;
				Set_map_chertez_state_atleast_2();
				object var_204_object = var_1_object;
				ShowChertezMapToActor(var_0_object);
			}
			if(var_37_cvector == 32055) {
				object var_208_object; object var_209_object;
				var_208_object = var_1_object;
				var_209_object = var_0_object;
				OnQuest_b7q01_Complete();
				object var_210_object; object var_211_object;
				var_210_object = var_1_object;
				var_211_object = var_0_object;
				Set_map_chertez_state_atleast_2();
				object var_212_object = var_1_object;
				ShowChertezMapToActor(var_0_object);
			}
			if(var_37_cvector == 22537) {
				object var_216_object; object var_217_object;
				var_216_object = var_1_object;
				var_217_object = var_0_object;
				OnQuest_b7q03_Complete();
			}
			if(var_37_cvector == 32066) {
				object var_231_object; object var_232_object;
				var_231_object = var_1_object;
				var_232_object = var_0_object;
				OnQuest_b7q03_Complete();
			}
			if(var_36_bool == 22225) {
				bool var_235_bool;
				IsB7q01_State6(var_1_object);
				if(var_235_bool != 0) {
					SetCurrentMood_t1_DN7(var_37_cvector, "Threat");
					var_0_object->SetMessage(521012)  /* С чем пришел сюда тот, кого называют Гаруспиком, Служителем и Потрошителем? */; //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530692, 29681, 31984)  /* Хотел рассказать, чего ради я совершил все, что совершил. */; //@t
					var_0_object->AddReply(528310, -1, 29680)  /* Хотел представиться. Видно, это уже ни к чему. */; //@t
					return 0;
				}
				bool var_265_bool = false;
				bool var_266_bool = false;
				bool var_267_bool;
				IsB7q01_DialogCompleted(var_1_object);
				if(var_267_bool != 0) {
					bool var_273_bool;
					IsOob7Aglaja1_NotYet(var_1_object);
					if(var_273_bool != 0)
						var_266_bool = true;
				}
				if(var_266_bool != 0) {
					bool var_279_bool;
					ActorHasBurahSerum(var_279_bool, var_1_object);
					if(var_279_bool != 0)
						var_265_bool = true;
				}
				if(var_265_bool != 0) {
					object var_288_object; object var_289_object;
					var_288_object = var_1_object;
					var_289_object = var_0_object;
					Set_oob7Aglaja1();
					SetCurrentMood_t1_DN7(var_37_cvector, "Neutral");
					var_0_object->SetMessage(521347)  /* Осталось последнее дело. И сделать его нужно до завершения этого дня. Я слышала, ты смель… */; //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530713, 32015, 32014)  /* Это так. */; //@t
					var_0_object->AddReply(530721, 32015, 32022)  /* Почему ты спрашиваешь? */; //@t
					return 0;
				}
				SetCurrentMood_t1_DN7(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521014)  /* Зачем ты так пристально смотришь? */; //@t
				var_0_object->ClearReplies(); //@t
				bool var_302_bool = false;
				bool var_303_bool;
				ActorHasBurahSerum(var_303_bool, var_1_object);
				if(var_303_bool != 0) {
					bool var_305_bool;
					IsB7q01_State8(var_1_object);
					if(var_305_bool != 0)
						var_302_bool = true;
				}
				if(var_302_bool != 0)
					var_0_object->AddReply(521043, 22240, 22239)  /* Я вернулся. Я... сделал панацею. Вот она. Старшина дал мне для нее горсть дымящейся крови… */; //@t
				bool var_314_bool = true;
				bool var_315_bool = false;
				bool var_316_bool = false;
				bool var_317_bool;
				IsB7q03_State2(var_1_object);
				if(var_317_bool != 0) {
					bool var_323_bool;
					IsActor_NotDiseased(var_323_bool, var_1_object);
					if(var_323_bool != 0)
						var_316_bool = true;
				}
				if(var_316_bool != 0) {
					bool var_331_bool;
					IsB7q03_DialogCompleted(var_1_object);
					if(!var_331_bool) //@nz
						var_315_bool = true;
				}
				if(var_315_bool != 1) {
					bool var_338_bool = false;
					bool var_339_bool;
					IsB7q03SerumWorks_Set(var_1_object);
					if(var_339_bool != 0) {
						bool var_345_bool;
						IsB7q03_DialogCompleted(var_1_object);
						if(!var_345_bool) //@nz
							var_338_bool = true;
					}
					if(var_338_bool != 1)
						var_314_bool = false;
				}
				if(var_314_bool != 0)
					var_0_object->AddReply(521348, 22536, 22535)  /* Я вернулся. Панацея действует. Похоже, от болезни не осталось и следа. */; //@t
				bool var_351_bool = false;
				bool var_352_bool;
				IsB7q03_State2(var_1_object);
				if(var_352_bool != 0) {
					bool var_354_bool;
					IsActor_NotDiseased(var_354_bool, var_1_object);
					if(!var_354_bool) //@nz
						var_351_bool = true;
				}
				if(var_351_bool != 0)
					var_0_object->AddReply(521360, 22548, 22547)  /* Похоже, не удается мне справиться с болезнью... */; //@t
				var_0_object->AddReply(521015, -1, 22228)  /* Я всегда так смотрю. */; //@t
				var_0_object->AddReply(528324, -1, 29694)  /* А ты? */; //@t
				return 0;
			}
			if(var_36_bool == 22548) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Threat");
				var_0_object->SetMessage(521361)  /* Да, выглядишь ты плохо... Значит, панацея не действует? */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521362, 32067, 22549)  /* Ты этому рада? */; //@t
				var_0_object->AddReply(530760, 32069, 32068)  /* Не знаю. Кажется, я забыл ее выпить... */; //@t
				return 0;
			}
			if(var_36_bool == 32067) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Threat");
				var_0_object->SetMessage(530759)  /* Разве похоже, что я этому рада? */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530762, 32069, 32070)  /* Нет. Не похоже... */; //@t
				var_0_object->AddReply(530763, 32069, 32071)  /* Кто вас знает, инквизиторов... Вы умеете скрывать свои истинные чувства. */; //@t
				return 0;
			}
			if(var_36_bool == 32069) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530761)  /* Ты выбрал неудачный момент для шуток... По-моему, самое время вернуться к Исполнителям. А… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530764, -1, 32074)  /* Не нужно. Я возвращаюсь в театр. */; //@t
				var_0_object->AddReply(530765, -1, 32075)  /* Мне все равно. */; //@t
				return 0;
			}
			if(var_36_bool == 22536) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521349)  /* Так... Значит, можно идти на покой. Но я все-таки попробую побороться. Сколько ткани тебе… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530749, 32057, 32056)  /* Ничтожно мало. Старшина дал мне горсть. */; //@t
				return 0;
			}
			if(var_36_bool == 32057) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Isee");
				var_0_object->SetMessage(530750)  /* Мне многое рассказали об этих бойнях... знаешь, вообще чем больше я изучаю материалы по э… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530751, 32062, 32058)  /* Согласен. */; //@t
				var_0_object->AddReply(530752, 32060, 32059)  /* Техники инквизиторов? */; //@t
				return 0;
			}
			if(var_36_bool == 32062) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Isee");
				var_0_object->SetMessage(530754)  /* Скажи, ты хотел бы сохранить этот город? */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530755, 32060, 32063)  /* Да. Я здесь вырос. Здесь похоронен мой отец. Здесь живет народ, который чтит мое имя. */; //@t
				var_0_object->AddReply(530756, 32065, 32064)  /* Уже нет. Теперь он кажется мне отвратительным. */; //@t
				return 0;
			}
			if(var_36_bool == 32065) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Threat");
				var_0_object->SetMessage(530757)  /* Тогда нам не по пути. Но если окажется, что в глубине души ты добрее - я буду рада твоей … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530758, -1, 32066)  /* Я учту. */; //@t
				return 0;
			}
			if(var_36_bool == 32060) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Threat");
				var_0_object->SetMessage(530753)  /* Вот что, Артемий Бурах. Приходи сюда через некоторое время. Лучше завтра. Может быть, я р… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521350, -1, 22537)  /* Хорошо. Я приду позже. */; //@t
				return 0;
			}
			if(var_36_bool == 22240) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Isee");
				var_0_object->SetMessage(521044)  /* Красивая... Дай-ка я посмотрю на нее пристальнее... Никогда не думала, что она будет выгл… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530731, 32036, 32035)  /* О чем ты? */; //@t
				return 0;
			}
			if(var_36_bool == 32036) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Isee");
				var_0_object->SetMessage(530732)  /* Да о смерти... */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530733, 32038, 32037)  /* Она несет жизнь, а не смерть. И благодарить за нее я должен тебя. */; //@t
				var_0_object->AddReply(530741, 32046, 32045)  /* Значит, Виктор был прав! То, что панацея сделана не тобой - Власти используют как предлог… */; //@t
				return 0;
			}
			if(var_36_bool == 32046) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530742)  /* Ах, забудь... было бы желание, предлог-то найдется... А Виктор это Каин? Супруг Нины? Да,… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530743, 32048, 32047)  /* Никто не посмеет сказать, что панацея сделана без твоего участия. */; //@t
				var_0_object->AddReply(530745, 32048, 32049)  /* Я скажу, что ее сделала ты. Ты открыла мне путь к гибриду быка и человека. */; //@t
				return 0;
			}
			if(var_36_bool == 32048) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530744)  /* Случайность. К тому же Данковский рассказывал мне о твоей работе, мне осталось только при… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530746, 32038, 32051)  /* Это твоя победа. */; //@t
				var_0_object->AddReply(530747, 32038, 32052)  /* Спасибо тебе. */; //@t
				return 0;
			}
			if(var_36_bool == 32038) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530734)  /* Меня не за что благодарить. Тем более, материал слишком редкий... пока в столице сделают … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530735, 32041, 32039)  /* Подожди. Если бы не ты - я не выполнил бы долга перед отцом. Ты не знаешь, как это было в… */; //@t
				return 0;
			}
			if(var_36_bool == 32041) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530737)  /* Знаю. Но не спеши. Может быть, панацея и не имеет к твоему удургу никакого касательства... */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530738, 32043, 32042)  /* Ты веришь в удурга? */; //@t
				return 0;
			}
			if(var_36_bool == 32043) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Isee");
				var_0_object->SetMessage(530739)  /* Я верю в тебя. */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530740, 32040, 32044)  /* Это не ответ. Веришь ли ты в то, что Искомый - удург? Принимаешь ли всерьез степные суеве… */; //@t
				return 0;
			}
			if(var_36_bool == 32040) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Isee");
				var_0_object->SetMessage(530736)  /* Безусловно. Все на земле имеет скрытый смысл. Солгать невозможно. Невозможно придумать фа… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521045, -1, 22241)  /* Прими мою благодарность... Аглая Лилич. */; //@t
				var_0_object->AddReply(530748, -1, 32055)  /* Я знаю, что значил для тебя этот шаг. И я этого не забуду. */; //@t
				return 0;
			}
			if(var_36_bool == 32015) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Isee");
				var_0_object->SetMessage(530714)  /* ... Чтобы объявить Властям о том, что средство от болезни найдено... то есть, о том, что … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530722, 32024, 32023)  /* Я так чувствую, тебе лучше, чтобы она оказалась недействительной? */; //@t
				var_0_object->AddReply(530715, 32017, 32016)  /* Да. */; //@t
				return 0;
			}
			if(var_36_bool == 32024) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Isee");
				var_0_object->SetMessage(530723)  /* Нет, так дело не пойдет. Если она будет признана недействительной, в моем существовании о… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530724, 32026, 32025)  /* Понимаю. И сколько у нас времени? */; //@t
				return 0;
			}
			if(var_36_bool == 32026) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Threat");
				var_0_object->SetMessage(530725)  /* Пока они раскачаются? Недели две... Нет, на этом городе, скорее всего, уже поставлен крес… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530726, 32029, 32027)  /* Нет других городов. Мне важен только этот. */; //@t
				return 0;
			}
			if(var_36_bool == 32029) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Threat");
				var_0_object->SetMessage(530728)  /* Мне тоже! Слишком даже важен... Но как бы там ни было, долгом я пренебрегать не хочу. Ты … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530729, 32017, 32030)  /* Да. */; //@t
				var_0_object->AddReply(530730, -1, 32031)  /* Не могу. Я слишком измотан. */; //@t
				return 0;
			}
			if(var_36_bool == 32017) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Threat");
				var_0_object->SetMessage(530716)  /* Тогда тебе придется заразиться и дождаться... критической стадии. При свидетелях. Выпьешь… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530717, 32019, 32018)  /* Как мы это устроим? */; //@t
				return 0;
			}
			if(var_36_bool == 32019) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530718)  /* Я предупредила Исполнителей, которые дежурят в госпитале. Чем там раньше было это здание?… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521346, -1, 22533)  /* Я знаю. */; //@t
				return 0;
			}
			if(var_36_bool == 29681) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Threat");
				var_0_object->SetMessage(528311)  /* Как интересно! И чего же ради? Говорите, меня сейчас чрезвычайно интересуют вопросы самоо… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528312, 29683, 29682)  /* Странный оборот принимает наша беседа... */; //@t
				var_0_object->AddReply(530693, 29683, 31985)  /* Я думал, это будет допрос... Выходит, исповедь? */; //@t
				return 0;
			}
			if(var_36_bool == 29683) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Isee");
				var_0_object->SetMessage(528313)  /* Отнюдь. Вы получили от вашего отца приглашение на его собственные похороны. По приезде уб… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528314, 29685, 29684)  /* Это так. */; //@t
				var_0_object->AddReply(530694, 29685, 31986)  /* Ну, это не вся правда. */; //@t
				return 0;
			}
			if(var_36_bool == 29685) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Isee");
				var_0_object->SetMessage(528315)  /* Значит, они заставили вас изобретать панацею? Неожиданный ход... */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528316, 29687, 29686)  /* Заставили? Я сам так решил. */; //@t
				var_0_object->AddReply(530695, 29687, 31988)  /* Как можно было меня заставить? */; //@t
				return 0;
			}
			if(var_36_bool == 29687) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Isee");
				var_0_object->SetMessage(528317)  /* Все обстоятельства вели вас к этому. Изобретение панацеи вы сочли своей основной задачей … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528318, 29689, 29688)  /* Но в чем же моя вина? */; //@t
				var_0_object->AddReply(530696, 31991, 31990)  /* Не было бы иного пути исцелить обозначенного. */; //@t
				return 0;
			}
			if(var_36_bool == 31991) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Threat");
				var_0_object->SetMessage(530697)  /* Кто это вам сказал? Вы даже не знаете, кто это - а я предполагаю, что это и вовсе не чело… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530698, 29689, 31992)  /* Да, это похоже на правду. Но к чему искать виноватого... */; //@t
				return 0;
			}
			if(var_36_bool == 29689) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Threat");
				var_0_object->SetMessage(528319)  /* Ах, да никто здесь ни в чем не виноват! Разве ты в чем-либо виноват... Власти тебя обману… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528320, 29691, 29690)  /* Я делаю то, что считаю должным. Я выбираю свой путь. Если кому-то угодно использовать мои… */; //@t
				var_0_object->AddReply(530699, 29691, 31995)  /* Пусть они даже предвидят мои шаги и включают их в свои расчеты. Я все равно останусь своб… */; //@t
				return 0;
			}
			if(var_36_bool == 29691) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Threat");
				var_0_object->SetMessage(528321)  /* ...Ну и хладнокровие. Или я не понимаю очевидного?... Человек, послушай! Тобой играли! Ил… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528322, 29693, 29692)  /* Если кому-то угодно сделать мою игру частью своей партии - это на его совести. Я отвечаю … */; //@t
				var_0_object->AddReply(530704, 29693, 32001)  /* Неужели я буду менять свои решения только ради удовольствия испортить кому-то интригу? За… */; //@t
				return 0;
			}
			if(var_36_bool == 29693) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Confusion");
				var_0_object->SetMessage(528323)  /* ... Это достойный ответ. */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530700, 31998, 31997)  /* Ты выглядишь потрясенной. Отчего? */; //@t
				var_0_object->AddReply(530705, 31998, 32003)  /* Да. Его главное достоинство в том, что он честный. */; //@t
				return 0;
			}
			if(var_36_bool == 31998) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530701)  /* Странно, но эта простая мысль раньше никогда не приходила мне в голову. Неужели это так п… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530702, 32000, 31999)  /* Быть самим собой - это совсем не просто. */; //@t
				var_0_object->AddReply(530710, 32000, 32008)  /* Так бывает с очень умными людьми. И с профессионалами, которым чуждо все человеческое. */; //@t
				return 0;
			}
			if(var_36_bool == 32000) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530703)  /* ...Невероятно. Позвольте, я посмотрю на вас внимательнее. А может быть вы посланы мне суд… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530706, 32005, 32004)  /* Мы можем быть на ты. Так будет проще. */; //@t
				var_0_object->AddReply(530711, 32005, 32010)  /* Я не тороплюсь. */; //@t
				return 0;
			}
			if(var_36_bool == 32005) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530707)  /* ... Да ...вот мое решение. Бакалавр сказал мне - тебе нужен гибрид быка и человека. У мен… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530708, 32007, 32006)  /* ...Не может этого быть! */; //@t
				var_0_object->AddReply(530712, 32007, 32011)  /* Так, так... */; //@t
				return 0;
			}
			if(var_36_bool == 32007) {
				SetCurrentMood_t1_DN7(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530709)  /* ...Туда возвращаются все, кто выжил во время блокады Термитника. Воспользуйся этим. Войди… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521013, -1, 22226)  /* ... Хорошо. Я не понимаю, что сейчас случилось - но я иду. */; //@t
				return 0;
			}
			var_3_string = true;
			bool var_667_bool;
			IsLSH(var_667_bool);
			if(var_667_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x142";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			StopLSHSpeechIfActive();
			if(var_37_cvector == 22552) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				OnQuest_b8q01_Start();
			}
			if(var_37_cvector == 22557) {
				object var_79_object; object var_80_object;
				var_79_object = var_1_object;
				var_80_object = var_0_object;
				OnQuest_b8q01_Start();
			}
			if(var_37_cvector == 22616) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				OnQuest_b8q01_Complete();
			}
			if(var_37_cvector == 22671) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				Set_oob8Aglaja2();
			}
			if(var_36_bool == 22551) {
				bool var_107_bool;
				IsOob8Aglaja1_NotYet(var_1_object);
				if(var_107_bool != 0) {
					object var_115_object; object var_116_object;
					var_115_object = var_1_object;
					var_116_object = var_0_object;
					Set_oob8Aglaja1();
					SetCurrentMood_t3_DN8(var_37_cvector, "Threat");
					var_0_object->SetMessage(521373)  /* Слушай. Теперь я расскажу тебе о моих целях и посвящу тебя в свой план. Так уж странно сл… */; //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530766, 32077, 32076)  /* Я поверю тебе. */; //@t
					var_0_object->AddReply(530781, 32077, 32091)  /* Говори. */; //@t
					return 0;
				}
				SetCurrentMood_t3_DN8(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521376)  /* Я рада, что ты здесь. И все-таки тебе не стоит ходить сюда часто. */; //@t
				var_0_object->ClearReplies(); //@t
				bool var_145_bool;
				IsB8q01_NotStarted(var_1_object);
				if(var_145_bool != 0)
					var_0_object->AddReply(521377, 22556, 22555)  /* Я пойду в Бойни. Спрошу у Старшины про кровь. */; //@t
				bool var_154_bool;
				IsB8q01_State7(var_1_object);
				if(var_154_bool != 0)
					var_0_object->AddReply(521436, 22615, 22614)  /* Я был в Бойнях. То, что я там узнал, трудно воспринять человеку неподготовленному. */; //@t
				bool var_163_bool = false;
				bool var_164_bool;
				IsB8q03_ActiveButNotFinal(var_1_object);
				if(var_164_bool != 0) {
					bool var_180_bool;
					IsOob8Aglaja2_NotYet(var_1_object);
					if(var_180_bool != 0)
						var_163_bool = true;
				}
				if(var_163_bool != 0)
					var_0_object->AddReply(521510, 22672, 22671)  /* У Инквизитора ведь исключительное право наказания преступников? У меня есть сведения по д… */; //@t
				var_0_object->AddReply(521380, -1, 22558)  /* Ничего. Я пришел по делу. */; //@t
				var_0_object->AddReply(530775, -1, 32085)  /* Понимаю тебя. */; //@t
				return 0;
			}
			if(var_36_bool == 22672) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Arrogance");
				var_0_object->SetMessage(521511)  /* Мне не нравится начало этого разговора. */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521512, 32155, 22673)  /* Нельзя казнить старшего Ольгимского. Виноват Младший Влад. Он принял это решение самоупра… */; //@t
				var_0_object->AddReply(530845, 32157, 32159)  /* Почему? */; //@t
				return 0;
			}
			if(var_36_bool == 32155) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Arrogance");
				var_0_object->SetMessage(530841)  /* Артемий, я хочу, чтобы мы договорились сейчас - и больше уже не возвращались к этому разг… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530842, 32157, 32156)  /* И тем не менее... */; //@t
				var_0_object->AddReply(530846, 32166, 32161)  /* Хорошо. Я все понял. */; //@t
				return 0;
			}
			if(var_36_bool == 32157) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Threat");
				var_0_object->SetMessage(530843)  /* Нет. У нас будут только личные отношения. Я не хочу, чтобы ты занимался политикой до те п… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530844, 32163, 32158)  /* Я просто сообщаю факт. */; //@t
				var_0_object->AddReply(530847, 32166, 32162)  /* Я понимаю. */; //@t
				return 0;
			}
			if(var_36_bool == 32163) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Threat");
				var_0_object->SetMessage(530848)  /* Мне известны все факты. В моем распоряжении около двенадцати тысяч фактов только по делу … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530849, 32166, 32164)  /* Это мой путь. Не надо подталкивать меня в спину! */; //@t
				var_0_object->AddReply(530850, 32166, 32165)  /* Это не входит в мои планы. */; //@t
				return 0;
			}
			if(var_36_bool == 32166) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Threat");
				var_0_object->SetMessage(530851)  /* Твоя власть - власть знающих. Власть брахманов, власть жрецов. Я исполняю волю манипулято… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530852, -1, 32170)  /* Я еще буду думать об этом. */; //@t
				var_0_object->AddReply(530853, -1, 32171)  /* Мне не по душе твои намеки, женщина. */; //@t
				return 0;
			}
			if(var_36_bool == 22615) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Arrogance");
				var_0_object->SetMessage(521437)  /* Я подготовлена достаточно. Мне известна мифология вашего народа. Я знаю предания этой зем… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530824, 32136, 32135)  /* Поселение изрыто тоннелями. Они простираются до реки Горхон. В них уже много сотен лет сл… */; //@t
				return 0;
			}
			if(var_36_bool == 32136) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Arrogance");
				var_0_object->SetMessage(530825)  /* Ты не удивил меня. Я читала об этом, когда готовилась к этой поездке. Больше того - я точ… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530826, 32141, 32137)  /* Эта кровь живая. Значит, город питает ее. Так же, как и она, наверно, питает город. Этот … */; //@t
				return 0;
			}
			if(var_36_bool == 32141) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530830)  /* ... Ничего себе... С расчетами - да. Впрочем, и со сведениями тоже. Вот почему они не коп… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530831, 32143, 32142)  /* Как ты это объяснишь? */; //@t
				var_0_object->AddReply(530834, 32150, 32145)  /* Какого же? */; //@t
				return 0;
			}
			if(var_36_bool == 32150) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530838)  /* Ну, это скучно. Я решила, что у Старшины припрятан живой аврокс, возможно, раненый... Из … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530839, 32143, 32151)  /* Это еще кто такие? */; //@t
				return 0;
			}
			if(var_36_bool == 32143) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530832)  /* Постой... пусть это интересно с точки зрения природного феномена. Но для тебя это значит … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530833, 32138, 32144)  /* 'Тело, вместившее в себя мир'. */; //@t
				return 0;
			}
			if(var_36_bool == 32138) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530827)  /* Я просто трактую слова Исидора. Вот, у меня записано: он знал, что названному грозит опас… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530828, 32140, 32139)  /* Все так... Это правда. */; //@t
				var_0_object->AddReply(530840, 32140, 32153)  /* Чушь какая-то! */; //@t
				return 0;
			}
			if(var_36_bool == 32140) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530829)  /* С моей точки зрения все иначе. Но я догадываюсь, что Исидор мог рассуждать именно так. Он… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521438, -1, 22616)  /* Да... это похоже на отца. Если посмотреть на все его глазами... это кажется вполне правдо… */; //@t
				return 0;
			}
			if(var_36_bool == 22556) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Neutral");
				var_0_object->SetMessage(521378)  /* Кто, кроме тебя еще сможет туда войти? */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530790, 32104, 32103)  /* Пропустят ли меня? */; //@t
				return 0;
			}
			if(var_36_bool == 32104) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530791)  /* О, после вчерашнего - конечно, пропустят. Ты ведь заинтересовал Старшину. И напугал. */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530792, 32106, 32105)  /* Откуда ты знаешь? */; //@t
				return 0;
			}
			if(var_36_bool == 32106) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Isee");
				var_0_object->SetMessage(530793)  /* Он послал за советом к Ольгимскому. У них было целое совещание. Я взялась за Влада и он с… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530794, 32108, 32107)  /* Если он напуган - что мешает ему закрыть Бойни и ждать, пока я погибну своей смертью? */; //@t
				return 0;
			}
			if(var_36_bool == 32108) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530795)  /* Тогда попробуй действовать через Термитник. Тая Тычик умеет открывать Бойни. Эта девочка … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521379, -1, 22557)  /* Хорошо. Я попробую. */; //@t
				return 0;
			}
			if(var_36_bool == 32077) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Threat");
				var_0_object->SetMessage(530767)  /* Больше всего мне хочется сохранить этот город. Скажу тебе правду - я его не люблю. Я дога… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530768, 32079, 32078)  /* Понимаю. */; //@t
				var_0_object->AddReply(530787, 32100, 32099)  /* Почему - безнадежное? */; //@t
				return 0;
			}
			if(var_36_bool == 32100) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530788)  /* Для меня - нет. Для них - да, безнадежное. Могила, куда можно безнаказанно сунуть все, чт… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530789, 32079, 32101)  /* Как ты намерена поступить? */; //@t
				return 0;
			}
			if(var_36_bool == 32079) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530769)  /* Источник болезни мы найдем и уничтожим. Это вопрос двух-трех дней. Заболевших можем исцел… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530770, 32081, 32080)  /* Это так. */; //@t
				return 0;
			}
			if(var_36_bool == 32081) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530771)  /* Говорят, позавчера привели из Степи и принесли в жертву аврокса. Одонги говорят, что посл… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530772, 32083, 32082)  /* Это так. */; //@t
				return 0;
			}
			if(var_36_bool == 32083) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530773)  /* Однако вот что смутило меня. Говорят, что аврокс дается в руки только истинному Служителю… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530774, 32086, 32084)  /* Интересный вывод... А ведь и правда... */; //@t
				var_0_object->AddReply(530782, 32086, 32093)  /* Да. Отец говорил то же. */; //@t
				return 0;
			}
			if(var_36_bool == 32086) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530776)  /* Старшина следит за ритуалом и время от времени совершает Обряд - расчленяет быка так, как… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530777, 32088, 32087)  /* Да. Очень похоже на правду. */; //@t
				return 0;
			}
			if(var_36_bool == 32088) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Isee");
				var_0_object->SetMessage(530778)  /* Однако позавчерашний ритуал не подействовал. Уклад ропщет. Старшиной недовольны. Значит, … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530779, 32090, 32089)  /* Но откуда тогда кровь? */; //@t
				return 0;
			}
			if(var_36_bool == 32090) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Isee");
				var_0_object->SetMessage(530780)  /* Это и интересно. Ритуал был позавчера. С момента его завершения должно было пройти много … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530783, 32096, 32095)  /* Это так. */; //@t
				return 0;
			}
			if(var_36_bool == 32096) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Isee");
				var_0_object->SetMessage(530784)  /* Ты спроси Старшину, откуда он ее взял? Сдается мне, Бойни скрывают много тайн... и ты, то… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530796, 32110, 32109)  /* Я последую твоему смелому совету. */; //@t
				var_0_object->AddReply(521375, 32113, 22553)  /* Ты мало смыслишь в этих делах, женщина. Вряд ли твоя версия верна. */; //@t
				return 0;
			}
			if(var_36_bool == 32113) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530800)  /* Ну и ну... Кажется, никто еще не осмеливался назвать меня 'женщина'. */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530801, -1, 32114)  /* Все когда-нибудь бывает в первый раз. */; //@t
				var_0_object->AddReply(530802, -1, 32115)  /* Я не хотел задеть тебя. */; //@t
				return 0;
			}
			if(var_36_bool == 32110) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Threat");
				var_0_object->SetMessage(530797)  /* Удачи тебе, Артемий Бурах. Остерегайся Старшину. Он боится тебя, но он из тех, кто в стра… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530798, 32112, 32111)  /* Что если Бойни будут закрыты? */; //@t
				return 0;
			}
			if(var_36_bool == 32112) {
				SetCurrentMood_t3_DN8(var_37_cvector, "Threat");
				var_0_object->SetMessage(530799)  /* Тогда действуй через Термитник. Я вчера говорила с этой девочкой, Таей Тычик. Она обладае… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521374, -1, 22552)  /* Жди меня. Я вернусь. */; //@t
				return 0;
			}
			var_3_string = true;
			bool var_424_bool;
			IsLSH(var_424_bool);
			if(var_424_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x612";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			StopLSHSpeechIfActive();
			if(var_37_cvector == 24419) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				Set_oob11Aglaja2();
			}
			if(var_36_bool == 23236) {
				bool var_48_bool;
				IsOob11Aglaja1_NotYet(var_1_object);
				if(var_48_bool != 0) {
					object var_56_object; object var_57_object;
					var_56_object = var_1_object;
					var_57_object = var_0_object;
					Set_oob11Aglaja1();
					SetCurrentMood_t5_DN11(var_37_cvector, "Neutral");
					var_0_object->SetMessage(522067)  /* Что же? Ты узнал, как добыть кровь? */; //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523208, 24405, 24404)  /* Они ждут жертвы. */; //@t
					var_0_object->AddReply(523226, 24424, 24423)  /* Почему ты все время спрашиваешь об этом? */; //@t
					var_0_object->AddReply(523222, -1, 24418)  /* Тебе не должно быть до этого никакого дела, инквизитор. */; //@t
					return 0;
				}
				SetCurrentMood_t5_DN11(var_37_cvector, "Neutral");
				var_0_object->SetMessage(522071)  /* Любое слово, которое я скажу тебе, в конечном итоге обернется против нас. */; //@t
				var_0_object->ClearReplies(); //@t
				bool var_89_bool;
				IsOob11Aglaja2_NotYet(var_1_object);
				if(var_89_bool != 0)
					var_0_object->AddReply(523223, 24425, 24419)  /* Что за жертвы они ждут от меня? */; //@t
				var_0_object->AddReply(522072, -1, 23241)  /* Тогда я не буду спрашивать тебя ни о чем. */; //@t
				return 0;
			}
			if(var_36_bool == 24425) {
				SetCurrentMood_t5_DN11(var_37_cvector, "Confusion");
				var_0_object->SetMessage(523228)  /* Я не хочу говорить об этом. Варварство, дикость и суеверие. Не удастся ли как-нибудь добы… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523229, 24428, 24426)  /* Почему ты так этого хочешь? */; //@t
				return 0;
			}
			if(var_36_bool == 24428) {
				SetCurrentMood_t5_DN11(var_37_cvector, "Confusion");
				var_0_object->SetMessage(523231)  /* Я хочу остановить мор. Спасти зараженных твоей панацеей. Для этого ее нужно много, не так… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523232, -1, 24429)  /* Понимаю. */; //@t
				return 0;
			}
			if(var_36_bool == 24424) {
				SetCurrentMood_t5_DN11(var_37_cvector, "Arrogance");
				var_0_object->SetMessage(523227)  /* Да потому что я хочу, чтобы этот город остался в живых. Это мой долг. Властям нужно одно … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523235, 24411, 24433)  /* Ну и как добыть эту кровь, не принося никого на алтарь? ... Или ничего? Чего они вообще о… */; //@t
				var_0_object->AddReply(523236, -1, 24434)  /* Ничего. Близок час. Скоро я убью, кого они хотят. */; //@t
				return 0;
			}
			if(var_36_bool == 24405) {
				SetCurrentMood_t5_DN11(var_37_cvector, "Confusion");
				var_0_object->SetMessage(523209)  /* Какой жертвы они ждут? */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523210, 24409, 24406)  /* Соразмерной. Не знаю, что может быть соразмерно городу. */; //@t
				var_0_object->AddReply(523214, 24411, 24410)  /* Может быть, ты знаешь? */; //@t
				return 0;
			}
			if(var_36_bool == 24411) {
				SetCurrentMood_t5_DN11(var_37_cvector, "Threat");
				var_0_object->SetMessage(523215)  /* У меня есть дерзкая мысль. Коль скоро тавро обозначает город - адекватной  жертвой может … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523216, 24413, 24412)  /* Как так? Разве он не часть города? */; //@t
				var_0_object->AddReply(523237, 24437, 24436)  /* Нет, это глупость. */; //@t
				return 0;
			}
			if(var_36_bool == 24437) {
				SetCurrentMood_t5_DN11(var_37_cvector, "Confusion");
				var_0_object->SetMessage(523238)  /* Не обращай внимания. Просто забавная трактовка. Это целый городок. Дети ведь считают его … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523239, 24439, 24438)  /* За какие заслуги? */; //@t
				return 0;
			}
			if(var_36_bool == 24439) {
				SetCurrentMood_t5_DN11(var_37_cvector, "Isee");
				var_0_object->SetMessage(523240)  /* Бакалавр уже немало знает об этом... Он как-то разговаривает с ними. Читает их мысли, нав… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523241, 24417, 24440)  /* Что?? */; //@t
				return 0;
			}
			if(var_36_bool == 24413) {
				SetCurrentMood_t5_DN11(var_37_cvector, "Arrogance");
				var_0_object->SetMessage(523217)  /* Нет. Это бессмысленная, бесполезная и вредная гадость. Если уж Уклад считает город телом … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523218, 24415, 24414)  /* Нож? */; //@t
				return 0;
			}
			if(var_36_bool == 24415) {
				SetCurrentMood_t5_DN11(var_37_cvector, "Arrogance");
				var_0_object->SetMessage(523219)  /* Знал бы ты, что узнал для меня бакалавр... Но нет, я не хочу говорить так. Это только игр… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522068, 23238, 23237)  /* Кто может доказать, что ты говоришь правду? */; //@t
				return 0;
			}
			if(var_36_bool == 23238) {
				SetCurrentMood_t5_DN11(var_37_cvector, "Confusion");
				var_0_object->SetMessage(522069)  /* Старшина наверняка может сказать об этом больше. */; //@t
				var_0_object->ClearReplies(); //@t
				bool var_177_bool;
				IsB11q01_DialogCompleted(var_1_object);
				if(var_177_bool != 0)
					var_0_object->AddReply(522073, 23243, 23242)  /* Старшина Оюн мертв. Я покончил с ним. */; //@t
				bool var_186_bool;
				IsB11q01_DialogCompleted(var_1_object);
				if(!var_186_bool) //@nz
					var_0_object->AddReply(522070, -1, 23239)  /* Сегодня я узнаю у него все. */; //@t
				return 0;
			}
			if(var_36_bool == 23243) {
				SetCurrentMood_t5_DN11(var_37_cvector, "Threat");
				var_0_object->SetMessage(522074)  /* Ты победил его в поединке? */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522075, 24408, 23244)  /* Да. */; //@t
				var_0_object->AddReply(523211, -1, 24407)  /* Это вышло против моего желания. */; //@t
				return 0;
			}
			if(var_36_bool == 24408) {
				SetCurrentMood_t5_DN11(var_37_cvector, "Confusion");
				var_0_object->SetMessage(523212)  /* Уклад замер в нетерпении. Они связывают с тобой свои надежды. Может быть, они и дадут теб… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523234, -1, 24432)  /* Вряд ли. Они ждут жертвы. */; //@t
				return 0;
			}
			if(var_36_bool == 24409) {
				SetCurrentMood_t5_DN11(var_37_cvector, "Confusion");
				var_0_object->SetMessage(523213)  /* Может быть, есть и иные способы добыть эту кровь? */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523220, 24417, 24416)  /* Не представляю. */; //@t
				return 0;
			}
			if(var_36_bool == 24417) {
				SetCurrentMood_t5_DN11(var_37_cvector, "Threat");
				var_0_object->SetMessage(523221)  /* А ты слышал легенду о том, что кровавые лужи время от времени появляются под основанием М… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523233, 23238, 24430)  /* Кто может доказать это? */; //@t
				return 0;
			}
			var_3_string = true;
			bool var_223_bool;
			IsLSH(var_223_bool);
			if(var_223_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x999";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			StopLSHSpeechIfActive();
			if(var_36_bool == 31305) {
				SetCurrentMood_t7_DN8Night(var_37_cvector, "Neutral");
				var_0_object->SetMessage(529922)  /* Голова гудит от этого воздуха. Я просто не могу сосредоточиться! Как нам работать? Наверн… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529923, -1, 31306)  /* Спи. Я приду утром. */; //@t
				var_0_object->AddReply(529924, -1, 31307)  /* Причем как можно скорее. Это опасно. */; //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			IsLSH(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbb4";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			StopLSHSpeechIfActive();
			if(var_36_bool == 31325) {
				SetCurrentMood_t9_DN12Night(var_37_cvector, "Confusion");
				var_0_object->SetMessage(529942)  /* ... Еще раз проиграть все от начала и до конца... Мысли мои путаются, когда ты рядом, а м… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529943, -1, 31326)  /* Да. Нас не должны видеть вместе. */; //@t
				var_0_object->AddReply(529944, -1, 31327)  /* Помни, что нам еще предстоит тяжелый разговор. */; //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			IsLSH(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc7f";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			StopLSHSpeechIfActive();
			if(var_37_cvector == 31732) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				Set_oob9Aglaja1();
			}
			if(var_37_cvector == 31735) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				Set_oob9Aglaja2();
			}
			if(var_36_bool == 31731) {
				SetCurrentMood_t11_DN9(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530357)  /* Ты лучше уходи... ты справишься и без моей помощи. */; //@t
				var_0_object->ClearReplies(); //@t
				bool var_72_bool = false;
				bool var_73_bool = false;
				bool var_74_bool;
				IsB9q03BonefiresCount4(var_1_object);
				if(var_74_bool != 0) {
					bool var_82_bool;
					IsB9q03BadInit_Set(var_1_object);
					if(!var_82_bool) //@nz
						var_73_bool = true;
				}
				if(var_73_bool != 0) {
					bool var_89_bool;
					IsOob9Aglaja1_NotYet(var_1_object);
					if(var_89_bool != 0)
						var_72_bool = true;
				}
				if(var_72_bool != 0)
					var_0_object->AddReply(530358, 32319, 31732)  /* Я зажег сигнальные костры. */; //@t
				bool var_98_bool = false;
				bool var_99_bool = false;
				bool var_100_bool;
				IsB9q03BonefiresCount4(var_1_object);
				if(var_100_bool != 0) {
					bool var_102_bool;
					IsB9q03BadInit_Set(var_1_object);
					if(var_102_bool != 0)
						var_99_bool = true;
				}
				if(var_99_bool != 0) {
					bool var_104_bool;
					IsOob9Aglaja2_NotYet(var_1_object);
					if(var_104_bool != 0)
						var_98_bool = true;
				}
				if(var_98_bool != 0)
					var_0_object->AddReply(530361, 31736, 31735)  /* Если тебе интересно - я зажег костры. */; //@t
				var_0_object->AddReply(530916, -1, 32243)  /* Как скажешь. */; //@t
				var_0_object->AddReply(530917, -1, 32244)  /* Никто не упрекнет тебя. */; //@t
				return 0;
			}
			if(var_36_bool == 31736) {
				SetCurrentMood_t11_DN9(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530362)  /* Как это кстати! Ты мой дух-хранитель, я все больше убеждаюсь в этом. */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530363, 32326, 31737)  /* Это было так важно для тебя? */; //@t
				var_0_object->AddReply(530998, -1, 32325)  /* Я рад, что сумел помочь. */; //@t
				return 0;
			}
			if(var_36_bool == 32326) {
				SetCurrentMood_t11_DN9(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530999)  /* Да. Очень. */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531000, 32329, 32327)  /* Но почему? */; //@t
				var_0_object->AddReply(531001, -1, 32328)  /* Так я и подумал. */; //@t
				return 0;
			}
			if(var_36_bool == 32329) {
				SetCurrentMood_t11_DN9(var_37_cvector, "Threat");
				var_0_object->SetMessage(531002)  /* Да потому что теперь я знаю, кому это понадобилось... Они приоткрылись, и теперь я смогу … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531003, -1, 32330)  /* Как знаешь. */; //@t
				var_0_object->AddReply(531004, -1, 32331)  /* Я и так все понял. */; //@t
				return 0;
			}
			if(var_36_bool == 32319) {
				SetCurrentMood_t11_DN9(var_37_cvector, "Neutral");
				var_0_object->SetMessage(530994)  /* Кто их погасил? */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530996, 31733, 32321)  /* Там было целое сборище негодяев. Не осталось ни одного. */; //@t
				var_0_object->AddReply(530997, 31733, 32323)  /* Мальчишки из Многогранника как-то связаны с этим. */; //@t
				var_0_object->AddReply(530995, -1, 32320)  /* Не знаю. */; //@t
				return 0;
			}
			if(var_36_bool == 31733) {
				SetCurrentMood_t11_DN9(var_37_cvector, "Confusion");
				var_0_object->SetMessage(530359)  /* О! Благодарю тебя... Зачем ты так заботишься обо мне? */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530360, -1, 31734)  /* Я служу своему городу. */; //@t
				var_0_object->AddReply(530993, -1, 32318)  /* Я заботился о мальчике. Я сделал это для Капеллы. */; //@t
				return 0;
			}
			var_3_string = true;
			bool var_172_bool;
			IsLSH(var_172_bool);
			if(var_172_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd83";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, cvector var_37_cvector)
	{
		if(1 != 0) {
			StopLSHSpeechIfActive();
			if(var_36_int == 31972) {
				SetCurrentMood_t13_Mt(var_37_cvector, "Threat");
				var_0_object->SetMessage(530682)  /* Велика власть одних над другими - не правда ли? Кто в наше время может остаться свободным… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530683, 31974, 31973)  /* Кто, например? */; //@t
				var_0_object->AddReply(530688, 31974, 31978)  /* Не так-то просто обмануть человека. */; //@t
				return 0;
			}
			if(var_36_int == 31974) {
				SetCurrentMood_t13_Mt(var_37_cvector, "Threat");
				var_0_object->SetMessage(530684)  /* Вот этот гордый Бакалавр, который только что говорил со мной, свято верил в свою свободу.… */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530685, 31976, 31975)  /* Я не понимаю. */; //@t
				var_0_object->AddReply(530689, 31976, 31979)  /* Не ждал, что застану инквизитора в таком волнении. */; //@t
				return 0;
			}
			if(var_36_int == 31976) {
				SetCurrentMood_t13_Mt(var_37_cvector, "Threat");
				var_0_object->SetMessage(530686)  /* Подло играть на чужом благородстве! Да, подло... И мне известно, кому это нужно. Те, кто … */; //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530687, -1, 31977)  /* Значит, инквизитор стоит между ученым и разрушителем... */; //@t
				var_0_object->AddReply(530690, -1, 31980)  /* ...Неужели вся это сцена - притворство? Я слышал, инквизиторы все делают с тайным умыслом… */; //@t
				return 0;
			}
			var_3_string = true;
			bool var_86_bool;
			IsLSH(var_86_bool);
			if(var_86_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf0f";
	
	}

}


maintask task_14
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		TNPCSmartIdleBase_init_body(var_35_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, int var_36_int)
	{
		if(var_36_int == 10) {
			KillSpeechTimer();
			bool var_40_bool = false;
			bool var_41_bool;
			IsLoaded(var_41_bool);
			if(var_41_bool != 0) {
				bool var_44_bool;
				IsPlayerNear(var_44_bool);
				if(var_44_bool != 0)
					var_40_bool = true;
			}
			if(var_40_bool != 0) {
				bool var_61_bool;
				RotateToPlayer(var_61_bool);
				if(var_61_bool != 0) {
					bool var_80_bool; object var_81_object;
					object var_82_object;
					self(var_82_object);
					var_82_object = var_81_object;
					StartCommonSpeech(var_80_bool, var_81_object);
				}
			} else {
				RestoreDirection(var_36_int);
				InitSpeechTimer();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		CancelActivity();
		KillSpeechTimer();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		@StopGroup0();
		KillSpeechTimer();
		PlayHeadAnimation("Neutral");
		InitSpeechTimer();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, bool var_36_bool)
	{
		if(var_36_bool != 0)
			InitSpeechTimer();
		else
			PlayHeadAnimation("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, object var_36_object)
	{
		bool var_38_bool;
		@IsOverrideActive(var_38_bool);
		if(!var_38_bool) { //@nz
			disable OnUse;
			CancelActivity();
			bool var_40_bool; object var_41_object;
			var_36_object = var_41_object;
			RotateToActor(var_40_bool, var_41_object);
			enable OnUse;
			object var_54_object;
			var_36_object = var_54_object;
			PerformUse(var_54_object);
			PlayHeadAnimation("Neutral");
			KillSpeechTimer();
			InitSpeechTimer();
		}
	}

}


void TDlgLauncher_DN7_Burah_Aglaja(object var_0_object, int var_418_int, object var_419_object)
{
	var_0_object = var_419_object;
	bool var_429_bool; object var_430_object;
	var_419_object = var_430_object;
	PrepareTradeCamera(var_429_bool, var_430_object, 70.0);
	if(!var_429_bool) { //@nz
		var_418_int = -2;
		return 8;
	}
	object var_425_object;
	@CreateDialog(var_425_object);
	int var_433_int;
	GetSelfNPCNameID(var_433_int);
	var_425_object->SetNPCName(var_433_int);
	int var_434_int;
	GetSelfNPCDescriptionID(var_434_int);
	var_425_object->SetNPCDescription(var_434_int);
	string var_435_string;
	GetSelfPhotoPath(var_435_string);
	var_425_object->SetPhoto(var_435_string);
	string var_436_string;
	GetSelfPhoto2Path(var_436_string);
	var_425_object->SetPhoto2(var_436_string);
	int var_437_int;
	GetPlayerNameIDByBranch(var_437_int);
	var_425_object->SetPlayerName(var_437_int);
	bool var_426_bool;
	@IsOverrideActive(var_426_bool);
	if(var_426_bool != 0) {
		var_418_int = -2;
		return 8;
	}
	@DoDialog(var_425_object);
	bool var_439_bool; object var_440_object;
	object var_441_object;
	self(var_441_object);
	var_441_object = var_440_object;
	RegisterCommonSpeech(var_439_bool, var_440_object);
	object var_442_object; object var_443_object;
	var_419_object = var_442_object;
	var_425_object = var_443_object;
	TaskCall(1);
	TDlgBody_DN7_Burah_Aglaja(var_444_object, var_445_object, var_446_string, var_447_bool, var_442_object, var_443_object);
	TaskReturn();
	bool var_428_bool;
	var_425_object->IsDialogEnd(var_428_bool);
	
	for(;;) {
		var_581_bool = !var_428_bool; //@nz
		if(var_581_bool == 0) goto Label_70;
		@sync();
		var_425_object->IsDialogEnd(var_428_bool);
	}
	
Label_70:
	object var_582_object;
	var_419_object = var_582_object;
	RestoreCameraAfterDialog();
	@StopDialog(var_425_object);
	var_425_object->GetReturnValue(-1);
	int var_427_int = var_418_int;
}
EMIT "Stack[-4] = 0";


void AddDiary_259_FirstMeeting(void)
{
	object var_63_object;
	@CreateDiaryEntry(var_63_object, 259, 1, 521031)  /* Невероятно... Неужели мне повезло? Кровь быка, кровь человека... Я чувствовал, что две эт… */;
	bool var_67_bool; object var_68_object;
	var_63_object = var_68_object;
	AttachDiaryEntryToParent(var_67_bool, var_68_object, 253);
}
EMIT "Stack[-1] = 0";


void GetIdleAnimation(string var_60_string, int var_61_int)
{
	string var_63_string = "idle";
	if(var_61_int != 0)
		var_63_string += var_61_int;
	var_63_string = var_60_string;
}


// @pe
void IsB7q03_State2(bool result)
{
	int state;
	GetVariable_int(state, "b7q03");
	if(state == 2)
		result = true;
	result = false;
}


void GetIdleAnimationCount(int var_54_int)
{
	int var_57_int; bool var_58_bool;
	var_57_int = 0;
	
	for(;;) {
		string var_60_string; int var_61_int;
		var_57_int = var_61_int;
		GetIdleAnimation(var_60_string, var_61_int);
		@HasAnimation(var_58_bool, "all", var_60_string);
		if(!var_58_bool) //@nz
			break;
		var_57_int += 1;
	}
	var_57_int = var_54_int;
}


void TDlgLauncher_DN8_Burah_AglajaNight(object var_0_object, int var_301_int, object var_302_object)
{
	var_0_object = var_302_object;
	bool var_312_bool; object var_313_object;
	var_302_object = var_313_object;
	PrepareTradeCamera(var_312_bool, var_313_object, 70.0);
	if(!var_312_bool) { //@nz
		var_301_int = -2;
		return 8;
	}
	object var_308_object;
	@CreateDialog(var_308_object);
	int var_316_int;
	GetSelfNPCNameID(var_316_int);
	var_308_object->SetNPCName(var_316_int);
	int var_317_int;
	GetSelfNPCDescriptionID(var_317_int);
	var_308_object->SetNPCDescription(var_317_int);
	string var_318_string;
	GetSelfPhotoPath(var_318_string);
	var_308_object->SetPhoto(var_318_string);
	string var_319_string;
	GetSelfPhoto2Path(var_319_string);
	var_308_object->SetPhoto2(var_319_string);
	int var_320_int;
	GetPlayerNameIDByBranch(var_320_int);
	var_308_object->SetPlayerName(var_320_int);
	bool var_309_bool;
	@IsOverrideActive(var_309_bool);
	if(var_309_bool != 0) {
		var_301_int = -2;
		return 8;
	}
	@DoDialog(var_308_object);
	bool var_322_bool; object var_323_object;
	object var_324_object;
	self(var_324_object);
	var_324_object = var_323_object;
	RegisterCommonSpeech(var_322_bool, var_323_object);
	object var_325_object; object var_326_object;
	var_302_object = var_325_object;
	var_308_object = var_326_object;
	TaskCall(7);
	TDlgBody_DN8_Burah_AglajaNight(var_327_object, var_328_object, var_329_string, var_330_bool, var_325_object, var_326_object);
	TaskReturn();
	bool var_311_bool;
	var_308_object->IsDialogEnd(var_311_bool);
	
	for(;;) {
		var_355_bool = !var_311_bool; //@nz
		if(var_355_bool == 0) goto Label_2904;
		@sync();
		var_308_object->IsDialogEnd(var_311_bool);
	}
	
Label_2904:
	object var_356_object;
	var_302_object = var_356_object;
	RestoreCameraAfterDialog();
	@StopDialog(var_308_object);
	var_308_object->GetReturnValue(-1);
	int var_310_int = var_301_int;
}
EMIT "Stack[-4] = 0";


void AddDiary_261_PanaceaWorks(void)
{
	object var_184_object;
	@CreateDiaryEntry(var_184_object, 261, 1, 521033)  /* *** Из крови Аврокса удалось приготовить сыворотку. Победное оружие выковано. Тревожит то… */;
	bool var_188_bool; object var_189_object;
	var_184_object = var_189_object;
	AttachDiaryEntryToParent(var_188_bool, var_189_object, 253);
}
EMIT "Stack[-1] = 0";


// @pe
void IsB7q03SerumWorks_Set(bool result)
{
	int state;
	GetVariable_int(state, "b7q03SerumWorks");
	if(state != 0) {
		result = true;
		return 0;
	}
	result = false;
}


void StartCommonSpeech(bool var_142_bool, object var_143_object)
{
	string var_149_string; bool var_151_bool; int var_152_int; string var_153_string;
	var_149_string = "c";
	int var_150_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_143_object->HasProperty((var_149_string + (var_150_int + 1)), var_151_bool);
			if(!var_151_bool) { //@nz
			} else {
				var_150_int += 1;
			}
		}
		if(!var_150_int) { //@nz
			var_142_bool = false;
			return 10;
		}
		var_152_int = 0;
		if(var_150_int > 1)
			@irand(var_152_int, var_150_int);
		var_143_object->GetProperty((var_149_string + (var_152_int + 1)), var_153_string);
		bool var_165_bool; string var_166_string;
		var_153_string = var_166_string;
		PlaySpeechIfExists(var_165_bool, var_166_string);
		var_165_bool = var_142_bool;
		return 10;

	}
}


void TIdleBase_init(void)
{
	bool var_48_bool; int var_49_int; int var_50_int; bool var_51_bool;
	@WaitForAnimEnd();
	bool var_52_bool;
	IsLoaded(var_52_bool);
	if(!var_52_bool) //@nz
		return 12;
	int var_54_int;
	GetIdleAnimationCount(var_54_int);
	int var_46_int;
	var_54_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_67_bool = false;
		if(var_47_int < 5) {
			bool var_70_bool;
			IsLoaded(var_70_bool);
			if(var_70_bool != 0)
				var_67_bool = true;
		}
		if(var_67_bool != 0) {
			if(!var_46_int) { //@nz
				@Sleep(3, var_48_bool);
				if(!var_48_bool) { //@nz
				} else {
			} else {
			@irand(var_49_int, var_46_int);
			@irand(var_50_int, 5);
			if(var_50_int != 0)
				var_49_int = 0;
			string var_81_string; int var_82_int;
			var_49_int = var_82_int;
			GetIdleAnimation(var_81_string, var_82_int);
			@PlayAnimation("all", var_81_string);
			@WaitForAnimEnd(var_51_bool);
			var_83_bool = !var_51_bool; //@nz
			if(var_83_bool == 0) goto Label_4177;
			goto Label_4188;
			}
				Label_4177:
					bool var_74_bool;
					ContinueIdle(var_74_bool);
					var_75_bool = !var_74_bool; //@nz
					if(var_75_bool == 0) goto Label_4183;
			}
		}
	Label_4188:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_4183:
		@ResetAAS();
		var_47_int += 1;
	}
	
}


void GetSelfNPCDescriptionID(int id)
{
	id = 515527;
}


void AddDiary_280_PanaceaTestTitle(void)
{
	object var_150_object;
	@CreateDiaryEntry(var_150_object, 280, 2, 521363)  /* 'Испытание Панацеи' */;
	bool var_154_bool; object var_155_object;
	var_150_object = var_155_object;
	AttachDiaryEntryToParent(var_154_bool, var_155_object, -1);
}
EMIT "Stack[-1] = 0";


void GetSelfNPCNameID(int id)
{
	id = 513334;
}


// @pe
void IsB7q03_DialogCompleted(bool result)
{
	int state;
	GetVariable_int(state, "b7q03");
	if(state == 1000)
		result = true;
	result = false;
}


void GetSelfPhotoPath(string path)
{
	path = "ui/NPC_Aglaja.png";
}


// @pe
void TDlgBody_DN11_Burah_Aglaja(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_826_object, object var_827_object)
{
	var_0_object = var_827_object;
	var_1_object = var_826_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_833_bool;
		IsOob11Aglaja1_NotYet(var_1_object);
		if(var_833_bool != 0) {
			object var_839_object; object var_840_object;
			var_839_object = var_1_object;
			var_840_object = var_0_object;
			Set_oob11Aglaja1();
			SetCurrentMood_t5_DN11(var_827_object, "Neutral");
			var_0_object->SetMessage(522067)  /* Что же? Ты узнал, как добыть кровь? */; //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(523208, 24405, 24404)  /* Они ждут жертвы. */; //@t
			var_0_object->AddReply(523226, 24424, 24423)  /* Почему ты все время спрашиваешь об этом? */; //@t
			var_0_object->AddReply(523222, -1, 24418)  /* Тебе не должно быть до этого никакого дела, инквизитор. */; //@t
		} else {
					SetCurrentMood_t5_DN11(var_827_object, "Neutral");
					var_0_object->SetMessage(522071)  /* Любое слово, которое я скажу тебе, в конечном итоге обернется против нас. */; //@t
					var_0_object->ClearReplies(); //@t
					bool var_871_bool;
					IsOob11Aglaja2_NotYet(var_1_object);
					if(var_871_bool != 0)
						var_0_object->AddReply(523223, 24425, 24419)  /* Что за жертвы они ждут от меня? */; //@t
					var_0_object->AddReply(522072, -1, 23241)  /* Тогда я не буду спрашивать тебя ни о чем. */; //@t
		}
	}
	for(;;) {
		bool var_861_bool;
		IsLSH(var_861_bool);
		if(var_861_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					PlayHeadAnimation(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_2433;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2433:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x924";


void GetSelfPhoto2Path(string path)
{
	path = "ui/NPC_Aglaja_b.png";
}


void IsLSH(bool result)
{
	result = true;
}


// @pe
void func_4649(void)
{
	SetDoorLocked("boiny@door1", false);
}


// @pe
void SetCurrentMood_t1_DN7(object var_2_object, string var_457_string)
{
	bool var_458_bool;
	IsLSH(var_458_bool);
	if(!var_458_bool) //@nz
		return 0;
	if(var_457_string == var_2_object)
		return 0;
	string var_461_string; bool var_462_bool;
	var_457_string = var_461_string;
	if(var_457_string == "")
		var_462_bool = false;
	else
		var_462_bool = true;
	PlayHeadAnimation_LSH(var_461_string, var_462_bool);
	var_2_object = var_457_string;
	
}


// @pe
void IsOob8Aglaja1_NotYet(bool result)
{
	int state;
	GetVariable_int(state, "oob8Aglaja1");
	if(state == 0) {
		result = true;
		return 0;
	}
	result = false;
}


void AddDiary_281_PanaceaTestDetails(void)
{
	object var_158_object;
	@CreateDiaryEntry(var_158_object, 281, 2, 521364)  /* Нужно испытать сыворотку. Исполнитель ждет в Театре. Эти уже насквозь пропитались грязью … */;
	bool var_162_bool; object var_163_object;
	var_158_object = var_163_object;
	AttachDiaryEntryToParent(var_162_bool, var_163_object, 280);
}
EMIT "Stack[-1] = 0";


// @pe
void TDlgBody_DN12_Burah_AglajaNight(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_383_object, object var_384_object)
{
	var_0_object = var_384_object;
	var_1_object = var_383_object;
	var_3_string = false;
	if(1 != 0) {
		SetCurrentMood_t9_DN12Night(var_384_object, "Confusion");
		var_0_object->SetMessage(529942)  /* ... Еще раз проиграть все от начала и до конца... Мысли мои путаются, когда ты рядом, а м… */; //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(529943, -1, 31326)  /* Да. Нас не должны видеть вместе. */; //@t
		var_0_object->AddReply(529944, -1, 31327)  /* Помни, что нам еще предстоит тяжелый разговор. */; //@t
		goto Label_3146;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc32";
	}
Label_3146:
	bool var_405_bool;
	IsLSH(var_405_bool);
	if(var_405_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				PlayHeadAnimation(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3175;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3175:
		return 0;

	}
	
}


void TDlgLauncher_DN8_Burah_Aglaja(object var_0_object, int var_585_int, object var_586_object)
{
	var_0_object = var_586_object;
	bool var_596_bool; object var_597_object;
	var_586_object = var_597_object;
	PrepareTradeCamera(var_596_bool, var_597_object, 70.0);
	if(!var_596_bool) { //@nz
		var_585_int = -2;
		return 8;
	}
	object var_592_object;
	@CreateDialog(var_592_object);
	int var_600_int;
	GetSelfNPCNameID(var_600_int);
	var_592_object->SetNPCName(var_600_int);
	int var_601_int;
	GetSelfNPCDescriptionID(var_601_int);
	var_592_object->SetNPCDescription(var_601_int);
	string var_602_string;
	GetSelfPhotoPath(var_602_string);
	var_592_object->SetPhoto(var_602_string);
	string var_603_string;
	GetSelfPhoto2Path(var_603_string);
	var_592_object->SetPhoto2(var_603_string);
	int var_604_int;
	GetPlayerNameIDByBranch(var_604_int);
	var_592_object->SetPlayerName(var_604_int);
	bool var_593_bool;
	@IsOverrideActive(var_593_bool);
	if(var_593_bool != 0) {
		var_585_int = -2;
		return 8;
	}
	@DoDialog(var_592_object);
	bool var_606_bool; object var_607_object;
	object var_608_object;
	self(var_608_object);
	var_608_object = var_607_object;
	RegisterCommonSpeech(var_606_bool, var_607_object);
	object var_609_object; object var_610_object;
	var_586_object = var_609_object;
	var_592_object = var_610_object;
	TaskCall(3);
	TDlgBody_DN8_Burah_Aglaja(var_611_object, var_612_object, var_613_string, var_614_bool, var_609_object, var_610_object);
	TaskReturn();
	bool var_595_bool;
	var_592_object->IsDialogEnd(var_595_bool);
	
	for(;;) {
		var_701_bool = !var_595_bool; //@nz
		if(var_701_bool == 0) goto Label_1393;
		@sync();
		var_592_object->IsDialogEnd(var_595_bool);
	}
	
Label_1393:
	object var_702_object;
	var_586_object = var_702_object;
	RestoreCameraAfterDialog();
	@StopDialog(var_592_object);
	var_592_object->GetReturnValue(-1);
	int var_594_int = var_585_int;
}
EMIT "Stack[-4] = 0";


void OnQuest_b7q01_AdvanceToStarshina(void)
{
	@SetVariable("b7q01", 7);
	object worldMap;
	GetWorldMap(worldMap);
	object mapCopy;
	worldMap = mapCopy;
	float fTime;
	GetGameTime(fTime);
	mapCopy->AddMark("b7q01AglajaGotoStarshina", "pt_map_starshina", 1, 521027, fTime);
	AddDiary_259_FirstMeeting();
}
EMIT "Stack[-1] = 0";


// @pe
void IsB8q01_NotStarted(bool result)
{
	int state;
	GetVariable_int(state, "b8q01");
	if(state == 0) {
		result = true;
		return 0;
	}
	result = false;
}


void AddDiary_283_PanaceaTestComplete(void)
{
	object var_219_object;
	@CreateDiaryEntry(var_219_object, 283, 2, 521366)  /* *** Панацея действует! Если бы можно было получить достаточно этой драгоценной крови - го… */;
	bool var_223_bool; object var_224_object;
	var_219_object = var_224_object;
	AttachDiaryEntryToParent(var_223_bool, var_224_object, 280);
}
EMIT "Stack[-1] = 0";


void StartDayMonthSpeech(bool var_173_bool, object var_174_object)
{
	bool var_182_bool; int var_183_int; string var_184_string;
	int var_186_int;
	GetDay(var_186_int);
	string var_180_string = ("d" + var_186_int) + "m";
	int var_181_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_174_object->HasProperty((var_180_string + (var_181_int + 1)), var_182_bool);
			if(!var_182_bool) { //@nz
			} else {
				var_181_int += 1;
			}
		}
		if(!var_181_int) { //@nz
			var_173_bool = false;
			return 10;
		}
		var_183_int = 0;
		if(var_181_int > 1)
			@irand(var_183_int, var_181_int);
		var_174_object->GetProperty((var_180_string + (var_183_int + 1)), var_184_string);
		bool var_205_bool; string var_206_string;
		var_184_string = var_206_string;
		PlaySpeechIfExists(var_205_bool, var_206_string);
		var_205_bool = var_173_bool;
		return 10;

	}
}


// @pe
void IsB8q01_State7(bool result)
{
	int state;
	GetVariable_int(state, "b8q01");
	if(state == 7)
		result = true;
	result = false;
}


// @pe
void OnQuest_b7q01_Complete(void)
{
	AddDiary_261_PanaceaWorks();
	bool triggered;
	TriggerNamedActor(triggered, "quest_b7_01", "completed");
}


void AddDiary_284_WhoseBloodTitle(void)
{
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 284, 1, 521455)  /* 'Чья это кровь?' */;
	bool var_51_bool; object var_52_object;
	var_47_object = var_52_object;
	AttachDiaryEntryToParent(var_51_bool, var_52_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void IsB8q03_ActiveButNotFinal(bool result)
{
	bool step3 = false;
	bool step2 = false;
	int state;
	GetVariable_int(state, "b8q03");
	if(state != 0) {
		int state2;
		GetVariable_int(state2, "b8q03");
		if(state2 != 1000)
			step2 = true;
	}
	if(step2 != 0) {
		int state3;
		GetVariable_int(state3, "b8q03");
		if(state3 != -1)
			step3 = true;
	}
	if(step3 != 0) {
		result = true;
		return 0;
	}
	result = false;
}


// @pe
void TDlgBody_DN7_Burah_Aglaja(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_442_object, object var_443_object)
{
	var_0_object = var_443_object;
	var_1_object = var_442_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_449_bool;
		IsB7q01_State6(var_1_object);
		if(var_449_bool != 0) {
			SetCurrentMood_t1_DN7(var_443_object, "Threat");
			var_0_object->SetMessage(521012)  /* С чем пришел сюда тот, кого называют Гаруспиком, Служителем и Потрошителем? */; //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530692, 29681, 31984)  /* Хотел рассказать, чего ради я совершил все, что совершил. */; //@t
			var_0_object->AddReply(528310, -1, 29680)  /* Хотел представиться. Видно, это уже ни к чему. */; //@t
		} else {
					bool var_480_bool = false;
					bool var_481_bool = false;
					bool var_482_bool;
					IsB7q01_DialogCompleted(var_1_object);
					if(var_482_bool != 0) {
						bool var_488_bool;
						IsOob7Aglaja1_NotYet(var_1_object);
						if(var_488_bool != 0)
							var_481_bool = true;
					}
					if(var_481_bool != 0) {
						bool var_494_bool;
						ActorHasBurahSerum(var_494_bool, var_1_object);
						if(var_494_bool != 0)
							var_480_bool = true;
					}
					if(var_480_bool == 0) goto Label_160;
					object var_503_object; object var_504_object;
					var_503_object = var_1_object;
					var_504_object = var_0_object;
					Set_oob7Aglaja1();
					SetCurrentMood_t1_DN7(var_443_object, "Neutral");
					var_0_object->SetMessage(521347)  /* Осталось последнее дело. И сделать его нужно до завершения этого дня. Я слышала, ты смель… */; //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530713, 32015, 32014)  /* Это так. */; //@t
					var_0_object->AddReply(530721, 32015, 32022)  /* Почему ты спрашиваешь? */; //@t
		}
	}
Label_269:
	for(;;) {
		bool var_472_bool;
		IsLSH(var_472_bool);
		if(var_472_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					PlayHeadAnimation(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_298;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_298:
			return 0;

		}

	}
	
Label_160:
	SetCurrentMood_t1_DN7(var_443_object, "Neutral");
	var_0_object->SetMessage(521014)  /* Зачем ты так пристально смотришь? */; //@t
	var_0_object->ClearReplies(); //@t
	bool var_517_bool = false;
	bool var_518_bool;
	ActorHasBurahSerum(var_518_bool, var_1_object);
	if(var_518_bool != 0) {
		bool var_520_bool;
		IsB7q01_State8(var_1_object);
		if(var_520_bool != 0)
			var_517_bool = true;
	}
	if(var_517_bool != 0)
		var_0_object->AddReply(521043, 22240, 22239)  /* Я вернулся. Я... сделал панацею. Вот она. Старшина дал мне для нее горсть дымящейся крови… */; //@t
	bool var_529_bool = true;
	bool var_530_bool = false;
	bool var_531_bool = false;
	bool var_532_bool;
	IsB7q03_State2(var_1_object);
	if(var_532_bool != 0) {
		bool var_538_bool;
		IsActor_NotDiseased(var_538_bool, var_1_object);
		if(var_538_bool != 0)
			var_531_bool = true;
	}
	if(var_531_bool != 0) {
		bool var_546_bool;
		IsB7q03_DialogCompleted(var_1_object);
		if(!var_546_bool) //@nz
			var_530_bool = true;
	}
	if(var_530_bool != 1) {
		bool var_553_bool = false;
		bool var_554_bool;
		IsB7q03SerumWorks_Set(var_1_object);
		if(var_554_bool != 0) {
			bool var_560_bool;
			IsB7q03_DialogCompleted(var_1_object);
			if(!var_560_bool) //@nz
				var_553_bool = true;
		}
		if(var_553_bool != 1)
			var_529_bool = false;
	}
	if(var_529_bool != 0)
		var_0_object->AddReply(521348, 22536, 22535)  /* Я вернулся. Панацея действует. Похоже, от болезни не осталось и следа. */; //@t
	bool var_566_bool = false;
	bool var_567_bool;
	IsB7q03_State2(var_1_object);
	if(var_567_bool != 0) {
		bool var_569_bool;
		IsActor_NotDiseased(var_569_bool, var_1_object);
		if(!var_569_bool) //@nz
			var_566_bool = true;
	}
	if(var_566_bool != 0)
		var_0_object->AddReply(521360, 22548, 22547)  /* Похоже, не удается мне справиться с болезнью... */; //@t
	var_0_object->AddReply(521015, -1, 22228)  /* Я всегда так смотрю. */; //@t
	var_0_object->AddReply(528324, -1, 29694)  /* А ты? */; //@t
	goto Label_269;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void OnQuest_b7q03_Start_Theater(void)
{
	@SetVariable("b7q03", 1);
	object worldMap;
	GetWorldMap(worldMap);
	object mapCopy;
	worldMap = mapCopy;
	float fTime;
	GetGameTime(fTime);
	mapCopy->AddMark("b7q03AglajaGotoTheater", "pt_map_theater", 0, 521367, fTime);
	AddDiary_280_PanaceaTestTitle();
	AddDiary_281_PanaceaTestDetails();
	object subActor;
	AddBlankActorToScene(subActor, "quest_b7_03");
	bool triggered;
	TriggerNamedActor(triggered, "quest_b7_03", "place_birdmask");
}
EMIT "Stack[-1] = 0";


void AddDiary_285_WhoseBloodCheckMurder(void)
{
	object var_70_object;
	@CreateDiaryEntry(var_70_object, 285, 1, 521456)  /* Действительно - жертвоприношение не удалось. Может ли это означать, что его не было вовсе… */;
	bool var_74_bool; object var_75_object;
	var_70_object = var_75_object;
	AttachDiaryEntryToParent(var_74_bool, var_75_object, 284);
}
EMIT "Stack[-1] = 0";


void ContinueIdle(bool result)
{
	result = true;
}


void CancelActivity(void)
{
	@StopAnimation();
	@StopGroup0();
}


void AddDiary_292_UdurgRealization(void)
{
	object var_86_object;
	@CreateDiaryEntry(var_86_object, 292, 1, 521463)  /* *** Итак, мои поиски завершены. Удург, 'тело, вместившее в себя мир', живое существо, кот… */;
	bool var_90_bool; object var_91_object;
	var_86_object = var_91_object;
	AttachDiaryEntryToParent(var_90_bool, var_91_object, 284);
}
EMIT "Stack[-1] = 0";


// @pe
void TDlgBody_DN8_Burah_AglajaNight(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_325_object, object var_326_object)
{
	var_0_object = var_326_object;
	var_1_object = var_325_object;
	var_3_string = false;
	if(1 != 0) {
		SetCurrentMood_t7_DN8Night(var_326_object, "Neutral");
		var_0_object->SetMessage(529922)  /* Голова гудит от этого воздуха. Я просто не могу сосредоточиться! Как нам работать? Наверн… */; //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(529923, -1, 31306)  /* Спи. Я приду утром. */; //@t
		var_0_object->AddReply(529924, -1, 31307)  /* Причем как можно скорее. Это опасно. */; //@t
		goto Label_2943;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb67";
	}
Label_2943:
	bool var_347_bool;
	IsLSH(var_347_bool);
	if(var_347_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				PlayHeadAnimation(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2972;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2972:
		return 0;

	}
	
}


void GetActorDistanceSqr(float distSqr, object actor)
{
	cvector selfPos;
	@GetPosition(selfPos);
	cvector actorPos;
	actor->GetPosition(actorPos);
	distSqr = (actorPos - selfPos) | (actorPos - selfPos);
}


void PlayHeadAnimation(string mood)
{
	bool hasAnim; float tStart; float tEnd;
	@lshHasAnimation(hasAnim, mood);
	if(hasAnim != 0) {
		@lshGetAnimTimes(mood, tStart, tEnd);
		@lshPlayAnimation(tStart, tEnd, false);
	} else {
		@Trace("Can't find lsh animation : " + mood);
	}
	
}


// @pe
void SetCurrentMood_t9_DN12Night(object var_2_object, string var_390_string)
{
	bool var_391_bool;
	IsLSH(var_391_bool);
	if(!var_391_bool) //@nz
		return 0;
	if(var_390_string == var_2_object)
		return 0;
	string var_394_string; bool var_395_bool;
	var_390_string = var_394_string;
	if(var_390_string == "")
		var_395_bool = false;
	else
		var_395_bool = true;
	PlayHeadAnimation_LSH(var_394_string, var_395_bool);
	var_2_object = var_390_string;
	
}


void TNPCSmartIdleBase_init_body(object var_0_object)
{
	bool var_36_bool;
	IsLoaded(var_36_bool);
	if(!var_36_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		TIdleBase_init();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void SetCurrentMood_t11_DN9(object var_2_object, string var_736_string)
{
	bool var_737_bool;
	IsLSH(var_737_bool);
	if(!var_737_bool) //@nz
		return 0;
	if(var_736_string == var_2_object)
		return 0;
	string var_740_string; bool var_741_bool;
	var_736_string = var_740_string;
	if(var_736_string == "")
		var_741_bool = false;
	else
		var_741_bool = true;
	PlayHeadAnimation_LSH(var_740_string, var_741_bool);
	var_2_object = var_736_string;
	
}


void TDlgLauncher_Mt_Burah_Aglaja(object var_0_object, int var_59_int, object var_60_object)
{
	var_0_object = var_60_object;
	bool var_70_bool; object var_71_object;
	var_60_object = var_71_object;
	PrepareTradeCamera(var_70_bool, var_71_object, 70.0);
	if(!var_70_bool) { //@nz
		var_59_int = -2;
		return 8;
	}
	object var_66_object;
	@CreateDialog(var_66_object);
	int var_118_int;
	GetSelfNPCNameID(var_118_int);
	var_66_object->SetNPCName(var_118_int);
	int var_119_int;
	GetSelfNPCDescriptionID(var_119_int);
	var_66_object->SetNPCDescription(var_119_int);
	string var_120_string;
	GetSelfPhotoPath(var_120_string);
	var_66_object->SetPhoto(var_120_string);
	string var_121_string;
	GetSelfPhoto2Path(var_121_string);
	var_66_object->SetPhoto2(var_121_string);
	int var_122_int;
	GetPlayerNameIDByBranch(var_122_int);
	var_66_object->SetPlayerName(var_122_int);
	bool var_67_bool;
	@IsOverrideActive(var_67_bool);
	if(var_67_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	@DoDialog(var_66_object);
	bool var_131_bool; object var_132_object;
	object var_133_object;
	self(var_133_object);
	var_133_object = var_132_object;
	RegisterCommonSpeech(var_131_bool, var_132_object);
	object var_226_object; object var_227_object;
	var_60_object = var_226_object;
	var_66_object = var_227_object;
	TaskCall(13);
	TDlgBody_Mt_Burah_Aglaja(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object);
	TaskReturn();
	bool var_69_bool;
	var_66_object->IsDialogEnd(var_69_bool);
	
	for(;;) {
		var_275_bool = !var_69_bool; //@nz
		if(var_275_bool == 0) goto Label_3763;
		@sync();
		var_66_object->IsDialogEnd(var_69_bool);
	}
	
Label_3763:
	object var_276_object;
	var_60_object = var_276_object;
	RestoreCameraAfterDialog();
	@StopDialog(var_66_object);
	var_66_object->GetReturnValue(-1);
	int var_68_int = var_59_int;
}
EMIT "Stack[-4] = 0";


void RotateToPosition(bool result, cvector target)
{
	cvector selfPos;
	@GetPosition(selfPos);
	cvector delta = target - selfPos;
	dx = GetByIndex(delta, 0);
	dz = GetByIndex(delta, 2);
	bool var_51_bool;
	@Rotate(dx, dz, var_51_bool);
	var_51_bool = result;
}


void GetDiaryRoot(object out)
{
	object root;
	@GetDiaryRoot(root);
	if(!root) { //@nz
		@Trace("Can't retrieve diary root");
		out = false;
	}
	root = out;
}
EMIT "Stack[-1] = 0";


// @pe
void IsOob8Aglaja2_NotYet(bool result)
{
	int state;
	GetVariable_int(state, "oob8Aglaja2");
	if(state == 0) {
		result = true;
		return 0;
	}
	result = false;
}


// @pe
void Set_oob7Aglaja1(void)
{
	@SetVariable("oob7Aglaja1", 1);
}


void PlayHeadAnimation_LSH(string anim, bool loop)
{
	bool hasAnim; float tStart; float tEnd;
	@lshHasAnimation(hasAnim, anim);
	if(hasAnim != 0) {
		@lshGetAnimTimes(anim, tStart, tEnd);
		@lshPlayAnimation(tStart, tEnd, loop);
	} else {
		@Trace("Can't find lsh animation : " + anim);
	}
	
}


void RotateToActor(bool result, object actor)
{
	cvector pos;
	actor->GetPosition(pos);
	bool rotated; cvector posCopy;
	pos = posCopy;
	RotateToPosition(rotated, posCopy);
	rotated = result;
}


void RotateToPlayer(bool result)
{
	object player;
	@FindActor(player, "player");
	if(!player) //@nz
		result = false;
	bool rotated; object playerCopy;
	player = playerCopy;
	RotateToActor(rotated, playerCopy);
	rotated = result;
}
EMIT "Stack[-1] = 0";


// @pe
void OnQuest_b7q03_Complete(void)
{
	AddDiary_283_PanaceaTestComplete();
	bool triggered;
	TriggerNamedActor(triggered, "quest_b7_03", "completed");
}


void AttachDiaryEntryToParent(bool result, object entry, int parentID)
{
	object diaryRoot;
	GetDiaryRoot(diaryRoot);
	object rootCopy;
	diaryRoot = rootCopy;
	object parent;
	rootCopy->Find(parentID, parent);
	if(!parent) { //@nz
		@Trace("Can't find diary parent with id: " + parentID);
		result = false;
	}
	parent->AddChild(entry);
	@SendWorldWndMessage(7);
	int category;
	entry->GetCategory(category);
	@SetDiarySection(category);
	result = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void TDlgBody_DN8_Burah_Aglaja(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_609_object, object var_610_object)
{
	var_0_object = var_610_object;
	var_1_object = var_609_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_616_bool;
		IsOob8Aglaja1_NotYet(var_1_object);
		if(var_616_bool != 0) {
			object var_622_object; object var_623_object;
			var_622_object = var_1_object;
			var_623_object = var_0_object;
			Set_oob8Aglaja1();
			SetCurrentMood_t3_DN8(var_610_object, "Threat");
			var_0_object->SetMessage(521373)  /* Слушай. Теперь я расскажу тебе о моих целях и посвящу тебя в свой план. Так уж странно сл… */; //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530766, 32077, 32076)  /* Я поверю тебе. */; //@t
			var_0_object->AddReply(530781, 32077, 32091)  /* Говори. */; //@t
		} else {
					SetCurrentMood_t3_DN8(var_610_object, "Neutral");
					var_0_object->SetMessage(521376)  /* Я рада, что ты здесь. И все-таки тебе не стоит ходить сюда часто. */; //@t
					var_0_object->ClearReplies(); //@t
					bool var_651_bool;
					IsB8q01_NotStarted(var_1_object);
					if(var_651_bool != 0)
						var_0_object->AddReply(521377, 22556, 22555)  /* Я пойду в Бойни. Спрошу у Старшины про кровь. */; //@t
					bool var_660_bool;
					IsB8q01_State7(var_1_object);
					if(var_660_bool != 0)
						var_0_object->AddReply(521436, 22615, 22614)  /* Я был в Бойнях. То, что я там узнал, трудно воспринять человеку неподготовленному. */; //@t
					bool var_669_bool = false;
					bool var_670_bool;
					IsB8q03_ActiveButNotFinal(var_1_object);
					if(var_670_bool != 0) {
						bool var_686_bool;
						IsOob8Aglaja2_NotYet(var_1_object);
						if(var_686_bool != 0)
							var_669_bool = true;
					}
					if(var_669_bool != 0)
						var_0_object->AddReply(521510, 22672, 22671)  /* У Инквизитора ведь исключительное право наказания преступников? У меня есть сведения по д… */; //@t
					var_0_object->AddReply(521380, -1, 22558)  /* Ничего. Я пришел по делу. */; //@t
					var_0_object->AddReply(530775, -1, 32085)  /* Понимаю тебя. */; //@t
		}
	}
	for(;;) {
		bool var_641_bool;
		IsLSH(var_641_bool);
		if(var_641_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					PlayHeadAnimation(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1530;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1530:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x580";


// @pe
void IsB11q01_DialogCompleted(bool result)
{
	int state;
	GetVariable_int(state, "b11q01");
	if(state == 1000)
		result = true;
	result = false;
}


void IsLoaded(bool bLoaded)
{
	bool tmp;
	@IsLoaded(tmp);
	tmp = bLoaded;
}


// @pe
void SetCurrentMood_t5_DN11(object var_2_object, string var_843_string)
{
	bool var_844_bool;
	IsLSH(var_844_bool);
	if(!var_844_bool) //@nz
		return 0;
	if(var_843_string == var_2_object)
		return 0;
	string var_847_string; bool var_848_bool;
	var_843_string = var_847_string;
	if(var_843_string == "")
		var_848_bool = false;
	else
		var_848_bool = true;
	PlayHeadAnimation_LSH(var_847_string, var_848_bool);
	var_2_object = var_843_string;
	
}


// @pe
void OnQuest_b8q01_Start(void)
{
	@SetVariable("b8q01", 1);
	AddDiary_284_WhoseBloodTitle();
	AddDiary_285_WhoseBloodCheckMurder();
}


void PrepareTradeCamera(bool var_70_bool, object var_71_object, float var_72_float)
{
	cvector var_83_cvector; bool var_90_bool;
	var_71_object->GetPosition(var_83_cvector);
	float var_82_float;
	var_71_object->GetEyesHeight(var_82_float);
	var_91_float = GetByIndex(var_83_cvector, 1);
	SetByIndex(var_83_cvector, 1) = (var_91_float + var_82_float);
	cvector var_84_cvector;
	@GetPosition(var_84_cvector);
	@GetEyesHeight(var_82_float);
	var_92_float = GetByIndex(var_84_cvector, 1);
	SetByIndex(var_84_cvector, 1) = (var_92_float + var_82_float);
	cvector var_85_cvector = var_83_cvector - var_84_cvector;
	var_93_float = GetByIndex(var_85_cvector, 1);
	SetByIndex(var_85_cvector, 1) = (float)0;
	var_95_float = sqrt(var_85_cvector | var_85_cvector);
	var_85_cvector /= var_95_float;
	cvector var_86_cvector = -var_85_cvector;
	cvector var_97_cvector;
	Normalize(var_97_cvector, (var_86_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_87_cvector = ((var_85_cvector * var_72_float) + (var_97_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_89_bool;
	@IsOverrideActive(var_89_bool);
	if(var_89_bool != 0)
		var_70_bool = false;
	@StopWorld();
	@CameraTransit((var_84_cvector + var_87_cvector), var_86_cvector, true);
	var_111_float = GetByIndex(var_87_cvector, 0);
	var_112_float = GetByIndex(var_87_cvector, 2);
	@Rotate(var_111_float, var_112_float);
	bool var_113_bool;
	IsLSH(var_113_bool);
	if(var_113_bool != 0) {
	} else {
		@HasAnimationTrack(var_90_bool, "head");
		if(var_90_bool == 0) goto Label_4293;
		@LookAsyncCamera("head");
	}
Label_4293:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_70_bool = true;
	
}


void PlaySpeechIfExists(bool result, string speechKey)
{
	bool hasSpeech;
	bool isLSH;
	IsLSH(isLSH);
	if(isLSH != 0) {
		@lshHasSpeech(hasSpeech, speechKey);
		if(hasSpeech != 0) {
			@lshPlaySpeech(speechKey);
			result = true;
		}
	}
	result = false;
}


void RestoreDirection(object vInitDir)
{
	dirX = GetByIndex(vInitDir, 0);
	dirZ = GetByIndex(vInitDir, 2);
	@RotateAsync(dirX, dirZ);
}


// @pe
void IsOob11Aglaja1_NotYet(bool result)
{
	int state;
	GetVariable_int(state, "oob11Aglaja1");
	if(state == 0) {
		result = true;
		return 0;
	}
	result = false;
}


void IsPlayerNear(bool result)
{
	object player;
	@FindActor(player, "player");
	if(!player) { //@nz
		result = false;
		return 4;
	}
	float distSqr; object playerCopy;
	GetActorDistanceSqr(distSqr, playerCopy);
	if(distSqr > 90000.0) {
		result = false;
		return 4;
	}
	bool bCanSee;
	@CanSee(bCanSee, playerCopy);
	bCanSee = result;
}
EMIT "Stack[-2] = 0";


// @pe
void Set_oob8Aglaja1(void)
{
	@SetVariable("oob8Aglaja1", 1);
}


void StopLSHSpeechIfActive(void)
{
	bool isLSH;
	IsLSH(isLSH);
	if(isLSH != 0)
		@lshStopSpeech();
}


// @pe
void OnQuest_b8q01_Complete(void)
{
	AddDiary_292_UdurgRealization();
	bool triggered;
	TriggerNamedActor(triggered, "quest_b8_01", "completed");
}


void GetWorldMap(object out)
{
	object scene; object mapObj;
	@GetMainOutdoorScene(scene);
	if(scene == null) {
		@Trace("Can't find main outdoor scene");
		mapObj = null;
		mapObj = out;
	}
	scene->GetMap(mapObj);
	mapObj = out;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void IsOob11Aglaja2_NotYet(bool result)
{
	int state;
	GetVariable_int(state, "oob11Aglaja2");
	if(state == 0) {
		result = true;
		return 0;
	}
	result = false;
}


void self(object out)
{
	object tmp;
	@self(tmp);
	tmp = out;
}
EMIT "Stack[-1] = 0";


// @pe
void SetCurrentMood_t7_DN8Night(object var_2_object, string var_332_string)
{
	bool var_333_bool;
	IsLSH(var_333_bool);
	if(!var_333_bool) //@nz
		return 0;
	if(var_332_string == var_2_object)
		return 0;
	string var_336_string; bool var_337_bool;
	var_332_string = var_336_string;
	if(var_332_string == "")
		var_337_bool = false;
	else
		var_337_bool = true;
	PlayHeadAnimation_LSH(var_336_string, var_337_bool);
	var_2_object = var_332_string;
	
}


// @pe
void Set_oob8Aglaja2(void)
{
	@SetVariable("oob8Aglaja2", 1);
}


// @pe
void IsB9q03BadInit_Set(bool result)
{
	int state;
	GetVariable_int(state, "b9q03BadInit");
	if(state != 0) {
		result = true;
		return 0;
	}
	result = false;
}


void InitSpeechTimer(void)
{
	float fWaitTime;
	@rand(fWaitTime, 8, 16);
	@SetTimer(10, fWaitTime);
}


void Normalize(cvector out, cvector v)
{
	float len = sqrt(v | v);
	if(len < 0.000001)
		out = [0.0, 0.0, 0.0];
	out = v / len;
}


// @pe
void Set_oob11Aglaja1(void)
{
	@SetVariable("oob11Aglaja1", 1);
}


void CreateLocatorMapEntry(object var_111_object, string var_112_string, float var_113_float)
{
	object var_121_object;
	@GetMainOutdoorScene(var_121_object);
	if(var_121_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_119_cvector;
	cvector var_120_cvector;
	bool var_122_bool;
	var_121_object->GetLocator(var_112_string, var_122_bool, var_119_cvector, var_120_cvector);
	if(!var_122_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_112_string) + " doesnt exist");
	var_121_object->GetMap(var_111_object);
	if(var_111_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_132_float = GetByIndex(var_119_cvector, 0);
	var_133_float = GetByIndex(var_119_cvector, 2);
	var_111_object->SetMapParams(var_132_float, var_133_float, var_113_float);
}
EMIT "Stack[-2] = 0";


void TDlgLauncher_DN9_Burah_Aglaja(object var_0_object, int var_705_int, object var_706_object)
{
	var_0_object = var_706_object;
	bool var_716_bool; object var_717_object;
	var_706_object = var_717_object;
	PrepareTradeCamera(var_716_bool, var_717_object, 70.0);
	if(!var_716_bool) { //@nz
		var_705_int = -2;
		return 8;
	}
	object var_712_object;
	@CreateDialog(var_712_object);
	int var_720_int;
	GetSelfNPCNameID(var_720_int);
	var_712_object->SetNPCName(var_720_int);
	int var_721_int;
	GetSelfNPCDescriptionID(var_721_int);
	var_712_object->SetNPCDescription(var_721_int);
	string var_722_string;
	GetSelfPhotoPath(var_722_string);
	var_712_object->SetPhoto(var_722_string);
	string var_723_string;
	GetSelfPhoto2Path(var_723_string);
	var_712_object->SetPhoto2(var_723_string);
	int var_724_int;
	GetPlayerNameIDByBranch(var_724_int);
	var_712_object->SetPlayerName(var_724_int);
	bool var_713_bool;
	@IsOverrideActive(var_713_bool);
	if(var_713_bool != 0) {
		var_705_int = -2;
		return 8;
	}
	@DoDialog(var_712_object);
	bool var_726_bool; object var_727_object;
	object var_728_object;
	self(var_728_object);
	var_728_object = var_727_object;
	RegisterCommonSpeech(var_726_bool, var_727_object);
	object var_729_object; object var_730_object;
	var_706_object = var_729_object;
	var_712_object = var_730_object;
	TaskCall(11);
	TDlgBody_DN9_Burah_Aglaja(var_731_object, var_732_object, var_733_string, var_734_bool, var_729_object, var_730_object);
	TaskReturn();
	bool var_715_bool;
	var_712_object->IsDialogEnd(var_715_bool);
	
	for(;;) {
		var_798_bool = !var_715_bool; //@nz
		if(var_798_bool == 0) goto Label_3310;
		@sync();
		var_712_object->IsDialogEnd(var_715_bool);
	}
	
Label_3310:
	object var_799_object;
	var_706_object = var_799_object;
	RestoreCameraAfterDialog();
	@StopDialog(var_712_object);
	var_712_object->GetReturnValue(-1);
	int var_714_int = var_705_int;
}
EMIT "Stack[-4] = 0";


void KillSpeechTimer(void)
{
	@KillTimer(10);
}


// @pe
void Set_oob11Aglaja2(void)
{
	@SetVariable("oob11Aglaja2", 1);
}


void GetVariable_int(int result, string key)
{
	int tmp;
	@GetVariable(key, tmp);
	tmp = result;
}


// @pe
void IsB9q03BonefiresCount4(bool result)
{
	int count;
	GetVariable_int(count, "b9q03BonefiresCount");
	if(count == 4)
		result = true;
	result = false;
}


void AddBlankActorToScene(object actor, string name)
{
	object scene;
	@GetMainOutdoorScene(scene);
	object newActor;
	@AddBlankActor(newActor, scene, name, (name + ".bin"));
	newActor = actor;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void Set_oob9Aglaja1(void)
{
	@SetVariable("oob9Aglaja1", 1);
}


// @pe
void Set_oob9Aglaja2(void)
{
	@SetVariable("oob9Aglaja2", 1);
}


// @pe
void IsOob9Aglaja1_NotYet(bool result)
{
	int state;
	GetVariable_int(state, "oob9Aglaja1");
	if(state == 0) {
		result = true;
		return 0;
	}
	result = false;
}


void SetDoorLocked(string doorName, bool locked)
{
	object door;
	@FindActor(door, doorName);
	if(!door) //@nz
		@Trace(("Door " + doorName) + " not found");
	else
		door->SetProperty("locked", locked);
	
}
EMIT "Stack[-1] = 0";


// @pe
void Set_map_chertez_state_atleast_1(void)
{
	int var_99_int;
	GetVariable_int(var_99_int, "map_chertez_state");
	if(var_99_int <= 1) {
		@SetVariable("map_chertez_state", 1);
		@SetVariable("map_chertez_force", 1);
	}
}


// @pe
void TDlgBody_Mt_Burah_Aglaja(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_226_object, object var_227_object)
{
	var_0_object = var_227_object;
	var_1_object = var_226_object;
	var_3_string = false;
	if(1 != 0) {
		SetCurrentMood_t13_Mt(var_227_object, "Threat");
		var_0_object->SetMessage(530682)  /* Велика власть одних над другими - не правда ли? Кто в наше время может остаться свободным… */; //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(530683, 31974, 31973)  /* Кто, например? */; //@t
		var_0_object->AddReply(530688, 31974, 31978)  /* Не так-то просто обмануть человека. */; //@t
		goto Label_3802;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xec2";
	}
Label_3802:
	bool var_257_bool;
	IsLSH(var_257_bool);
	if(var_257_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				PlayHeadAnimation(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3831;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3831:
		return 0;

	}
	
}


// @pe
void IsOob9Aglaja2_NotYet(bool result)
{
	int state;
	GetVariable_int(state, "oob9Aglaja2");
	if(state == 0) {
		result = true;
		return 0;
	}
	result = false;
}


void GetPlayerNameIDByBranch(int id)
{
	int branchID;
	@GetVariable("branch", branchID);
	if(branchID == 0) {
		id = 1;
		return 2;
	EMIT "GOTO 0x14d8";
	}
	if(branchID == 1) {
		id = 2;
		return 2;
	}
	id = 3;
}


void RestoreCameraAfterDialog(void)
{
	bool var_278_bool;
	@CameraSwitchToNormal(true);
	bool var_280_bool;
	IsLSH(var_280_bool);
	if(var_280_bool != 0) {
	} else {
		@HasAnimationTrack(var_278_bool, "head");
		if(var_278_bool == 0) goto Label_4316;
		@UnlookAsync("head");
	}
Label_4316:
	
}


void HasInventoryItem(bool result, object actor, string itemName)
{
	int itemID;
	@GetInvItemByName(itemID, itemName);
	bool has;
	actor->HasItem(itemID, has);
	has = result;
}


// @pe
void Set_map_chertez_state_atleast_2(void)
{
	int var_196_int;
	GetVariable_int(var_196_int, "map_chertez_state");
	if(var_196_int <= 2) {
		@SetVariable("map_chertez_state", 2);
		@SetVariable("map_chertez_force", 1);
	}
}


void TDlgLauncher_DN11_Burah_Aglaja(object var_0_object, int var_802_int, object var_803_object)
{
	var_0_object = var_803_object;
	bool var_813_bool; object var_814_object;
	var_803_object = var_814_object;
	PrepareTradeCamera(var_813_bool, var_814_object, 70.0);
	if(!var_813_bool) { //@nz
		var_802_int = -2;
		return 8;
	}
	object var_809_object;
	@CreateDialog(var_809_object);
	int var_817_int;
	GetSelfNPCNameID(var_817_int);
	var_809_object->SetNPCName(var_817_int);
	int var_818_int;
	GetSelfNPCDescriptionID(var_818_int);
	var_809_object->SetNPCDescription(var_818_int);
	string var_819_string;
	GetSelfPhotoPath(var_819_string);
	var_809_object->SetPhoto(var_819_string);
	string var_820_string;
	GetSelfPhoto2Path(var_820_string);
	var_809_object->SetPhoto2(var_820_string);
	int var_821_int;
	GetPlayerNameIDByBranch(var_821_int);
	var_809_object->SetPlayerName(var_821_int);
	bool var_810_bool;
	@IsOverrideActive(var_810_bool);
	if(var_810_bool != 0) {
		var_802_int = -2;
		return 8;
	}
	@DoDialog(var_809_object);
	bool var_823_bool; object var_824_object;
	object var_825_object;
	self(var_825_object);
	var_825_object = var_824_object;
	RegisterCommonSpeech(var_823_bool, var_824_object);
	object var_826_object; object var_827_object;
	var_803_object = var_826_object;
	var_809_object = var_827_object;
	TaskCall(5);
	TDlgBody_DN11_Burah_Aglaja(var_828_object, var_829_object, var_830_string, var_831_bool, var_826_object, var_827_object);
	TaskReturn();
	bool var_812_bool;
	var_809_object->IsDialogEnd(var_812_bool);
	
	for(;;) {
		var_883_bool = !var_812_bool; //@nz
		if(var_883_bool == 0) goto Label_2325;
		@sync();
		var_809_object->IsDialogEnd(var_812_bool);
	}
	
Label_2325:
	object var_884_object;
	var_803_object = var_884_object;
	RestoreCameraAfterDialog();
	@StopDialog(var_809_object);
	var_809_object->GetReturnValue(-1);
	int var_811_int = var_802_int;
}
EMIT "Stack[-4] = 0";


// @pe
void IsActor_NotDiseased(bool result, object actor)
{
	object actorCopy;
	actor = actorCopy;
	bool ok;
	IsObjectDiseasePropertyZero(ok, actorCopy);
	if(ok != 0) {
		result = true;
		return 0;
	}
	result = false;
}


void TriggerNamedActor(bool result, string actorName, string event)
{
	object actor;
	@FindActor(actor, actorName);
	if(actor == null)
		result = false;
	@Trigger(actor, event);
	result = true;
}
EMIT "Stack[-1] = 0";


void PerformUse(object actor)
{
	int iMeeting;
	@GetVariable("mt_aglaja", iMeeting);
	if(!iMeeting) { //@nz
		int var_59_int; object var_60_object;
		actor = var_60_object;
		TaskCall(12);
		TDlgLauncher_Mt_Burah_Aglaja(var_61_object, var_59_int, var_60_object);
		TaskReturn();
		@SetVariable("mt_aglaja", 1);
	}
	bool bNight8;
	IsNight(bNight8, 8);
	if(bNight8 != 0) {
		int var_301_int; object var_302_object;
		actor = var_302_object;
		TaskCall(6);
		TDlgLauncher_DN8_Burah_AglajaNight(var_303_object, var_301_int, var_302_object);
		TaskReturn();
		return 2;
	}
	bool bNight12;
	IsNight(bNight12, 12);
	if(bNight12 != 0) {
		int var_359_int; object var_360_object;
		actor = var_360_object;
		TaskCall(8);
		TDlgLauncher_DN12_Burah_AglajaNight(var_361_object, var_359_int, var_360_object);
		TaskReturn();
		return 2;
	}
	bool bDay7;
	IsDay(bDay7, 7);
	if(bDay7 != 0) {
		int var_418_int; object var_419_object;
		actor = var_419_object;
		TaskCall(0);
		TDlgLauncher_DN7_Burah_Aglaja(var_420_object, var_418_int, var_419_object);
		TaskReturn();
		return 2;
	}
	bool bDay8;
	IsDay(bDay8, 8);
	if(bDay8 != 0) {
		int var_585_int; object var_586_object;
		actor = var_586_object;
		TaskCall(2);
		TDlgLauncher_DN8_Burah_Aglaja(var_587_object, var_585_int, var_586_object);
		TaskReturn();
		return 2;
	}
	bool bDay9;
	IsDay(bDay9, 9);
	if(bDay9 != 0) {
		int var_705_int; object var_706_object;
		actor = var_706_object;
		TaskCall(10);
		TDlgLauncher_DN9_Burah_Aglaja(var_707_object, var_705_int, var_706_object);
		TaskReturn();
		return 2;
	}
	bool bDay11;
	IsDay(bDay11, 11);
	if(bDay11 != 0) {
		int var_802_int; object var_803_object;
		actor = var_803_object;
		TaskCall(4);
		TDlgLauncher_DN11_Burah_Aglaja(var_804_object, var_802_int, var_803_object);
		TaskReturn();
		return 2;
	}
}


// @pe
void IsB7q01_State6(bool result)
{
	int state;
	GetVariable_int(state, "b7q01");
	if(state == 6)
		result = true;
	result = false;
}


void RegisterCommonSpeech(bool var_131_bool, object var_132_object)
{
	int var_138_int; int var_139_int;
	@GetVariable("voice_common", var_138_int);
	if(var_138_int != 0) {
		bool var_142_bool; object var_143_object;
		var_132_object = var_143_object;
		StartCommonSpeech(var_142_bool, var_143_object);
		if(!var_142_bool) { //@nz
			bool var_173_bool; object var_174_object;
			var_132_object = var_174_object;
			StartDayMonthSpeech(var_173_bool, var_174_object);
			if(!var_173_bool) { //@nz
				var_131_bool = false;
				return 4;
			}
		}
		@irand(var_139_int, 2);
		if(var_139_int != 0)
			@SetVariable("voice_common", ((var_138_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_218_bool; object var_219_object;
		var_132_object = var_219_object;
		StartDayMonthSpeech(var_218_bool, var_219_object);
		if(!var_218_bool) { //@nz
			bool var_221_bool; object var_222_object;
			var_132_object = var_222_object;
			StartCommonSpeech(var_221_bool, var_222_object);
			if(!var_221_bool) { //@nz
				var_131_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4373;
	
Label_4373:
	var_131_bool = true;
	
}


void TDlgLauncher_DN12_Burah_AglajaNight(object var_0_object, int var_359_int, object var_360_object)
{
	var_0_object = var_360_object;
	bool var_370_bool; object var_371_object;
	var_360_object = var_371_object;
	PrepareTradeCamera(var_370_bool, var_371_object, 70.0);
	if(!var_370_bool) { //@nz
		var_359_int = -2;
		return 8;
	}
	object var_366_object;
	@CreateDialog(var_366_object);
	int var_374_int;
	GetSelfNPCNameID(var_374_int);
	var_366_object->SetNPCName(var_374_int);
	int var_375_int;
	GetSelfNPCDescriptionID(var_375_int);
	var_366_object->SetNPCDescription(var_375_int);
	string var_376_string;
	GetSelfPhotoPath(var_376_string);
	var_366_object->SetPhoto(var_376_string);
	string var_377_string;
	GetSelfPhoto2Path(var_377_string);
	var_366_object->SetPhoto2(var_377_string);
	int var_378_int;
	GetPlayerNameIDByBranch(var_378_int);
	var_366_object->SetPlayerName(var_378_int);
	bool var_367_bool;
	@IsOverrideActive(var_367_bool);
	if(var_367_bool != 0) {
		var_359_int = -2;
		return 8;
	}
	@DoDialog(var_366_object);
	bool var_380_bool; object var_381_object;
	object var_382_object;
	self(var_382_object);
	var_382_object = var_381_object;
	RegisterCommonSpeech(var_380_bool, var_381_object);
	object var_383_object; object var_384_object;
	var_360_object = var_383_object;
	var_366_object = var_384_object;
	TaskCall(9);
	TDlgBody_DN12_Burah_AglajaNight(var_385_object, var_386_object, var_387_string, var_388_bool, var_383_object, var_384_object);
	TaskReturn();
	bool var_369_bool;
	var_366_object->IsDialogEnd(var_369_bool);
	
	for(;;) {
		var_413_bool = !var_369_bool; //@nz
		if(var_413_bool == 0) goto Label_3107;
		@sync();
		var_366_object->IsDialogEnd(var_369_bool);
	}
	
Label_3107:
	object var_414_object;
	var_360_object = var_414_object;
	RestoreCameraAfterDialog();
	@StopDialog(var_366_object);
	var_366_object->GetReturnValue(-1);
	int var_368_int = var_359_int;
}
EMIT "Stack[-4] = 0";


// @pe
void ShowChertezMapToActor(object actor)
{
	object worldMap1;
	GetWorldMap(worldMap1);
	object worldMap2;
	worldMap1 = worldMap2;
	CreateLocatorMapEntry(worldMap2, "pt_map_aglaja", (float)-1);
	object worldMap3;
	GetWorldMap(worldMap3);
	actor->ShowMap(worldMap3);
}


void GetGameTime(float fTime)
{
	float tmp;
	@GetGameTime(tmp);
	tmp = fTime;
}


void GetDay(int iDay)
{
	float fTime;
	@GetGameTime(fTime);
	iDay = 1 + (fTime / 24);
}


// @pe
void ActorHasBurahSerum(bool result, object actor)
{
	object actorCopy;
	actor = actorCopy;
	bool has;
	HasInventoryItem(has, actorCopy, "burah_serum");
	if(has != 0) {
		result = true;
		return 0;
	}
	result = false;
}


// @pe
void IsDay(bool result, int iDay)
{
	int today;
	GetDay(today);
	result = today == iDay;
}


// @pe
void IsB7q01_DialogCompleted(bool result)
{
	int state;
	GetVariable_int(state, "b7q01");
	if(state == 1000)
		result = true;
	result = false;
}


// @pe
void IsB7q01_State8(bool result)
{
	int state;
	GetVariable_int(state, "b7q01");
	if(state == 8)
		result = true;
	result = false;
}


void IsNight(bool result, int iDay)
{
	float fTime;
	@GetGameTime(fTime);
	if((1 + (fTime / 24)) != iDay)
		result = false;
	int iTime;
	fTime = iTime;
	int iHour = iTime % 24;
	result = iHour < 7;
}


// @pe
void SetCurrentMood_t13_Mt(object var_2_object, string var_233_string)
{
	bool var_234_bool;
	IsLSH(var_234_bool);
	if(!var_234_bool) //@nz
		return 0;
	if(var_233_string == var_2_object)
		return 0;
	string var_237_string; bool var_238_bool;
	var_233_string = var_237_string;
	if(var_233_string == "")
		var_238_bool = false;
	else
		var_238_bool = true;
	PlayHeadAnimation_LSH(var_237_string, var_238_bool);
	var_2_object = var_233_string;
	
}


// @pe
void TDlgBody_DN9_Burah_Aglaja(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_729_object, object var_730_object)
{
	var_0_object = var_730_object;
	var_1_object = var_729_object;
	var_3_string = false;
	if(1 != 0) {
		SetCurrentMood_t11_DN9(var_730_object, "Neutral");
		var_0_object->SetMessage(530357)  /* Ты лучше уходи... ты справишься и без моей помощи. */; //@t
		var_0_object->ClearReplies(); //@t
		bool var_745_bool = false;
		bool var_746_bool = false;
		bool var_747_bool;
		IsB9q03BonefiresCount4(var_1_object);
		if(var_747_bool != 0) {
			bool var_753_bool;
			IsB9q03BadInit_Set(var_1_object);
			if(!var_753_bool) //@nz
				var_746_bool = true;
		}
		if(var_746_bool != 0) {
			bool var_760_bool;
			IsOob9Aglaja1_NotYet(var_1_object);
			if(var_760_bool != 0)
				var_745_bool = true;
		}
		if(var_745_bool != 0)
			var_0_object->AddReply(530358, 32319, 31732)  /* Я зажег сигнальные костры. */; //@t
		bool var_769_bool = false;
		bool var_770_bool = false;
		bool var_771_bool;
		IsB9q03BonefiresCount4(var_1_object);
		if(var_771_bool != 0) {
			bool var_773_bool;
			IsB9q03BadInit_Set(var_1_object);
			if(var_773_bool != 0)
				var_770_bool = true;
		}
		if(var_770_bool != 0) {
			bool var_775_bool;
			IsOob9Aglaja2_NotYet(var_1_object);
			if(var_775_bool != 0)
				var_769_bool = true;
		}
		if(var_769_bool != 0)
			var_0_object->AddReply(530361, 31736, 31735)  /* Если тебе интересно - я зажег костры. */; //@t
		var_0_object->AddReply(530916, -1, 32243)  /* Как скажешь. */; //@t
		var_0_object->AddReply(530917, -1, 32244)  /* Никто не упрекнет тебя. */; //@t
		goto Label_3406;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xcfd";
	}
Label_3406:
	bool var_790_bool;
	IsLSH(var_790_bool);
	if(var_790_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				PlayHeadAnimation(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_3435;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3435:
		return 0;

	}
	
}


// @pe
void SetCurrentMood_t3_DN8(object var_2_object, string var_626_string)
{
	bool var_627_bool;
	IsLSH(var_627_bool);
	if(!var_627_bool) //@nz
		return 0;
	if(var_626_string == var_2_object)
		return 0;
	string var_630_string; bool var_631_bool;
	var_626_string = var_630_string;
	if(var_626_string == "")
		var_631_bool = false;
	else
		var_631_bool = true;
	PlayHeadAnimation_LSH(var_630_string, var_631_bool);
	var_2_object = var_626_string;
	
}


// @pe
void IsOob7Aglaja1_NotYet(bool result)
{
	int state;
	GetVariable_int(state, "oob7Aglaja1");
	if(state == 0) {
		result = true;
		return 0;
	}
	result = false;
}


void IsObjectDiseasePropertyZero(bool result, object obj)
{
	float disease;
	obj->GetProperty("disease", disease);
	result = disease == 0;
}


