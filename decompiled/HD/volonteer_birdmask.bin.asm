GlobalVarCount = 0

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	npc
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	HasItem
	volonteers_danko
	rescue_oneday
	volonteers_burah
	volonteers_klara
	feromicin
	RemoveItemByType
	monomicin
	playsound
	giveitem
	oo
	1
	powder
	burah_serum
	rescue
	branch
	alexandr
	andrei
	anna
	bigvlad
	eva
	georg
	grif
	han
	julia
	kapella
	katerina
	laska
	maria
	mark
	mat
	mishka
	mladvlad
	notkin
	ospina
	petr
	rubin
	spi4ka
	starshina
	viktor
	wasted_woman
	wasted_male
	alkash
	boy
	girl
	littleboy
	littlegirl
	butcher
	dohodyaga
	unosha
	vaxxabit
	vaxxabitka
	worker
	whitemask
	birdmask
	patrol
	alkash_d
	boy_d
	butcher_d
	dohodyaga_d
	girl_d
	littleboy_d
	littlegirl_d
	unosha2
	unosha_d
	unosha2_d
	vaxxabit_d
	vaxxabitka_d
	wasted_male_d
	wasted_woman_d
	worker2
	worker_d
	worker2_d
	gorbun_daughter
	gorbun
	albinos
	aglaja
	nude
	block
	officer
	doberman
	grabitel
	gatherer_wife
	rat_prophet
	morlok
	soldier
	britva
	kabaktchik
	sanitar
	salesman
	ayyan
	petrbirdmask
	mogila
	klikusha
	karlik
	lisa
	vol_
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Sleep (1 args)
	GetProperty (2 args)
	Trace (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetInvItemByName (2 args)
	Trigger (3 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetVariable (2 args)
	_strlwr (1 args)

RunOp = 0x46d
RunTask = 6

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x120 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x351 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x443 Vars = (int, int)
	GTASK_6 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x477 Vars = (object)
		EVENT_7 Op = 0x4dd Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x552

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x982

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x980

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x984

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x986

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x712

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x597

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0x50: PushEmpty(bool)
0x51: Stack[-1] = (bool) 0
0x52: PushEmpty(bool, object)
0x53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54: Call2 0x6c2

0x55: Pop(1)
0x56: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x6a2

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5c: Stack[-1] = (bool) 1
0x5d: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x5e: PushEmpty(object, object)
0x5f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x60: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x61: Call2 0x64f

0x62: Pop(2)
0x63: PushEmpty(string)
0x64: Stack[-1] = "Neutral"
0x65: Call2 0x10a

0x66: Pop(1)
0x67: Push((int) 514075)
0x68: @@ SetMessage(Stack[-1])
0x69: Pop(1)
0x6a: @@ ClearReplies()
0x6b: Pop(0)
0x6c: Push((int) 514076)
0x6d: Push((int) 15314)
0x6e: Push((int) 15313)
0x6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70: Pop(3)
0x71: Push((int) 534587)
0x72: Push((int) -1)
0x73: Push((int) 36225)
0x74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75: Pop(3)
0x76: GOTO 0xec

0x77: PushEmpty(bool)
0x78: Stack[-1] = (bool) 0
0x79: PushEmpty(bool, object)
0x7a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b: Call2 0x6c2

0x7c: Pop(1)
0x7d: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x7e: PushEmpty(bool, object)
0x7f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80: Call2 0x6a2

0x81: Pop(1)
0x82: Pop(1); Push((bool) Stack[-1] == 0)
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: Stack[-1] = (bool) 1
0x85: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x86: PushEmpty(object, object)
0x87: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x88: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x89: Call2 0x64f

0x8a: Pop(2)
0x8b: PushEmpty(string)
0x8c: Stack[-1] = "Neutral"
0x8d: Call2 0x10a

0x8e: Pop(1)
0x8f: Push((int) 541516)
0x90: @@ SetMessage(Stack[-1])
0x91: Pop(1)
0x92: @@ ClearReplies()
0x93: Pop(0)
0x94: Push((int) 541517)
0x95: Push((int) 43681)
0x96: Push((int) 43680)
0x97: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98: Pop(3)
0x99: Push((int) 541523)
0x9a: Push((int) -1)
0x9b: Push((int) 43686)
0x9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d: Pop(3)
0x9e: GOTO 0xec

0x9f: PushEmpty(string)
0xa0: Stack[-1] = "Neutral"
0xa1: Call2 0x10a

0xa2: Pop(1)
0xa3: Push((int) 514079)
0xa4: @@ SetMessage(Stack[-1])
0xa5: Pop(1)
0xa6: @@ ClearReplies()
0xa7: Pop(0)
0xa8: PushEmpty(bool, object)
0xa9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Call2 0x6ac

0xab: Pop(1)
0xac: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xad: Push((int) 514080)
0xae: Push((int) 15318)
0xaf: Push((int) 15317)
0xb0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1: Pop(3)
0xb2: PushEmpty(bool, object)
0xb3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Call2 0x6b7

0xb5: Pop(1)
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: Push((int) 514110)
0xb8: Push((int) 15326)
0xb9: Push((int) 15325)
0xba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb: Pop(3)
0xbc: PushEmpty(bool)
0xbd: Stack[-1] = (bool) 0
0xbe: PushEmpty(bool, object)
0xbf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Call2 0x68c

0xc1: Pop(1)
0xc2: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc3: PushEmpty(bool, object)
0xc4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Call2 0x6cc

0xc6: Pop(1)
0xc7: Pop(1); Push((bool) Stack[-1] == 0)
0xc8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc9: Stack[-1] = (bool) 1
0xca: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xcb: Push((int) 532117)
0xcc: Push((int) 33529)
0xcd: Push((int) 33528)
0xce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf: Pop(3)
0xd0: PushEmpty(bool)
0xd1: Stack[-1] = (bool) 0
0xd2: PushEmpty(bool, object)
0xd3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd4: Call2 0x697

0xd5: Pop(1)
0xd6: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd7: PushEmpty(bool, object)
0xd8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd9: Call2 0x6cc

0xda: Pop(1)
0xdb: Pop(1); Push((bool) Stack[-1] == 0)
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: Stack[-1] = (bool) 1
0xde: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xdf: Push((int) 532120)
0xe0: Push((int) 33532)
0xe1: Push((int) 33531)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Push((int) 514082)
0xe5: Push((int) -1)
0xe6: Push((int) 15319)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: GOTO 0xec

0xea: Return(); Pop(0)

0xeb: GOTO 0x4e

0xec: PushEmpty(bool)
0xed: Call2 0x988

0xee: Pop(0)
0xef: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf0: @ lshWaitForAnimEnd()
0xf1: Pop(0)
0xf2: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf3: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xf4: GOTO 0xfa

0xf5: PushEmpty(string)
0xf6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf7: Call2 0x5a9

0xf8: Pop(1)
0xf9: GOTO 0xf0

0xfa: GOTO 0x109

0xfb: Push("all")
0xfc: Push("idle")
0xfd: @ PlayAnimation(Stack[-2], Stack[-1])
0xfe: Pop(2)
0xff: @ WaitForAnimEnd()
0x100: Pop(0)
0x101: Push( Stack[3 + Tasks[-1].StackPointer] )
0x102: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x103: GOTO 0x109

0x104: Push("all")
0x105: Push("idle")
0x106: @ PlayAnimation(Stack[-2], Stack[-1])
0x107: Pop(2)
0x108: GOTO 0xff

0x109: Return(); Pop(0)

0x10a: PushEmpty()
0x10b: PushEmpty(bool)
0x10c: Call2 0x988

0x10d: Pop(0)
0x10e: Pop(1); Push((bool) Stack[-1] == 0)
0x10f: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x110: Return(); Pop(0)

0x111: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x112: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x113: Return(); Pop(0)

0x114: PushEmpty(string, bool)
0x115: Stack[-2] = Stack[-3]
0x116: Push("")
0x117: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x118: IF (Stack[-1] == 0) GOTO 0x11b; Pop(1)

0x119: Stack[-1] = (bool) 0
0x11a: GOTO 0x11c

0x11b: Stack[-1] = (bool) 1
0x11c: Call2 0x5b9

0x11d: Pop(2)
0x11e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x11f: Return(); Pop(0)

0x120: PushEmpty()
0x121: Push((int) 1)
0x122: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x123: PushEmpty()
0x124: Call2 0x5d3

0x125: Pop(0)
0x126: Push((int) 15324)
0x127: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x129: PushEmpty(object, object)
0x12a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12c: Call2 0x661

0x12d: Pop(2)
0x12e: PushEmpty(object, object)
0x12f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x130: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x131: Call2 0x667

0x132: Pop(2)
0x133: PushEmpty(object, object)
0x134: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x135: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x136: Call2 0x649

0x137: Pop(2)
0x138: Push((int) 15327)
0x139: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x13b: PushEmpty(object, object)
0x13c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13e: Call2 0x65b

0x13f: Pop(2)
0x140: PushEmpty(object, object)
0x141: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x142: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x143: Call2 0x667

0x144: Pop(2)
0x145: PushEmpty(object, object)
0x146: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x147: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x148: Call2 0x649

0x149: Pop(2)
0x14a: Push((int) 33530)
0x14b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x14d: PushEmpty(object, object)
0x14e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x150: Call2 0x618

0x151: Pop(2)
0x152: PushEmpty(object, object)
0x153: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x154: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x155: Call2 0x643

0x156: Pop(2)
0x157: PushEmpty(object, object)
0x158: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x159: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15a: Call2 0x649

0x15b: Pop(2)
0x15c: Push((int) 33533)
0x15d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x15f: PushEmpty(object, object)
0x160: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x161: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x162: Call2 0x618

0x163: Pop(2)
0x164: PushEmpty(object, object)
0x165: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x166: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x167: Call2 0x63d

0x168: Pop(2)
0x169: PushEmpty(object, object)
0x16a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16c: Call2 0x649

0x16d: Pop(2)
0x16e: Push((int) 15312)
0x16f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x171: PushEmpty(bool)
0x172: Stack[-1] = (bool) 0
0x173: PushEmpty(bool, object)
0x174: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x175: Call2 0x6c2

0x176: Pop(1)
0x177: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x178: PushEmpty(bool, object)
0x179: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17a: Call2 0x6a2

0x17b: Pop(1)
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: Stack[-1] = (bool) 1
0x17e: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x17f: PushEmpty(object, object)
0x180: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x181: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x182: Call2 0x64f

0x183: Pop(2)
0x184: PushEmpty(string)
0x185: Stack[-1] = "Neutral"
0x186: Call2 0x10a

0x187: Pop(1)
0x188: Push((int) 514075)
0x189: @@ SetMessage(Stack[-1])
0x18a: Pop(1)
0x18b: @@ ClearReplies()
0x18c: Pop(0)
0x18d: Push((int) 514076)
0x18e: Push((int) 15314)
0x18f: Push((int) 15313)
0x190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x191: Pop(3)
0x192: Push((int) 534587)
0x193: Push((int) -1)
0x194: Push((int) 36225)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Return(); Pop(0)

0x198: PushEmpty(bool)
0x199: Stack[-1] = (bool) 0
0x19a: PushEmpty(bool, object)
0x19b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19c: Call2 0x6c2

0x19d: Pop(1)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x19f: PushEmpty(bool, object)
0x1a0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a1: Call2 0x6a2

0x1a2: Pop(1)
0x1a3: Pop(1); Push((bool) Stack[-1] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a5: Stack[-1] = (bool) 1
0x1a6: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1a7: PushEmpty(object, object)
0x1a8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1aa: Call2 0x64f

0x1ab: Pop(2)
0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "Neutral"
0x1ae: Call2 0x10a

0x1af: Pop(1)
0x1b0: Push((int) 541516)
0x1b1: @@ SetMessage(Stack[-1])
0x1b2: Pop(1)
0x1b3: @@ ClearReplies()
0x1b4: Pop(0)
0x1b5: Push((int) 541517)
0x1b6: Push((int) 43681)
0x1b7: Push((int) 43680)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Push((int) 541523)
0x1bb: Push((int) -1)
0x1bc: Push((int) 43686)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: PushEmpty(string)
0x1c1: Stack[-1] = "Neutral"
0x1c2: Call2 0x10a

0x1c3: Pop(1)
0x1c4: Push((int) 514079)
0x1c5: @@ SetMessage(Stack[-1])
0x1c6: Pop(1)
0x1c7: @@ ClearReplies()
0x1c8: Pop(0)
0x1c9: PushEmpty(bool, object)
0x1ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cb: Call2 0x6ac

0x1cc: Pop(1)
0x1cd: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1ce: Push((int) 514080)
0x1cf: Push((int) 15318)
0x1d0: Push((int) 15317)
0x1d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d2: Pop(3)
0x1d3: PushEmpty(bool, object)
0x1d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d5: Call2 0x6b7

0x1d6: Pop(1)
0x1d7: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d8: Push((int) 514110)
0x1d9: Push((int) 15326)
0x1da: Push((int) 15325)
0x1db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1dc: Pop(3)
0x1dd: PushEmpty(bool)
0x1de: Stack[-1] = (bool) 0
0x1df: PushEmpty(bool, object)
0x1e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e1: Call2 0x68c

0x1e2: Pop(1)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e4: PushEmpty(bool, object)
0x1e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e6: Call2 0x6cc

0x1e7: Pop(1)
0x1e8: Pop(1); Push((bool) Stack[-1] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: Stack[-1] = (bool) 1
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f1; Pop(1)

0x1ec: Push((int) 532117)
0x1ed: Push((int) 33529)
0x1ee: Push((int) 33528)
0x1ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f0: Pop(3)
0x1f1: PushEmpty(bool)
0x1f2: Stack[-1] = (bool) 0
0x1f3: PushEmpty(bool, object)
0x1f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f5: Call2 0x697

0x1f6: Pop(1)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1f8: PushEmpty(bool, object)
0x1f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fa: Call2 0x6cc

0x1fb: Pop(1)
0x1fc: Pop(1); Push((bool) Stack[-1] == 0)
0x1fd: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fe: Stack[-1] = (bool) 1
0x1ff: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x200: Push((int) 532120)
0x201: Push((int) 33532)
0x202: Push((int) 33531)
0x203: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x204: Pop(3)
0x205: Push((int) 514082)
0x206: Push((int) -1)
0x207: Push((int) 15319)
0x208: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x209: Pop(3)
0x20a: Return(); Pop(0)

0x20b: Push((int) 33532)
0x20c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x20e: PushEmpty(string)
0x20f: Stack[-1] = "Neutral"
0x210: Call2 0x10a

0x211: Pop(1)
0x212: Push((int) 532121)
0x213: @@ SetMessage(Stack[-1])
0x214: Pop(1)
0x215: @@ ClearReplies()
0x216: Pop(0)
0x217: Push((int) 532122)
0x218: Push((int) -1)
0x219: Push((int) 33533)
0x21a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21b: Pop(3)
0x21c: Return(); Pop(0)

0x21d: Push((int) 33529)
0x21e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x220: PushEmpty(string)
0x221: Stack[-1] = "Neutral"
0x222: Call2 0x10a

0x223: Pop(1)
0x224: Push((int) 532118)
0x225: @@ SetMessage(Stack[-1])
0x226: Pop(1)
0x227: @@ ClearReplies()
0x228: Pop(0)
0x229: Push((int) 532119)
0x22a: Push((int) -1)
0x22b: Push((int) 33530)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: Return(); Pop(0)

0x22f: Push((int) 15326)
0x230: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x232: PushEmpty(string)
0x233: Stack[-1] = "Neutral"
0x234: Call2 0x10a

0x235: Pop(1)
0x236: Push((int) 514111)
0x237: @@ SetMessage(Stack[-1])
0x238: Pop(1)
0x239: @@ ClearReplies()
0x23a: Pop(0)
0x23b: Push((int) 514112)
0x23c: Push((int) -1)
0x23d: Push((int) 15327)
0x23e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23f: Pop(3)
0x240: Push((int) 529951)
0x241: Push((int) -1)
0x242: Push((int) 31335)
0x243: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x244: Pop(3)
0x245: Return(); Pop(0)

0x246: Push((int) 15318)
0x247: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x249: PushEmpty(string)
0x24a: Stack[-1] = "Neutral"
0x24b: Call2 0x10a

0x24c: Pop(1)
0x24d: Push((int) 514081)
0x24e: @@ SetMessage(Stack[-1])
0x24f: Pop(1)
0x250: @@ ClearReplies()
0x251: Pop(0)
0x252: Push((int) 514109)
0x253: Push((int) -1)
0x254: Push((int) 15324)
0x255: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x256: Pop(3)
0x257: Return(); Pop(0)

0x258: Push((int) 43681)
0x259: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25a: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x25b: PushEmpty(string)
0x25c: Stack[-1] = "Neutral"
0x25d: Call2 0x10a

0x25e: Pop(1)
0x25f: Push((int) 541518)
0x260: @@ SetMessage(Stack[-1])
0x261: Pop(1)
0x262: @@ ClearReplies()
0x263: Pop(0)
0x264: Push((int) 541519)
0x265: Push((int) -1)
0x266: Push((int) 43682)
0x267: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x268: Pop(3)
0x269: Push((int) 541520)
0x26a: Push((int) 43684)
0x26b: Push((int) 43683)
0x26c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26d: Pop(3)
0x26e: Return(); Pop(0)

0x26f: Push((int) 43684)
0x270: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x271: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x272: PushEmpty(string)
0x273: Stack[-1] = "Neutral"
0x274: Call2 0x10a

0x275: Pop(1)
0x276: Push((int) 541521)
0x277: @@ SetMessage(Stack[-1])
0x278: Pop(1)
0x279: @@ ClearReplies()
0x27a: Pop(0)
0x27b: Push((int) 541522)
0x27c: Push((int) -1)
0x27d: Push((int) 43685)
0x27e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27f: Pop(3)
0x280: Return(); Pop(0)

0x281: Push((int) 15314)
0x282: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x284: PushEmpty(string)
0x285: Stack[-1] = "Neutral"
0x286: Call2 0x10a

0x287: Pop(1)
0x288: Push((int) 514077)
0x289: @@ SetMessage(Stack[-1])
0x28a: Pop(1)
0x28b: @@ ClearReplies()
0x28c: Pop(0)
0x28d: Push((int) 514078)
0x28e: Push((int) -1)
0x28f: Push((int) 15315)
0x290: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x291: Pop(3)
0x292: Push((int) 534588)
0x293: Push((int) 36227)
0x294: Push((int) 36226)
0x295: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x296: Pop(3)
0x297: Return(); Pop(0)

0x298: Push((int) 36227)
0x299: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29a: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x29b: PushEmpty(string)
0x29c: Stack[-1] = "Neutral"
0x29d: Call2 0x10a

0x29e: Pop(1)
0x29f: Push((int) 534589)
0x2a0: @@ SetMessage(Stack[-1])
0x2a1: Pop(1)
0x2a2: @@ ClearReplies()
0x2a3: Pop(0)
0x2a4: Push((int) 534590)
0x2a5: Push((int) -1)
0x2a6: Push((int) 36228)
0x2a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a8: Pop(3)
0x2a9: Return(); Pop(0)

0x2aa: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2ab: PushEmpty(bool)
0x2ac: Call2 0x988

0x2ad: Pop(0)
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2af: @ lshStopAnimation()
0x2b0: Pop(0)
0x2b1: GOTO 0x2b4

0x2b2: @ StopAnimation()
0x2b3: Pop(0)
0x2b4: Return(); Pop(0)

0x2b5: GOTO 0x121

0x2b6: Return(); Pop(0)

0x2b7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2b8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2b9: PushEmpty(bool, object, float)
0x2ba: Stack[-2] = Stack[-12]
0x2bb: Stack[-1] = (float) 130.0
0x2bc: Call2 0x552

0x2bd: Pop(2)
0x2be: Pop(1); Push((bool) Stack[-1] == 0)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c0: Stack[-10] = (int) -2
0x2c1: Return(); Pop(8)

0x2c2: @ CreateDialog(Stack[-4])
0x2c3: Pop(0)
0x2c4: PushEmpty(int)
0x2c5: Call2 0x982

0x2c6: Pop(0)
0x2c7: @@ SetNPCName(Stack[-1])
0x2c8: Pop(1)
0x2c9: PushEmpty(int)
0x2ca: Call2 0x980

0x2cb: Pop(0)
0x2cc: @@ SetNPCDescription(Stack[-1])
0x2cd: Pop(1)
0x2ce: PushEmpty(string)
0x2cf: Call2 0x984

0x2d0: Pop(0)
0x2d1: @@ SetPhoto(Stack[-1])
0x2d2: Pop(1)
0x2d3: PushEmpty(string)
0x2d4: Call2 0x986

0x2d5: Pop(0)
0x2d6: @@ SetPhoto2(Stack[-1])
0x2d7: Pop(1)
0x2d8: PushEmpty(int)
0x2d9: Call2 0x712

0x2da: Pop(0)
0x2db: @@ SetPlayerName(Stack[-1])
0x2dc: Pop(1)
0x2dd: Stack[-2] = (int) -1
0x2de: @ IsOverrideActive(Stack[-3])
0x2df: Pop(0)
0x2e0: Push(Stack[-3])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e2: Stack[-10] = (int) -2
0x2e3: Return(); Pop(8)

0x2e4: @ DoDialog(Stack[-4])
0x2e5: Pop(0)
0x2e6: PushEmpty(object, object)
0x2e7: Stack[-2] = Stack[-11]
0x2e8: Stack[-1] = Stack[-6]
0x2e9: Push(-2, 4); TaskCall(3)
0x2ea: Call2 0x301

0x2eb: Pop(-2, 4); TaskReturn
0x2ec: Pop(2)
0x2ed: @@ IsDialogEnd(Stack[-1])
0x2ee: Pop(0)
0x2ef: Pop(0); Push((bool) Stack[-1] == 0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f1: @ sync()
0x2f2: Pop(0)
0x2f3: @@ IsDialogEnd(Stack[-1])
0x2f4: Pop(0)
0x2f5: GOTO 0x2ef

0x2f6: PushEmpty(object)
0x2f7: Stack[-1] = Stack[-10]
0x2f8: Call2 0x597

0x2f9: Pop(1)
0x2fa: @ StopDialog(Stack[-4])
0x2fb: Pop(0)
0x2fc: @@ GetReturnValue(Stack[-2])
0x2fd: Pop(0)
0x2fe: Stack[-10] = Stack[-2]
0x2ff: Return(); Pop(8)

0x300: Stack[-4] = 0
0x301: PushEmpty()
0x302: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x303: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x304: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x305: Push((int) 1)
0x306: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x307: PushEmpty(string)
0x308: Stack[-1] = "Neutral"
0x309: Call2 0x33b

0x30a: Pop(1)
0x30b: Push((int) 521530)
0x30c: @@ SetMessage(Stack[-1])
0x30d: Pop(1)
0x30e: @@ ClearReplies()
0x30f: Pop(0)
0x310: Push((int) 521531)
0x311: Push((int) 36229)
0x312: Push((int) 22692)
0x313: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x314: Pop(3)
0x315: Push((int) 534594)
0x316: Push((int) 36233)
0x317: Push((int) 36232)
0x318: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x319: Pop(3)
0x31a: GOTO 0x31d

0x31b: Return(); Pop(0)

0x31c: GOTO 0x305

0x31d: PushEmpty(bool)
0x31e: Call2 0x988

0x31f: Pop(0)
0x320: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x321: @ lshWaitForAnimEnd()
0x322: Pop(0)
0x323: Push( Stack[3 + Tasks[-1].StackPointer] )
0x324: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x325: GOTO 0x32b

0x326: PushEmpty(string)
0x327: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x328: Call2 0x5a9

0x329: Pop(1)
0x32a: GOTO 0x321

0x32b: GOTO 0x33a

0x32c: Push("all")
0x32d: Push("idle")
0x32e: @ PlayAnimation(Stack[-2], Stack[-1])
0x32f: Pop(2)
0x330: @ WaitForAnimEnd()
0x331: Pop(0)
0x332: Push( Stack[3 + Tasks[-1].StackPointer] )
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: GOTO 0x33a

0x335: Push("all")
0x336: Push("idle")
0x337: @ PlayAnimation(Stack[-2], Stack[-1])
0x338: Pop(2)
0x339: GOTO 0x330

0x33a: Return(); Pop(0)

0x33b: PushEmpty()
0x33c: PushEmpty(bool)
0x33d: Call2 0x988

0x33e: Pop(0)
0x33f: Pop(1); Push((bool) Stack[-1] == 0)
0x340: IF (Stack[-1] == 0) GOTO 0x342; Pop(1)

0x341: Return(); Pop(0)

0x342: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x343: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x344: Return(); Pop(0)

0x345: PushEmpty(string, bool)
0x346: Stack[-2] = Stack[-3]
0x347: Push("")
0x348: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x349: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x34a: Stack[-1] = (bool) 0
0x34b: GOTO 0x34d

0x34c: Stack[-1] = (bool) 1
0x34d: Call2 0x5b9

0x34e: Pop(2)
0x34f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x350: Return(); Pop(0)

0x351: PushEmpty()
0x352: Push((int) 1)
0x353: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x354: PushEmpty()
0x355: Call2 0x5d3

0x356: Pop(0)
0x357: Push((int) 22691)
0x358: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x35a: PushEmpty(string)
0x35b: Stack[-1] = "Neutral"
0x35c: Call2 0x33b

0x35d: Pop(1)
0x35e: Push((int) 521530)
0x35f: @@ SetMessage(Stack[-1])
0x360: Pop(1)
0x361: @@ ClearReplies()
0x362: Pop(0)
0x363: Push((int) 521531)
0x364: Push((int) 36229)
0x365: Push((int) 22692)
0x366: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x367: Pop(3)
0x368: Push((int) 534594)
0x369: Push((int) 36233)
0x36a: Push((int) 36232)
0x36b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36c: Pop(3)
0x36d: Return(); Pop(0)

0x36e: Push((int) 36233)
0x36f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x371: PushEmpty(string)
0x372: Stack[-1] = "Neutral"
0x373: Call2 0x33b

0x374: Pop(1)
0x375: Push((int) 534595)
0x376: @@ SetMessage(Stack[-1])
0x377: Pop(1)
0x378: @@ ClearReplies()
0x379: Pop(0)
0x37a: Push((int) 534596)
0x37b: Push((int) -1)
0x37c: Push((int) 36234)
0x37d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37e: Pop(3)
0x37f: Push((int) 534597)
0x380: Push((int) -1)
0x381: Push((int) 36235)
0x382: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x383: Pop(3)
0x384: Return(); Pop(0)

0x385: Push((int) 36229)
0x386: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x387: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x388: PushEmpty(string)
0x389: Stack[-1] = "Neutral"
0x38a: Call2 0x33b

0x38b: Pop(1)
0x38c: Push((int) 534591)
0x38d: @@ SetMessage(Stack[-1])
0x38e: Pop(1)
0x38f: @@ ClearReplies()
0x390: Pop(0)
0x391: Push((int) 534592)
0x392: Push((int) -1)
0x393: Push((int) 36230)
0x394: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x395: Pop(3)
0x396: Push((int) 534593)
0x397: Push((int) -1)
0x398: Push((int) 36231)
0x399: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39a: Pop(3)
0x39b: Return(); Pop(0)

0x39c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x39d: PushEmpty(bool)
0x39e: Call2 0x988

0x39f: Pop(0)
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a1: @ lshStopAnimation()
0x3a2: Pop(0)
0x3a3: GOTO 0x3a6

0x3a4: @ StopAnimation()
0x3a5: Pop(0)
0x3a6: Return(); Pop(0)

0x3a7: GOTO 0x352

0x3a8: Return(); Pop(0)

0x3a9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x3aa: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x3ab: PushEmpty(bool, object, float)
0x3ac: Stack[-2] = Stack[-12]
0x3ad: Stack[-1] = (float) 130.0
0x3ae: Call2 0x552

0x3af: Pop(2)
0x3b0: Pop(1); Push((bool) Stack[-1] == 0)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b2: Stack[-10] = (int) -2
0x3b3: Return(); Pop(8)

0x3b4: @ CreateDialog(Stack[-4])
0x3b5: Pop(0)
0x3b6: PushEmpty(int)
0x3b7: Call2 0x982

0x3b8: Pop(0)
0x3b9: @@ SetNPCName(Stack[-1])
0x3ba: Pop(1)
0x3bb: PushEmpty(int)
0x3bc: Call2 0x980

0x3bd: Pop(0)
0x3be: @@ SetNPCDescription(Stack[-1])
0x3bf: Pop(1)
0x3c0: PushEmpty(string)
0x3c1: Call2 0x984

0x3c2: Pop(0)
0x3c3: @@ SetPhoto(Stack[-1])
0x3c4: Pop(1)
0x3c5: PushEmpty(string)
0x3c6: Call2 0x986

0x3c7: Pop(0)
0x3c8: @@ SetPhoto2(Stack[-1])
0x3c9: Pop(1)
0x3ca: PushEmpty(int)
0x3cb: Call2 0x712

0x3cc: Pop(0)
0x3cd: @@ SetPlayerName(Stack[-1])
0x3ce: Pop(1)
0x3cf: Stack[-2] = (int) -1
0x3d0: @ IsOverrideActive(Stack[-3])
0x3d1: Pop(0)
0x3d2: Push(Stack[-3])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d4: Stack[-10] = (int) -2
0x3d5: Return(); Pop(8)

0x3d6: @ DoDialog(Stack[-4])
0x3d7: Pop(0)
0x3d8: PushEmpty(object, object)
0x3d9: Stack[-2] = Stack[-11]
0x3da: Stack[-1] = Stack[-6]
0x3db: Push(-2, 4); TaskCall(5)
0x3dc: Call2 0x3f3

0x3dd: Pop(-2, 4); TaskReturn
0x3de: Pop(2)
0x3df: @@ IsDialogEnd(Stack[-1])
0x3e0: Pop(0)
0x3e1: Pop(0); Push((bool) Stack[-1] == 0)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e3: @ sync()
0x3e4: Pop(0)
0x3e5: @@ IsDialogEnd(Stack[-1])
0x3e6: Pop(0)
0x3e7: GOTO 0x3e1

0x3e8: PushEmpty(object)
0x3e9: Stack[-1] = Stack[-10]
0x3ea: Call2 0x597

0x3eb: Pop(1)
0x3ec: @ StopDialog(Stack[-4])
0x3ed: Pop(0)
0x3ee: @@ GetReturnValue(Stack[-2])
0x3ef: Pop(0)
0x3f0: Stack[-10] = Stack[-2]
0x3f1: Return(); Pop(8)

0x3f2: Stack[-4] = 0
0x3f3: PushEmpty()
0x3f4: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3f5: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3f6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3f7: Push((int) 1)
0x3f8: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x3f9: PushEmpty(string)
0x3fa: Stack[-1] = "Neutral"
0x3fb: Call2 0x42d

0x3fc: Pop(1)
0x3fd: Push((int) 533911)
0x3fe: @@ SetMessage(Stack[-1])
0x3ff: Pop(1)
0x400: @@ ClearReplies()
0x401: Pop(0)
0x402: Push((int) 533912)
0x403: Push((int) -1)
0x404: Push((int) 35471)
0x405: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x406: Pop(3)
0x407: Push((int) 533913)
0x408: Push((int) -1)
0x409: Push((int) 35472)
0x40a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(3)
0x40c: GOTO 0x40f

0x40d: Return(); Pop(0)

0x40e: GOTO 0x3f7

0x40f: PushEmpty(bool)
0x410: Call2 0x988

0x411: Pop(0)
0x412: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x413: @ lshWaitForAnimEnd()
0x414: Pop(0)
0x415: Push( Stack[3 + Tasks[-1].StackPointer] )
0x416: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x417: GOTO 0x41d

0x418: PushEmpty(string)
0x419: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x41a: Call2 0x5a9

0x41b: Pop(1)
0x41c: GOTO 0x413

0x41d: GOTO 0x42c

0x41e: Push("all")
0x41f: Push("idle")
0x420: @ PlayAnimation(Stack[-2], Stack[-1])
0x421: Pop(2)
0x422: @ WaitForAnimEnd()
0x423: Pop(0)
0x424: Push( Stack[3 + Tasks[-1].StackPointer] )
0x425: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x426: GOTO 0x42c

0x427: Push("all")
0x428: Push("idle")
0x429: @ PlayAnimation(Stack[-2], Stack[-1])
0x42a: Pop(2)
0x42b: GOTO 0x422

0x42c: Return(); Pop(0)

0x42d: PushEmpty()
0x42e: PushEmpty(bool)
0x42f: Call2 0x988

0x430: Pop(0)
0x431: Pop(1); Push((bool) Stack[-1] == 0)
0x432: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x433: Return(); Pop(0)

0x434: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x435: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x436: Return(); Pop(0)

0x437: PushEmpty(string, bool)
0x438: Stack[-2] = Stack[-3]
0x439: Push("")
0x43a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x43b: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43c: Stack[-1] = (bool) 0
0x43d: GOTO 0x43f

0x43e: Stack[-1] = (bool) 1
0x43f: Call2 0x5b9

0x440: Pop(2)
0x441: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x442: Return(); Pop(0)

0x443: PushEmpty()
0x444: Push((int) 1)
0x445: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x446: PushEmpty()
0x447: Call2 0x5d3

0x448: Pop(0)
0x449: Push((int) 35470)
0x44a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x44c: PushEmpty(string)
0x44d: Stack[-1] = "Neutral"
0x44e: Call2 0x42d

0x44f: Pop(1)
0x450: Push((int) 533911)
0x451: @@ SetMessage(Stack[-1])
0x452: Pop(1)
0x453: @@ ClearReplies()
0x454: Pop(0)
0x455: Push((int) 533912)
0x456: Push((int) -1)
0x457: Push((int) 35471)
0x458: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x459: Pop(3)
0x45a: Push((int) 533913)
0x45b: Push((int) -1)
0x45c: Push((int) 35472)
0x45d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45e: Pop(3)
0x45f: Return(); Pop(0)

0x460: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x461: PushEmpty(bool)
0x462: Call2 0x988

0x463: Pop(0)
0x464: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x465: @ lshStopAnimation()
0x466: Pop(0)
0x467: GOTO 0x46a

0x468: @ StopAnimation()
0x469: Pop(0)
0x46a: Return(); Pop(0)

0x46b: GOTO 0x444

0x46c: Return(); Pop(0)

0x46d: Push((int) 3)
0x46e: @ Sleep(Stack[-1])
0x46f: Pop(1)
0x470: PushEmpty(float, float)
0x471: Stack[-2] = (int) 300
0x472: Stack[-1] = (int) 100
0x473: Call2 0x4b3

0x474: Pop(2)
0x475: GOTO 0x46d

0x476: Return(); Pop(0)

0x477: PushEmpty(string, string)
0x478: Push("npc")
0x479: @ GetProperty(Stack[-1], Stack[-2])
0x47a: Pop(1)
0x47b: @ Trace(Stack[-1])
0x47c: Pop(0)
0x47d: PushEmpty(int, string)
0x47e: Stack[-1] = Stack[-3]
0x47f: Call2 0x729

0x480: Pop(1)
0x481: @ Trace(Stack[-1])
0x482: Pop(1)
0x483: PushEmpty(bool, int)
0x484: PushEmpty(int, string)
0x485: Stack[-1] = Stack[-5]
0x486: Call2 0x729

0x487: Stack[-3] = Stack[-2]
0x488: Pop(2)
0x489: Call2 0x976

0x48a: Pop(1)
0x48b: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x48c: PushEmpty(int, object)
0x48d: Stack[-1] = Stack[-5]
0x48e: Push(-2, 1); TaskCall(2)
0x48f: Call2 0x2b7

0x490: Pop(-2, 1); TaskReturn
0x491: Pop(2)
0x492: GOTO 0x4b2

0x493: PushEmpty(bool, int)
0x494: PushEmpty(int, string)
0x495: Stack[-1] = Stack[-5]
0x496: Call2 0x729

0x497: Stack[-3] = Stack[-2]
0x498: Pop(2)
0x499: Call2 0x962

0x49a: Pop(1)
0x49b: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x49c: PushEmpty(int, object)
0x49d: Stack[-1] = Stack[-5]
0x49e: Push(-2, 1); TaskCall(4)
0x49f: Call2 0x3a9

0x4a0: Pop(-2, 1); TaskReturn
0x4a1: Pop(2)
0x4a2: GOTO 0x4b2

0x4a3: PushEmpty(bool, int)
0x4a4: PushEmpty(int, string)
0x4a5: Stack[-1] = Stack[-5]
0x4a6: Call2 0x729

0x4a7: Stack[-3] = Stack[-2]
0x4a8: Pop(2)
0x4a9: Call2 0x96c

0x4aa: Pop(1)
0x4ab: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4ac: PushEmpty(int, object)
0x4ad: Stack[-1] = Stack[-5]
0x4ae: Push(-2, 1); TaskCall(0)
0x4af: Call2 0x0

0x4b0: Pop(-2, 1); TaskReturn
0x4b1: Pop(2)
0x4b2: Return(); Pop(2)

0x4b3: PushEmpty()
0x4b4: PushEmpty(bool)
0x4b5: Call2 0x54d

0x4b6: Pop(0)
0x4b7: Pop(1); Push((bool) Stack[-1] == 0)
0x4b8: IF (Stack[-1] == 0) GOTO 0x4ba; Pop(1)

0x4b9: Return(); Pop(0)

0x4ba: Push("player")
0x4bb: @ FindActor(Stack[-4], Stack[-1])
0x4bc: Pop(1)
0x4bd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4be: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4bf: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x4c0: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x4c1: Push((int) 10)
0x4c2: Push((float)1.0)
0x4c3: @ SetTimer(Stack[-2], Stack[-1])
0x4c4: Pop(2)
0x4c5: PushEmpty()
0x4c6: Call2 0x4f4

0x4c7: Pop(0)
0x4c8: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x4c9: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4ca: Push((int) 10)
0x4cb: @ KillTimer(Stack[-1])
0x4cc: Pop(1)
0x4cd: Return(); Pop(0)

0x4ce: PushEmpty(float, float)
0x4cf: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d3; Pop(1)

0x4d1: Stack[-3] = (bool) 0
0x4d2: Return(); Pop(2)

0x4d3: PushEmpty(float, object)
0x4d4: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x4d5: Call2 0x545

0x4d6: Pop(1)
0x4d7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4d8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4d9: IF (Stack[-1] == 0) GOTO 0x4db; Pop(1)

0x4da: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x4db: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x4dc: Return(); Pop(2)

0x4dd: PushEmpty()
0x4de: Push((int) 10)
0x4df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4e1: PushEmpty(bool)
0x4e2: Call2 0x4ce

0x4e3: Pop(0)
0x4e4: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4e5: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4e6: IF (Stack[-1] == 0) GOTO 0x4ec; Pop(1)

0x4e7: PushEmpty(object)
0x4e8: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x4e9: Call2 0x5c8

0x4ea: Pop(1)
0x4eb: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4ec: GOTO 0x4f3

0x4ed: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4ef: Push("head")
0x4f0: @ UnlookAsync(Stack[-1])
0x4f1: Pop(1)
0x4f2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4f3: Return(); Pop(0)

0x4f4: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x4f5: @ WaitForAnimEnd()
0x4f6: Pop(0)
0x4f7: PushEmpty(bool)
0x4f8: Call2 0x54d

0x4f9: Pop(0)
0x4fa: Pop(1); Push((bool) Stack[-1] == 0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4fc: Return(); Pop(14)

0x4fd: PushEmpty(int)
0x4fe: Call2 0x607

0x4ff: Stack[-8] = Stack[-1]
0x500: Pop(1)
0x501: Stack[-6] = (int) 0
0x502: PushEmpty(bool)
0x503: Stack[-1] = (bool) 0
0x504: Push((int) 5)
0x505: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x506: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x507: PushEmpty(bool)
0x508: Call2 0x54d

0x509: Pop(0)
0x50a: IF (Stack[-1] == 0) GOTO 0x50c; Pop(1)

0x50b: Stack[-1] = (bool) 1
0x50c: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x50d: Push((int) 3)
0x50e: @ irand(Stack[-6], Stack[-1])
0x50f: Pop(1)
0x510: Push((int) 0)
0x511: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x512: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x513: Push(Stack[-7])
0x514: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x515: @ irand(Stack[-4], Stack[-7])
0x516: Pop(0)
0x517: Push("all")
0x518: PushEmpty(string, int)
0x519: Stack[-1] = Stack[-7]
0x51a: Call2 0x600

0x51b: Pop(1)
0x51c: @ PlayAnimation(Stack[-2], Stack[-1])
0x51d: Pop(2)
0x51e: @ WaitForAnimEnd(Stack[-3])
0x51f: Pop(0)
0x520: Pop(0); Push((bool) Stack[-3] == 0)
0x521: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x522: GOTO 0x540

0x523: GOTO 0x535

0x524: Push((int) 1)
0x525: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x526: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x527: Push((int) 4)
0x528: @ rand(Stack[-3], Stack[-1])
0x529: Pop(1)
0x52a: Push((int) 1)
0x52b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x52c: @ Sleep(Stack[-1], Stack[-2])
0x52d: Pop(1)
0x52e: Pop(0); Push((bool) Stack[-1] == 0)
0x52f: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x530: GOTO 0x540

0x531: GOTO 0x535

0x532: Push(Stack[-6])
0x533: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x534: GOTO 0x540

0x535: PushEmpty(bool)
0x536: Call2 0x543

0x537: Pop(0)
0x538: Pop(1); Push((bool) Stack[-1] == 0)
0x539: IF (Stack[-1] == 0) GOTO 0x53b; Pop(1)

0x53a: GOTO 0x540

0x53b: @ ResetAAS()
0x53c: Pop(0)
0x53d: Push((int) 1)
0x53e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x53f: GOTO 0x502

0x540: @ ResetAAS()
0x541: Pop(0)
0x542: Return(); Pop(14)

0x543: Stack[-1] = (bool) 1
0x544: Return(); Pop(0)

0x545: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x546: @ GetPosition(Stack[-3])
0x547: Pop(0)
0x548: @@ GetPosition(Stack[-2])
0x549: Pop(0)
0x54a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x54b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x54c: Return(); Pop(6)

0x54d: PushEmpty(bool, bool)
0x54e: @ IsLoaded(Stack[-1])
0x54f: Pop(0)
0x550: Stack[-3] = Stack[-1]
0x551: Return(); Pop(2)

0x552: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x553: @@ GetPosition(Stack[-8])
0x554: Pop(0)
0x555: @@ GetEyesHeight(Stack[-9])
0x556: Pop(0)
0x557: Push(CvectorIndex(Stack[-8], 1))
0x558: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x559: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x55a: @ GetPosition(Stack[-7])
0x55b: Pop(0)
0x55c: @ GetEyesHeight(Stack[-9])
0x55d: Pop(0)
0x55e: Push(CvectorIndex(Stack[-7], 1))
0x55f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x560: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x561: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x562: Push(CvectorIndex(Stack[-6], 1))
0x563: Stack[-1] = (int) 0
0x564: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x565: Pop(0); Push(Stack[-6] | Stack[-6]);
0x566: Pop(1); Push(Sqrt(Stack[-1]))
0x567: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x568: Stack[-5] = -Stack[-6]; Pop(0);
0x569: Pop(0); Push(Stack[-6] * Stack[-19]);
0x56a: PushEmpty(cvector, cvector)
0x56b: Push(CVector(0.0, 1.0, 0.0))
0x56c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x56d: Call2 0x5da

0x56e: Pop(1)
0x56f: Push((int) 25)
0x570: Pop(2); Push(Stack[-2] * Stack[-1]);
0x571: Pop(2); Push(Stack[-2] + Stack[-1]);
0x572: Push(CVector(0.0, 10.0, 0.0))
0x573: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x574: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x575: @ IsOverrideActive(Stack[-2])
0x576: Pop(0)
0x577: Push(Stack[-2])
0x578: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x579: Stack[-21] = (bool) 0
0x57a: Return(); Pop(18)

0x57b: @ StopWorld()
0x57c: Pop(0)
0x57d: Push((bool) 1)
0x57e: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x57f: Pop(1)
0x580: Push(CvectorIndex(Stack[-4], 0))
0x581: Push(CvectorIndex(Stack[-5], 2))
0x582: @ Rotate(Stack[-2], Stack[-1])
0x583: Pop(2)
0x584: PushEmpty(bool)
0x585: Call2 0x988

0x586: Pop(0)
0x587: IF (Stack[-1] == 0) GOTO 0x589; Pop(1)

0x588: GOTO 0x591

0x589: Push("head")
0x58a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x58b: Pop(1)
0x58c: Push(Stack[-1])
0x58d: IF (Stack[-1] == 0) GOTO 0x591; Pop(1)

0x58e: Push("head")
0x58f: @ LookAsyncCamera(Stack[-1])
0x590: Pop(1)
0x591: @ CameraWaitForPlayFinish()
0x592: Pop(0)
0x593: @ ResumeWorld()
0x594: Pop(0)
0x595: Stack[-21] = (bool) 1
0x596: Return(); Pop(18)

0x597: PushEmpty(bool, bool)
0x598: Push((bool) 1)
0x599: @ CameraSwitchToNormal(Stack[-1])
0x59a: Pop(1)
0x59b: PushEmpty(bool)
0x59c: Call2 0x988

0x59d: Pop(0)
0x59e: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59f: GOTO 0x5a8

0x5a0: Push("head")
0x5a1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5a2: Pop(1)
0x5a3: Push(Stack[-1])
0x5a4: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a5: Push("head")
0x5a6: @ UnlookAsync(Stack[-1])
0x5a7: Pop(1)
0x5a8: Return(); Pop(2)

0x5a9: PushEmpty(bool, float, float, bool, float, float)
0x5aa: @ lshHasAnimation(Stack[-3], Stack[-7])
0x5ab: Pop(0)
0x5ac: Push(Stack[-3])
0x5ad: IF (Stack[-1] == 0) GOTO 0x5b4; Pop(1)

0x5ae: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x5af: Pop(0)
0x5b0: Push((bool) 0)
0x5b1: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5b2: Pop(1)
0x5b3: GOTO 0x5b8

0x5b4: Push("Can't find lsh animation : ")
0x5b5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5b6: @ Trace(Stack[-1])
0x5b7: Pop(1)
0x5b8: Return(); Pop(6)

0x5b9: PushEmpty(bool, float, float, bool, float, float)
0x5ba: @ lshHasAnimation(Stack[-3], Stack[-8])
0x5bb: Pop(0)
0x5bc: Push(Stack[-3])
0x5bd: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5be: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x5bf: Pop(0)
0x5c0: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x5c1: Pop(0)
0x5c2: GOTO 0x5c7

0x5c3: Push("Can't find lsh animation : ")
0x5c4: Pop(1); Push(Stack[-1] + Stack[-9]);
0x5c5: @ Trace(Stack[-1])
0x5c6: Pop(1)
0x5c7: Return(); Pop(6)

0x5c8: PushEmpty(float, cvector, float, cvector)
0x5c9: @@ GetEyesHeight(Stack[-2])
0x5ca: Pop(0)
0x5cb: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5cc: Push(CvectorIndex(Stack[-1], 1))
0x5cd: Stack[-1] = Stack[-3]
0x5ce: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5cf: Push("head")
0x5d0: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x5d1: Pop(1)
0x5d2: Return(); Pop(4)

0x5d3: PushEmpty(bool)
0x5d4: Call2 0x988

0x5d5: Pop(0)
0x5d6: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d7: @ lshStopSpeech()
0x5d8: Pop(0)
0x5d9: Return(); Pop(0)

0x5da: PushEmpty(float, float)
0x5db: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5dc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5dd: Push((float)0.0)
0x5de: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5df: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5e0: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5e1: Return(); Pop(2)

0x5e2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5e3: Return(); Pop(2)

0x5e4: PushEmpty(int, bool, int, bool)
0x5e5: @ GetInvItemByName(Stack[-2], Stack[-5])
0x5e6: Pop(0)
0x5e7: @@ HasItem(Stack[-2], Stack[-1])
0x5e8: Pop(0)
0x5e9: Stack[-7] = Stack[-1]
0x5ea: Return(); Pop(4)

0x5eb: PushEmpty(object, object)
0x5ec: @ FindActor(Stack[-1], Stack[-5])
0x5ed: Pop(0)
0x5ee: Pop(0); Push((bool) Stack[-1] == 0)
0x5ef: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5f0: Stack[-6] = (bool) 0
0x5f1: Return(); Pop(2)

0x5f2: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x5f3: Pop(0)
0x5f4: Stack[-6] = (bool) 1
0x5f5: Return(); Pop(2)

0x5f6: Stack[-1] = 0
0x5f7: PushEmpty(float, float)
0x5f8: @ GetGameTime(Stack[-1])
0x5f9: Pop(0)
0x5fa: Push((int) 1)
0x5fb: PushEmpty(int)
0x5fc: Push((int) 24)
0x5fd: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5fe: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5ff: Return(); Pop(2)

0x600: PushEmpty(string, string)
0x601: Stack[-1] = "idle"
0x602: Push(Stack[-3])
0x603: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x604: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x605: Stack[-4] = Stack[-1]
0x606: Return(); Pop(2)

0x607: PushEmpty(int, bool, int, bool)
0x608: Stack[-2] = (int) 0
0x609: Push("all")
0x60a: PushEmpty(string, int)
0x60b: Stack[-1] = Stack[-5]
0x60c: Call2 0x600

0x60d: Pop(1)
0x60e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x60f: Pop(2)
0x610: Pop(0); Push((bool) Stack[-1] == 0)
0x611: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x612: GOTO 0x616

0x613: Push((int) 1)
0x614: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x615: GOTO 0x609

0x616: Stack[-5] = Stack[-2]
0x617: Return(); Pop(4)

0x618: PushEmpty(string, string)
0x619: Push("npc")
0x61a: @ GetProperty(Stack[-1], Stack[-2])
0x61b: Pop(1)
0x61c: PushEmpty(int)
0x61d: Call2 0x723

0x61e: Pop(0)
0x61f: Push((int) 0)
0x620: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x621: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x622: PushEmpty(bool, string, string, string)
0x623: Stack[-3] = "volonteers_danko"
0x624: Stack[-2] = "rescue_oneday"
0x625: Stack[-1] = Stack[-5]
0x626: Call2 0x5eb

0x627: Pop(4)
0x628: GOTO 0x63c

0x629: PushEmpty(int)
0x62a: Call2 0x723

0x62b: Pop(0)
0x62c: Push((int) 1)
0x62d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x62e: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x62f: PushEmpty(bool, string, string, string)
0x630: Stack[-3] = "volonteers_burah"
0x631: Stack[-2] = "rescue_oneday"
0x632: Stack[-1] = Stack[-5]
0x633: Call2 0x5eb

0x634: Pop(4)
0x635: GOTO 0x63c

0x636: PushEmpty(bool, string, string, string)
0x637: Stack[-3] = "volonteers_klara"
0x638: Stack[-2] = "rescue_oneday"
0x639: Stack[-1] = Stack[-5]
0x63a: Call2 0x5eb

0x63b: Pop(4)
0x63c: Return(); Pop(2)

0x63d: PushEmpty(int, int)
0x63e: Push("feromicin")
0x63f: Push((int) 1)
0x640: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x641: Pop(2)
0x642: Return(); Pop(2)

0x643: PushEmpty(int, int)
0x644: Push("monomicin")
0x645: Push((int) 1)
0x646: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x647: Pop(2)
0x648: Return(); Pop(2)

0x649: PushEmpty()
0x64a: Push("playsound")
0x64b: Push("giveitem")
0x64c: @ TriggerWorld(Stack[-2], Stack[-1])
0x64d: Pop(2)
0x64e: Return(); Pop(0)

0x64f: PushEmpty(string, string)
0x650: Push("npc")
0x651: @ GetProperty(Stack[-1], Stack[-2])
0x652: Pop(1)
0x653: Push("oo")
0x654: Pop(1); Push(Stack[-1] + Stack[-2]);
0x655: Push("1")
0x656: Pop(2); Push(Stack[-2] + Stack[-1]);
0x657: Push((int) 1)
0x658: @ SetVariable(Stack[-2], Stack[-1])
0x659: Pop(2)
0x65a: Return(); Pop(2)

0x65b: PushEmpty(int, int)
0x65c: Push("powder")
0x65d: Push((int) 1)
0x65e: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x65f: Pop(2)
0x660: Return(); Pop(2)

0x661: PushEmpty(int, int)
0x662: Push("burah_serum")
0x663: Push((int) 1)
0x664: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x665: Pop(2)
0x666: Return(); Pop(2)

0x667: PushEmpty(string, string)
0x668: Push("npc")
0x669: @ GetProperty(Stack[-1], Stack[-2])
0x66a: Pop(1)
0x66b: PushEmpty(int)
0x66c: Call2 0x723

0x66d: Pop(0)
0x66e: Push((int) 0)
0x66f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x670: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x671: PushEmpty(bool, string, string, string)
0x672: Stack[-3] = "volonteers_danko"
0x673: Stack[-2] = "rescue"
0x674: Stack[-1] = Stack[-5]
0x675: Call2 0x5eb

0x676: Pop(4)
0x677: GOTO 0x68b

0x678: PushEmpty(int)
0x679: Call2 0x723

0x67a: Pop(0)
0x67b: Push((int) 1)
0x67c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x67d: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x67e: PushEmpty(bool, string, string, string)
0x67f: Stack[-3] = "volonteers_burah"
0x680: Stack[-2] = "rescue"
0x681: Stack[-1] = Stack[-5]
0x682: Call2 0x5eb

0x683: Pop(4)
0x684: GOTO 0x68b

0x685: PushEmpty(bool, string, string, string)
0x686: Stack[-3] = "volonteers_klara"
0x687: Stack[-2] = "rescue"
0x688: Stack[-1] = Stack[-5]
0x689: Call2 0x5eb

0x68a: Pop(4)
0x68b: Return(); Pop(2)

0x68c: PushEmpty()
0x68d: PushEmpty(bool, object, string)
0x68e: Stack[-2] = Stack[-4]
0x68f: Stack[-1] = "monomicin"
0x690: Call2 0x5e4

0x691: Pop(2)
0x692: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x693: Stack[-2] = (bool) 1
0x694: Return(); Pop(0)

0x695: Stack[-2] = (bool) 0
0x696: Return(); Pop(0)

0x697: PushEmpty()
0x698: PushEmpty(bool, object, string)
0x699: Stack[-2] = Stack[-4]
0x69a: Stack[-1] = "feromicin"
0x69b: Call2 0x5e4

0x69c: Pop(2)
0x69d: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69e: Stack[-2] = (bool) 1
0x69f: Return(); Pop(0)

0x6a0: Stack[-2] = (bool) 0
0x6a1: Return(); Pop(0)

0x6a2: PushEmpty()
0x6a3: PushEmpty(bool, object)
0x6a4: Stack[-1] = Stack[-3]
0x6a5: Call2 0x6d6

0x6a6: Pop(1)
0x6a7: IF (Stack[-1] == 0) GOTO 0x6aa; Pop(1)

0x6a8: Stack[-2] = (bool) 1
0x6a9: Return(); Pop(0)

0x6aa: Stack[-2] = (bool) 0
0x6ab: Return(); Pop(0)

0x6ac: PushEmpty()
0x6ad: PushEmpty(bool, object, string)
0x6ae: Stack[-2] = Stack[-4]
0x6af: Stack[-1] = "burah_serum"
0x6b0: Call2 0x5e4

0x6b1: Pop(2)
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6b3: Stack[-2] = (bool) 1
0x6b4: Return(); Pop(0)

0x6b5: Stack[-2] = (bool) 0
0x6b6: Return(); Pop(0)

0x6b7: PushEmpty()
0x6b8: PushEmpty(bool, object, string)
0x6b9: Stack[-2] = Stack[-4]
0x6ba: Stack[-1] = "powder"
0x6bb: Call2 0x5e4

0x6bc: Pop(2)
0x6bd: IF (Stack[-1] == 0) GOTO 0x6c0; Pop(1)

0x6be: Stack[-2] = (bool) 1
0x6bf: Return(); Pop(0)

0x6c0: Stack[-2] = (bool) 0
0x6c1: Return(); Pop(0)

0x6c2: PushEmpty()
0x6c3: PushEmpty(bool, object)
0x6c4: Stack[-1] = Stack[-3]
0x6c5: Call2 0x6fe

0x6c6: Pop(1)
0x6c7: IF (Stack[-1] == 0) GOTO 0x6ca; Pop(1)

0x6c8: Stack[-2] = (bool) 1
0x6c9: Return(); Pop(0)

0x6ca: Stack[-2] = (bool) 0
0x6cb: Return(); Pop(0)

0x6cc: PushEmpty()
0x6cd: PushEmpty(bool, object)
0x6ce: Stack[-1] = Stack[-3]
0x6cf: Call2 0x70b

0x6d0: Pop(1)
0x6d1: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6d2: Stack[-2] = (bool) 1
0x6d3: Return(); Pop(0)

0x6d4: Stack[-2] = (bool) 0
0x6d5: Return(); Pop(0)

0x6d6: PushEmpty(string, int, string, int)
0x6d7: Push("npc")
0x6d8: @ GetProperty(Stack[-1], Stack[-3])
0x6d9: Pop(1)
0x6da: PushEmpty(int, string)
0x6db: Stack[-1] = Stack[-4]
0x6dc: Call2 0x729

0x6dd: Stack[-3] = Stack[-2]
0x6de: Pop(2)
0x6df: PushEmpty(int)
0x6e0: Call2 0x723

0x6e1: Pop(0)
0x6e2: Push((int) 1)
0x6e3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6e4: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6e5: PushEmpty(bool, int)
0x6e6: Stack[-1] = Stack[-3]
0x6e7: Call2 0x8e1

0x6e8: Stack[-8] = Stack[-2]
0x6e9: Pop(2)
0x6ea: Return(); Pop(4)

0x6eb: GOTO 0x6f8

0x6ec: PushEmpty(int)
0x6ed: Call2 0x723

0x6ee: Pop(0)
0x6ef: Push((int) 0)
0x6f0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f2: PushEmpty(bool, int)
0x6f3: Stack[-1] = Stack[-3]
0x6f4: Call2 0x907

0x6f5: Stack[-8] = Stack[-2]
0x6f6: Pop(2)
0x6f7: Return(); Pop(4)

0x6f8: PushEmpty(bool, int)
0x6f9: Stack[-1] = Stack[-3]
0x6fa: Call2 0x932

0x6fb: Stack[-8] = Stack[-2]
0x6fc: Pop(2)
0x6fd: Return(); Pop(4)

0x6fe: PushEmpty(string, int, string, int)
0x6ff: Push("npc")
0x700: @ GetProperty(Stack[-1], Stack[-3])
0x701: Pop(1)
0x702: Push("oo")
0x703: Pop(1); Push(Stack[-1] + Stack[-3]);
0x704: Push("1")
0x705: Pop(2); Push(Stack[-2] + Stack[-1]);
0x706: @ GetVariable(Stack[-1], Stack[-2])
0x707: Pop(1)
0x708: Push((int) 0)
0x709: Stack[-7] = Stack[-2] == Stack[-1]; Pop(1);
0x70a: Return(); Pop(4)

0x70b: PushEmpty()
0x70c: PushEmpty(int)
0x70d: Call2 0x5f7

0x70e: Pop(0)
0x70f: Push((int) 12)
0x710: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x711: Return(); Pop(0)

0x712: PushEmpty(int, int)
0x713: Push("branch")
0x714: @ GetVariable(Stack[-1], Stack[-2])
0x715: Pop(1)
0x716: Push((int) 0)
0x717: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x718: IF (Stack[-1] == 0) GOTO 0x71c; Pop(1)

0x719: Stack[-3] = (int) 1
0x71a: Return(); Pop(2)

0x71b: GOTO 0x721

0x71c: Push((int) 1)
0x71d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x71e: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x71f: Stack[-3] = (int) 2
0x720: Return(); Pop(2)

0x721: Stack[-3] = (int) 3
0x722: Return(); Pop(2)

0x723: PushEmpty(int, int)
0x724: Push("branch")
0x725: @ GetVariable(Stack[-1], Stack[-2])
0x726: Pop(1)
0x727: Stack[-3] = Stack[-1]
0x728: Return(); Pop(2)

0x729: PushEmpty()
0x72a: @ _strlwr(Stack[-1])
0x72b: Pop(0)
0x72c: Push("alexandr")
0x72d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x72e: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x72f: Stack[-2] = (int) 1
0x730: Return(); Pop(0)

0x731: Push("andrei")
0x732: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x733: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x734: Stack[-2] = (int) 2
0x735: Return(); Pop(0)

0x736: Push("anna")
0x737: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x738: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x739: Stack[-2] = (int) 3
0x73a: Return(); Pop(0)

0x73b: Push("bigvlad")
0x73c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x73d: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x73e: Stack[-2] = (int) 4
0x73f: Return(); Pop(0)

0x740: Push("eva")
0x741: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x742: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x743: Stack[-2] = (int) 5
0x744: Return(); Pop(0)

0x745: Push("georg")
0x746: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x747: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x748: Stack[-2] = (int) 6
0x749: Return(); Pop(0)

0x74a: Push("grif")
0x74b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x74c: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x74d: Stack[-2] = (int) 7
0x74e: Return(); Pop(0)

0x74f: Push("han")
0x750: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x751: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x752: Stack[-2] = (int) 8
0x753: Return(); Pop(0)

0x754: Push("julia")
0x755: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x756: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x757: Stack[-2] = (int) 9
0x758: Return(); Pop(0)

0x759: Push("kapella")
0x75a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x75b: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x75c: Stack[-2] = (int) 10
0x75d: Return(); Pop(0)

0x75e: Push("katerina")
0x75f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x760: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x761: Stack[-2] = (int) 11
0x762: Return(); Pop(0)

0x763: Push("klara")
0x764: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x765: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x766: Stack[-2] = (int) 12
0x767: Return(); Pop(0)

0x768: Push("lara")
0x769: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x76a: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x76b: Stack[-2] = (int) 13
0x76c: Return(); Pop(0)

0x76d: Push("laska")
0x76e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x76f: IF (Stack[-1] == 0) GOTO 0x772; Pop(1)

0x770: Stack[-2] = (int) 14
0x771: Return(); Pop(0)

0x772: Push("maria")
0x773: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x774: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x775: Stack[-2] = (int) 15
0x776: Return(); Pop(0)

0x777: Push("mark")
0x778: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x779: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x77a: Stack[-2] = (int) 16
0x77b: Return(); Pop(0)

0x77c: Push("mat")
0x77d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x77e: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x77f: Stack[-2] = (int) 17
0x780: Return(); Pop(0)

0x781: Push("mishka")
0x782: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x783: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x784: Stack[-2] = (int) 18
0x785: Return(); Pop(0)

0x786: Push("mladvlad")
0x787: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x788: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x789: Stack[-2] = (int) 19
0x78a: Return(); Pop(0)

0x78b: Push("notkin")
0x78c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x78d: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78e: Stack[-2] = (int) 20
0x78f: Return(); Pop(0)

0x790: Push("ospina")
0x791: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x792: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x793: Stack[-2] = (int) 21
0x794: Return(); Pop(0)

0x795: Push("petr")
0x796: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x797: IF (Stack[-1] == 0) GOTO 0x79a; Pop(1)

0x798: Stack[-2] = (int) 22
0x799: Return(); Pop(0)

0x79a: Push("rubin")
0x79b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x79c: IF (Stack[-1] == 0) GOTO 0x79f; Pop(1)

0x79d: Stack[-2] = (int) 23
0x79e: Return(); Pop(0)

0x79f: Push("spi4ka")
0x7a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x7a2: Stack[-2] = (int) 24
0x7a3: Return(); Pop(0)

0x7a4: Push("starshina")
0x7a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a6: IF (Stack[-1] == 0) GOTO 0x7a9; Pop(1)

0x7a7: Stack[-2] = (int) 25
0x7a8: Return(); Pop(0)

0x7a9: Push("viktor")
0x7aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ab: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7ac: Stack[-2] = (int) 26
0x7ad: Return(); Pop(0)

0x7ae: Push("wasted_woman")
0x7af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x7b1: Stack[-2] = (int) 27
0x7b2: Return(); Pop(0)

0x7b3: Push("wasted_male")
0x7b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b6: Stack[-2] = (int) 28
0x7b7: Return(); Pop(0)

0x7b8: Push("alkash")
0x7b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ba: IF (Stack[-1] == 0) GOTO 0x7bd; Pop(1)

0x7bb: Stack[-2] = (int) 29
0x7bc: Return(); Pop(0)

0x7bd: Push("boy")
0x7be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7c0: Stack[-2] = (int) 30
0x7c1: Return(); Pop(0)

0x7c2: Push("girl")
0x7c3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7c5: Stack[-2] = (int) 31
0x7c6: Return(); Pop(0)

0x7c7: Push("littleboy")
0x7c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c9: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7ca: Stack[-2] = (int) 32
0x7cb: Return(); Pop(0)

0x7cc: Push("littlegirl")
0x7cd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d1; Pop(1)

0x7cf: Stack[-2] = (int) 33
0x7d0: Return(); Pop(0)

0x7d1: Push("butcher")
0x7d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d3: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d4: Stack[-2] = (int) 34
0x7d5: Return(); Pop(0)

0x7d6: Push("dohodyaga")
0x7d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d8: IF (Stack[-1] == 0) GOTO 0x7db; Pop(1)

0x7d9: Stack[-2] = (int) 35
0x7da: Return(); Pop(0)

0x7db: Push("unosha")
0x7dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7dd: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7de: Stack[-2] = (int) 36
0x7df: Return(); Pop(0)

0x7e0: Push("vaxxabit")
0x7e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e2: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7e3: Stack[-2] = (int) 37
0x7e4: Return(); Pop(0)

0x7e5: Push("vaxxabitka")
0x7e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e7: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e8: Stack[-2] = (int) 38
0x7e9: Return(); Pop(0)

0x7ea: Push("woman")
0x7eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ec: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7ed: Stack[-2] = (int) 39
0x7ee: Return(); Pop(0)

0x7ef: Push("worker")
0x7f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7f2: Stack[-2] = (int) 40
0x7f3: Return(); Pop(0)

0x7f4: Push("whitemask")
0x7f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7f6: IF (Stack[-1] == 0) GOTO 0x7f9; Pop(1)

0x7f7: Stack[-2] = (int) 42
0x7f8: Return(); Pop(0)

0x7f9: Push("birdmask")
0x7fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7fb: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7fc: Stack[-2] = (int) 43
0x7fd: Return(); Pop(0)

0x7fe: Push("birdmask")
0x7ff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x800: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x801: Stack[-2] = (int) 44
0x802: Return(); Pop(0)

0x803: Push("patrol")
0x804: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x805: IF (Stack[-1] == 0) GOTO 0x808; Pop(1)

0x806: Stack[-2] = (int) 46
0x807: Return(); Pop(0)

0x808: Push("danko")
0x809: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x80a: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80b: Stack[-2] = (int) 47
0x80c: Return(); Pop(0)

0x80d: Push("alkash_d")
0x80e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x80f: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x810: Stack[-2] = (int) 48
0x811: Return(); Pop(0)

0x812: Push("boy_d")
0x813: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x814: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x815: Stack[-2] = (int) 49
0x816: Return(); Pop(0)

0x817: Push("butcher_d")
0x818: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x819: IF (Stack[-1] == 0) GOTO 0x81c; Pop(1)

0x81a: Stack[-2] = (int) 50
0x81b: Return(); Pop(0)

0x81c: Push("dohodyaga_d")
0x81d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x81e: IF (Stack[-1] == 0) GOTO 0x821; Pop(1)

0x81f: Stack[-2] = (int) 51
0x820: Return(); Pop(0)

0x821: Push("girl_d")
0x822: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x823: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x824: Stack[-2] = (int) 52
0x825: Return(); Pop(0)

0x826: Push("littleboy_d")
0x827: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x828: IF (Stack[-1] == 0) GOTO 0x82b; Pop(1)

0x829: Stack[-2] = (int) 53
0x82a: Return(); Pop(0)

0x82b: Push("littlegirl_d")
0x82c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x82d: IF (Stack[-1] == 0) GOTO 0x830; Pop(1)

0x82e: Stack[-2] = (int) 54
0x82f: Return(); Pop(0)

0x830: Push("unosha2")
0x831: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x832: IF (Stack[-1] == 0) GOTO 0x835; Pop(1)

0x833: Stack[-2] = (int) 55
0x834: Return(); Pop(0)

0x835: Push("unosha_d")
0x836: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x837: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x838: Stack[-2] = (int) 56
0x839: Return(); Pop(0)

0x83a: Push("unosha2_d")
0x83b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x83c: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x83d: Stack[-2] = (int) 57
0x83e: Return(); Pop(0)

0x83f: Push("vaxxabit_d")
0x840: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x841: IF (Stack[-1] == 0) GOTO 0x844; Pop(1)

0x842: Stack[-2] = (int) 58
0x843: Return(); Pop(0)

0x844: Push("vaxxabitka_d")
0x845: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x846: IF (Stack[-1] == 0) GOTO 0x849; Pop(1)

0x847: Stack[-2] = (int) 59
0x848: Return(); Pop(0)

0x849: Push("wasted_male_d")
0x84a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x84b: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x84c: Stack[-2] = (int) 60
0x84d: Return(); Pop(0)

0x84e: Push("wasted_woman_d")
0x84f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x850: IF (Stack[-1] == 0) GOTO 0x853; Pop(1)

0x851: Stack[-2] = (int) 61
0x852: Return(); Pop(0)

0x853: Push("woman_d")
0x854: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x855: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x856: Stack[-2] = (int) 62
0x857: Return(); Pop(0)

0x858: Push("worker2")
0x859: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x85a: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x85b: Stack[-2] = (int) 63
0x85c: Return(); Pop(0)

0x85d: Push("worker_d")
0x85e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x85f: IF (Stack[-1] == 0) GOTO 0x862; Pop(1)

0x860: Stack[-2] = (int) 64
0x861: Return(); Pop(0)

0x862: Push("worker2_d")
0x863: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x864: IF (Stack[-1] == 0) GOTO 0x867; Pop(1)

0x865: Stack[-2] = (int) 65
0x866: Return(); Pop(0)

0x867: Push("burah")
0x868: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x869: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x86a: Stack[-2] = (int) 66
0x86b: Return(); Pop(0)

0x86c: Push("gorbun_daughter")
0x86d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x86e: IF (Stack[-1] == 0) GOTO 0x871; Pop(1)

0x86f: Stack[-2] = (int) 67
0x870: Return(); Pop(0)

0x871: Push("gorbun")
0x872: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x873: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x874: Stack[-2] = (int) 68
0x875: Return(); Pop(0)

0x876: Push("albinos")
0x877: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x878: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x879: Stack[-2] = (int) 69
0x87a: Return(); Pop(0)

0x87b: Push("aglaja")
0x87c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x87d: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x87e: Stack[-2] = (int) 70
0x87f: Return(); Pop(0)

0x880: Push("nude")
0x881: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x882: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x883: Stack[-2] = (int) 71
0x884: Return(); Pop(0)

0x885: Push("block")
0x886: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x887: IF (Stack[-1] == 0) GOTO 0x88a; Pop(1)

0x888: Stack[-2] = (int) 72
0x889: Return(); Pop(0)

0x88a: Push("officer")
0x88b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x88c: IF (Stack[-1] == 0) GOTO 0x88f; Pop(1)

0x88d: Stack[-2] = (int) 73
0x88e: Return(); Pop(0)

0x88f: Push("doberman")
0x890: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x891: IF (Stack[-1] == 0) GOTO 0x894; Pop(1)

0x892: Stack[-2] = (int) 74
0x893: Return(); Pop(0)

0x894: Push("grabitel")
0x895: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x896: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x897: Stack[-2] = (int) 75
0x898: Return(); Pop(0)

0x899: Push("gatherer_wife")
0x89a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x89b: IF (Stack[-1] == 0) GOTO 0x89e; Pop(1)

0x89c: Stack[-2] = (int) 76
0x89d: Return(); Pop(0)

0x89e: Push("rat_prophet")
0x89f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8a0: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x8a1: Stack[-2] = (int) 77
0x8a2: Return(); Pop(0)

0x8a3: Push("morlok")
0x8a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8a5: IF (Stack[-1] == 0) GOTO 0x8a8; Pop(1)

0x8a6: Stack[-2] = (int) 78
0x8a7: Return(); Pop(0)

0x8a8: Push("soldier")
0x8a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8aa: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8ab: Stack[-2] = (int) 79
0x8ac: Return(); Pop(0)

0x8ad: Push("britva")
0x8ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8af: IF (Stack[-1] == 0) GOTO 0x8b2; Pop(1)

0x8b0: Stack[-2] = (int) 80
0x8b1: Return(); Pop(0)

0x8b2: Push("kabaktchik")
0x8b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8b4: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b5: Stack[-2] = (int) 81
0x8b6: Return(); Pop(0)

0x8b7: Push("sanitar")
0x8b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8b9: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8ba: Stack[-2] = (int) 82
0x8bb: Return(); Pop(0)

0x8bc: Push("salesman")
0x8bd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8be: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8bf: Stack[-2] = (int) 83
0x8c0: Return(); Pop(0)

0x8c1: Push("ayyan")
0x8c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8c3: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8c4: Stack[-2] = (int) 84
0x8c5: Return(); Pop(0)

0x8c6: Push("petrbirdmask")
0x8c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8c8: IF (Stack[-1] == 0) GOTO 0x8cb; Pop(1)

0x8c9: Stack[-2] = (int) 85
0x8ca: Return(); Pop(0)

0x8cb: Push("mogila")
0x8cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8cd: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8ce: Stack[-2] = (int) 86
0x8cf: Return(); Pop(0)

0x8d0: Push("klikusha")
0x8d1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d2: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8d3: Stack[-2] = (int) 87
0x8d4: Return(); Pop(0)

0x8d5: Push("karlik")
0x8d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d7: IF (Stack[-1] == 0) GOTO 0x8da; Pop(1)

0x8d8: Stack[-2] = (int) 88
0x8d9: Return(); Pop(0)

0x8da: Push("lisa")
0x8db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8dc: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8dd: Stack[-2] = (int) 89
0x8de: Return(); Pop(0)

0x8df: Stack[-2] = (int) -1
0x8e0: Return(); Pop(0)

0x8e1: PushEmpty()
0x8e2: Push((int) 18)
0x8e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e4: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x8e5: Stack[-2] = (bool) 1
0x8e6: Return(); Pop(0)

0x8e7: Push((int) 24)
0x8e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e9: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8ea: Stack[-2] = (bool) 1
0x8eb: Return(); Pop(0)

0x8ec: Push((int) 20)
0x8ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8ee: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8ef: Stack[-2] = (bool) 1
0x8f0: Return(); Pop(0)

0x8f1: Push((int) 14)
0x8f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8f3: IF (Stack[-1] == 0) GOTO 0x8f6; Pop(1)

0x8f4: Stack[-2] = (bool) 1
0x8f5: Return(); Pop(0)

0x8f6: Push((int) 10)
0x8f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8f8: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8f9: Stack[-2] = (bool) 1
0x8fa: Return(); Pop(0)

0x8fb: Push((int) 17)
0x8fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8fd: IF (Stack[-1] == 0) GOTO 0x900; Pop(1)

0x8fe: Stack[-2] = (bool) 1
0x8ff: Return(); Pop(0)

0x900: Push((int) 8)
0x901: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x902: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x903: Stack[-2] = (bool) 1
0x904: Return(); Pop(0)

0x905: Stack[-2] = (bool) 0
0x906: Return(); Pop(0)

0x907: PushEmpty()
0x908: Push((int) 6)
0x909: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x90a: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x90b: Stack[-2] = (bool) 1
0x90c: Return(); Pop(0)

0x90d: Push((int) 26)
0x90e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x90f: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x910: Stack[-2] = (bool) 1
0x911: Return(); Pop(0)

0x912: Push((int) 2)
0x913: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x914: IF (Stack[-1] == 0) GOTO 0x917; Pop(1)

0x915: Stack[-2] = (bool) 1
0x916: Return(); Pop(0)

0x917: Push((int) 22)
0x918: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x919: IF (Stack[-1] == 0) GOTO 0x91c; Pop(1)

0x91a: Stack[-2] = (bool) 1
0x91b: Return(); Pop(0)

0x91c: Push((int) 15)
0x91d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x91e: IF (Stack[-1] == 0) GOTO 0x921; Pop(1)

0x91f: Stack[-2] = (bool) 1
0x920: Return(); Pop(0)

0x921: Push((int) 5)
0x922: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x923: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x924: Stack[-2] = (bool) 1
0x925: Return(); Pop(0)

0x926: Push((int) 16)
0x927: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x928: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x929: Stack[-2] = (bool) 1
0x92a: Return(); Pop(0)

0x92b: Push((int) 19)
0x92c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x92d: IF (Stack[-1] == 0) GOTO 0x930; Pop(1)

0x92e: Stack[-2] = (bool) 1
0x92f: Return(); Pop(0)

0x930: Stack[-2] = (bool) 0
0x931: Return(); Pop(0)

0x932: PushEmpty()
0x933: Push((int) 7)
0x934: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x935: IF (Stack[-1] == 0) GOTO 0x938; Pop(1)

0x936: Stack[-2] = (bool) 1
0x937: Return(); Pop(0)

0x938: Push((int) 23)
0x939: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x93a: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x93b: Stack[-2] = (bool) 1
0x93c: Return(); Pop(0)

0x93d: Push((int) 21)
0x93e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x93f: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x940: Stack[-2] = (bool) 1
0x941: Return(); Pop(0)

0x942: Push((int) 9)
0x943: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x944: IF (Stack[-1] == 0) GOTO 0x947; Pop(1)

0x945: Stack[-2] = (bool) 1
0x946: Return(); Pop(0)

0x947: Push((int) 3)
0x948: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x949: IF (Stack[-1] == 0) GOTO 0x94c; Pop(1)

0x94a: Stack[-2] = (bool) 1
0x94b: Return(); Pop(0)

0x94c: Push((int) 1)
0x94d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x94e: IF (Stack[-1] == 0) GOTO 0x951; Pop(1)

0x94f: Stack[-2] = (bool) 1
0x950: Return(); Pop(0)

0x951: Push((int) 11)
0x952: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x953: IF (Stack[-1] == 0) GOTO 0x956; Pop(1)

0x954: Stack[-2] = (bool) 1
0x955: Return(); Pop(0)

0x956: Push((int) 13)
0x957: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x958: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x959: Stack[-2] = (bool) 1
0x95a: Return(); Pop(0)

0x95b: Push((int) 25)
0x95c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x95d: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x95e: Stack[-2] = (bool) 1
0x95f: Return(); Pop(0)

0x960: Stack[-2] = (bool) 0
0x961: Return(); Pop(0)

0x962: PushEmpty(int, int)
0x963: Push("vol_")
0x964: Pop(1); Push(Stack[-1] + Stack[-4]);
0x965: @ GetVariable(Stack[-1], Stack[-2])
0x966: Pop(1)
0x967: Push((int) 32)
0x968: Pop(1); Push(Stack[-2] & Stack[-1]);
0x969: Push((int) 0)
0x96a: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x96b: Return(); Pop(2)

0x96c: PushEmpty(int, int)
0x96d: Push("vol_")
0x96e: Pop(1); Push(Stack[-1] + Stack[-4]);
0x96f: @ GetVariable(Stack[-1], Stack[-2])
0x970: Pop(1)
0x971: Push((int) 4)
0x972: Pop(1); Push(Stack[-2] & Stack[-1]);
0x973: Push((int) 0)
0x974: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x975: Return(); Pop(2)

0x976: PushEmpty(int, int)
0x977: Push("vol_")
0x978: Pop(1); Push(Stack[-1] + Stack[-4]);
0x979: @ GetVariable(Stack[-1], Stack[-2])
0x97a: Pop(1)
0x97b: Push((int) 16)
0x97c: Pop(1); Push(Stack[-2] & Stack[-1]);
0x97d: Push((int) 0)
0x97e: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x97f: Return(); Pop(2)

0x980: Stack[-1] = (int) 515571
0x981: Return(); Pop(0)

0x982: Stack[-1] = (int) 504029
0x983: Return(); Pop(0)

0x984: Stack[-1] = "ui/NPC_bmask.png"
0x985: Return(); Pop(0)

0x986: Stack[-1] = "ui/NPC_bmask_b.png"
0x987: Return(); Pop(0)

0x988: Stack[-1] = (bool) 0
0x989: Return(); Pop(0)

