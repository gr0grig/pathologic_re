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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1e4 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x415 Vars = (int, int)
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
0xe: Call2 0x976

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x974

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x978

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x97a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x710

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
0x41: Call2 0x596

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
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 533911)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 533912)
0x5a: Push((int) -1)
0x5b: Push((int) 35471)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 533913)
0x5f: Push((int) -1)
0x60: Push((int) 35472)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x97c

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x5a7

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all")
0x76: Push("idle")
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all")
0x7f: Push("idle")
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x97c

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-2] = Stack[-3]
0x90: Push("")
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x5b7

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x5d1

0x9f: Pop(0)
0xa0: Push((int) 35470)
0xa1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xa3: PushEmpty(string)
0xa4: Stack[-1] = "Neutral"
0xa5: Call2 0x84

0xa6: Pop(1)
0xa7: Push((int) 533911)
0xa8: @@ SetMessage(Stack[-1])
0xa9: Pop(1)
0xaa: @@ ClearReplies()
0xab: Pop(0)
0xac: Push((int) 533912)
0xad: Push((int) -1)
0xae: Push((int) 35471)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: Push((int) 533913)
0xb2: Push((int) -1)
0xb3: Push((int) 35472)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Return(); Pop(0)

0xb7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb8: PushEmpty(bool)
0xb9: Call2 0x97c

0xba: Pop(0)
0xbb: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbc: @ lshStopAnimation()
0xbd: Pop(0)
0xbe: GOTO 0xc1

0xbf: @ StopAnimation()
0xc0: Pop(0)
0xc1: Return(); Pop(0)

0xc2: GOTO 0x9b

0xc3: Return(); Pop(0)

0xc4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc6: PushEmpty(bool, object, float)
0xc7: Stack[-2] = Stack[-12]
0xc8: Stack[-1] = (float) 130.0
0xc9: Call2 0x552

0xca: Pop(2)
0xcb: Pop(1); Push((bool) Stack[-1] == 0)
0xcc: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xcd: Stack[-10] = (int) -2
0xce: Return(); Pop(8)

0xcf: @ CreateDialog(Stack[-4])
0xd0: Pop(0)
0xd1: PushEmpty(int)
0xd2: Call2 0x976

0xd3: Pop(0)
0xd4: @@ SetNPCName(Stack[-1])
0xd5: Pop(1)
0xd6: PushEmpty(int)
0xd7: Call2 0x974

0xd8: Pop(0)
0xd9: @@ SetNPCDescription(Stack[-1])
0xda: Pop(1)
0xdb: PushEmpty(string)
0xdc: Call2 0x978

0xdd: Pop(0)
0xde: @@ SetPhoto(Stack[-1])
0xdf: Pop(1)
0xe0: PushEmpty(string)
0xe1: Call2 0x97a

0xe2: Pop(0)
0xe3: @@ SetPhoto2(Stack[-1])
0xe4: Pop(1)
0xe5: PushEmpty(int)
0xe6: Call2 0x710

0xe7: Pop(0)
0xe8: @@ SetPlayerName(Stack[-1])
0xe9: Pop(1)
0xea: Stack[-2] = (int) -1
0xeb: @ IsOverrideActive(Stack[-3])
0xec: Pop(0)
0xed: Push(Stack[-3])
0xee: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xef: Stack[-10] = (int) -2
0xf0: Return(); Pop(8)

0xf1: @ DoDialog(Stack[-4])
0xf2: Pop(0)
0xf3: PushEmpty(object, object)
0xf4: Stack[-2] = Stack[-11]
0xf5: Stack[-1] = Stack[-6]
0xf6: Push(-2, 4); TaskCall(3)
0xf7: Call2 0x10e

0xf8: Pop(-2, 4); TaskReturn
0xf9: Pop(2)
0xfa: @@ IsDialogEnd(Stack[-1])
0xfb: Pop(0)
0xfc: Pop(0); Push((bool) Stack[-1] == 0)
0xfd: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfe: @ sync()
0xff: Pop(0)
0x100: @@ IsDialogEnd(Stack[-1])
0x101: Pop(0)
0x102: GOTO 0xfc

0x103: PushEmpty(object)
0x104: Stack[-1] = Stack[-10]
0x105: Call2 0x596

0x106: Pop(1)
0x107: @ StopDialog(Stack[-4])
0x108: Pop(0)
0x109: @@ GetReturnValue(Stack[-2])
0x10a: Pop(0)
0x10b: Stack[-10] = Stack[-2]
0x10c: Return(); Pop(8)

0x10d: Stack[-4] = 0
0x10e: PushEmpty()
0x10f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x110: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x111: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x112: Push((int) 1)
0x113: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x114: PushEmpty(bool)
0x115: Stack[-1] = (bool) 0
0x116: PushEmpty(bool, object)
0x117: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x118: Call2 0x6c0

0x119: Pop(1)
0x11a: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11b: PushEmpty(bool, object)
0x11c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Call2 0x6a0

0x11e: Pop(1)
0x11f: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x120: Stack[-1] = (bool) 1
0x121: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x122: PushEmpty(object, object)
0x123: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x124: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x125: Call2 0x64d

0x126: Pop(2)
0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral"
0x129: Call2 0x1ce

0x12a: Pop(1)
0x12b: Push((int) 514075)
0x12c: @@ SetMessage(Stack[-1])
0x12d: Pop(1)
0x12e: @@ ClearReplies()
0x12f: Pop(0)
0x130: Push((int) 514076)
0x131: Push((int) 15314)
0x132: Push((int) 15313)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Push((int) 534587)
0x136: Push((int) -1)
0x137: Push((int) 36225)
0x138: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(3)
0x13a: GOTO 0x1b0

0x13b: PushEmpty(bool)
0x13c: Stack[-1] = (bool) 0
0x13d: PushEmpty(bool, object)
0x13e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13f: Call2 0x6c0

0x140: Pop(1)
0x141: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x142: PushEmpty(bool, object)
0x143: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x144: Call2 0x6a0

0x145: Pop(1)
0x146: Pop(1); Push((bool) Stack[-1] == 0)
0x147: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x148: Stack[-1] = (bool) 1
0x149: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14a: PushEmpty(object, object)
0x14b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14d: Call2 0x64d

0x14e: Pop(2)
0x14f: PushEmpty(string)
0x150: Stack[-1] = "Neutral"
0x151: Call2 0x1ce

0x152: Pop(1)
0x153: Push((int) 541516)
0x154: @@ SetMessage(Stack[-1])
0x155: Pop(1)
0x156: @@ ClearReplies()
0x157: Pop(0)
0x158: Push((int) 541517)
0x159: Push((int) 43681)
0x15a: Push((int) 43680)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Push((int) 541523)
0x15e: Push((int) -1)
0x15f: Push((int) 43686)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: GOTO 0x1b0

0x163: PushEmpty(string)
0x164: Stack[-1] = "Neutral"
0x165: Call2 0x1ce

0x166: Pop(1)
0x167: Push((int) 514079)
0x168: @@ SetMessage(Stack[-1])
0x169: Pop(1)
0x16a: @@ ClearReplies()
0x16b: Pop(0)
0x16c: PushEmpty(bool, object)
0x16d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16e: Call2 0x6aa

0x16f: Pop(1)
0x170: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x171: Push((int) 514080)
0x172: Push((int) 15318)
0x173: Push((int) 15317)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: PushEmpty(bool, object)
0x177: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x178: Call2 0x6b5

0x179: Pop(1)
0x17a: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17b: Push((int) 514110)
0x17c: Push((int) 15326)
0x17d: Push((int) 15325)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: PushEmpty(bool)
0x181: Stack[-1] = (bool) 0
0x182: PushEmpty(bool, object)
0x183: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x184: Call2 0x68a

0x185: Pop(1)
0x186: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x187: PushEmpty(bool, object)
0x188: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x189: Call2 0x6ca

0x18a: Pop(1)
0x18b: Pop(1); Push((bool) Stack[-1] == 0)
0x18c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18d: Stack[-1] = (bool) 1
0x18e: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18f: Push((int) 532117)
0x190: Push((int) 33529)
0x191: Push((int) 33528)
0x192: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: PushEmpty(bool)
0x195: Stack[-1] = (bool) 0
0x196: PushEmpty(bool, object)
0x197: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x198: Call2 0x695

0x199: Pop(1)
0x19a: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19b: PushEmpty(bool, object)
0x19c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19d: Call2 0x6ca

0x19e: Pop(1)
0x19f: Pop(1); Push((bool) Stack[-1] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: Stack[-1] = (bool) 1
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a3: Push((int) 532120)
0x1a4: Push((int) 33532)
0x1a5: Push((int) 33531)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Push((int) 514082)
0x1a9: Push((int) -1)
0x1aa: Push((int) 15319)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: GOTO 0x1b0

0x1ae: Return(); Pop(0)

0x1af: GOTO 0x112

0x1b0: PushEmpty(bool)
0x1b1: Call2 0x97c

0x1b2: Pop(0)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1b4: @ lshWaitForAnimEnd()
0x1b5: Pop(0)
0x1b6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: GOTO 0x1be

0x1b9: PushEmpty(string)
0x1ba: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1bb: Call2 0x5a7

0x1bc: Pop(1)
0x1bd: GOTO 0x1b4

0x1be: GOTO 0x1cd

0x1bf: Push("all")
0x1c0: Push("idle")
0x1c1: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c2: Pop(2)
0x1c3: @ WaitForAnimEnd()
0x1c4: Pop(0)
0x1c5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: GOTO 0x1cd

0x1c8: Push("all")
0x1c9: Push("idle")
0x1ca: @ PlayAnimation(Stack[-2], Stack[-1])
0x1cb: Pop(2)
0x1cc: GOTO 0x1c3

0x1cd: Return(); Pop(0)

0x1ce: PushEmpty()
0x1cf: PushEmpty(bool)
0x1d0: Call2 0x97c

0x1d1: Pop(0)
0x1d2: Pop(1); Push((bool) Stack[-1] == 0)
0x1d3: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d4: Return(); Pop(0)

0x1d5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d8; Pop(1)

0x1d7: Return(); Pop(0)

0x1d8: PushEmpty(string, bool)
0x1d9: Stack[-2] = Stack[-3]
0x1da: Push("")
0x1db: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1dc: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1dd: Stack[-1] = (bool) 0
0x1de: GOTO 0x1e0

0x1df: Stack[-1] = (bool) 1
0x1e0: Call2 0x5b7

0x1e1: Pop(2)
0x1e2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1e3: Return(); Pop(0)

0x1e4: PushEmpty()
0x1e5: Push((int) 1)
0x1e6: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x1e7: PushEmpty()
0x1e8: Call2 0x5d1

0x1e9: Pop(0)
0x1ea: Push((int) 15324)
0x1eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1ed: PushEmpty(object, object)
0x1ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f0: Call2 0x65f

0x1f1: Pop(2)
0x1f2: PushEmpty(object, object)
0x1f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f5: Call2 0x665

0x1f6: Pop(2)
0x1f7: PushEmpty(object, object)
0x1f8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fa: Call2 0x647

0x1fb: Pop(2)
0x1fc: Push((int) 15327)
0x1fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1fe: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x1ff: PushEmpty(object, object)
0x200: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x201: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x202: Call2 0x659

0x203: Pop(2)
0x204: PushEmpty(object, object)
0x205: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x206: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x207: Call2 0x665

0x208: Pop(2)
0x209: PushEmpty(object, object)
0x20a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x20b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x20c: Call2 0x647

0x20d: Pop(2)
0x20e: Push((int) 33530)
0x20f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x211: PushEmpty(object, object)
0x212: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x213: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x214: Call2 0x616

0x215: Pop(2)
0x216: PushEmpty(object, object)
0x217: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x218: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x219: Call2 0x641

0x21a: Pop(2)
0x21b: PushEmpty(object, object)
0x21c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x21d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21e: Call2 0x647

0x21f: Pop(2)
0x220: Push((int) 33533)
0x221: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x223: PushEmpty(object, object)
0x224: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x225: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x226: Call2 0x616

0x227: Pop(2)
0x228: PushEmpty(object, object)
0x229: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22b: Call2 0x63b

0x22c: Pop(2)
0x22d: PushEmpty(object, object)
0x22e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x230: Call2 0x647

0x231: Pop(2)
0x232: Push((int) 15312)
0x233: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x235: PushEmpty(bool)
0x236: Stack[-1] = (bool) 0
0x237: PushEmpty(bool, object)
0x238: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x239: Call2 0x6c0

0x23a: Pop(1)
0x23b: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x23c: PushEmpty(bool, object)
0x23d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23e: Call2 0x6a0

0x23f: Pop(1)
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: Stack[-1] = (bool) 1
0x242: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x243: PushEmpty(object, object)
0x244: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x245: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x246: Call2 0x64d

0x247: Pop(2)
0x248: PushEmpty(string)
0x249: Stack[-1] = "Neutral"
0x24a: Call2 0x1ce

0x24b: Pop(1)
0x24c: Push((int) 514075)
0x24d: @@ SetMessage(Stack[-1])
0x24e: Pop(1)
0x24f: @@ ClearReplies()
0x250: Pop(0)
0x251: Push((int) 514076)
0x252: Push((int) 15314)
0x253: Push((int) 15313)
0x254: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x255: Pop(3)
0x256: Push((int) 534587)
0x257: Push((int) -1)
0x258: Push((int) 36225)
0x259: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25a: Pop(3)
0x25b: Return(); Pop(0)

0x25c: PushEmpty(bool)
0x25d: Stack[-1] = (bool) 0
0x25e: PushEmpty(bool, object)
0x25f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x260: Call2 0x6c0

0x261: Pop(1)
0x262: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x263: PushEmpty(bool, object)
0x264: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x265: Call2 0x6a0

0x266: Pop(1)
0x267: Pop(1); Push((bool) Stack[-1] == 0)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Stack[-1] = (bool) 1
0x26a: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x26b: PushEmpty(object, object)
0x26c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x26d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26e: Call2 0x64d

0x26f: Pop(2)
0x270: PushEmpty(string)
0x271: Stack[-1] = "Neutral"
0x272: Call2 0x1ce

0x273: Pop(1)
0x274: Push((int) 541516)
0x275: @@ SetMessage(Stack[-1])
0x276: Pop(1)
0x277: @@ ClearReplies()
0x278: Pop(0)
0x279: Push((int) 541517)
0x27a: Push((int) 43681)
0x27b: Push((int) 43680)
0x27c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27d: Pop(3)
0x27e: Push((int) 541523)
0x27f: Push((int) -1)
0x280: Push((int) 43686)
0x281: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x282: Pop(3)
0x283: Return(); Pop(0)

0x284: PushEmpty(string)
0x285: Stack[-1] = "Neutral"
0x286: Call2 0x1ce

0x287: Pop(1)
0x288: Push((int) 514079)
0x289: @@ SetMessage(Stack[-1])
0x28a: Pop(1)
0x28b: @@ ClearReplies()
0x28c: Pop(0)
0x28d: PushEmpty(bool, object)
0x28e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28f: Call2 0x6aa

0x290: Pop(1)
0x291: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x292: Push((int) 514080)
0x293: Push((int) 15318)
0x294: Push((int) 15317)
0x295: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x296: Pop(3)
0x297: PushEmpty(bool, object)
0x298: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x299: Call2 0x6b5

0x29a: Pop(1)
0x29b: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29c: Push((int) 514110)
0x29d: Push((int) 15326)
0x29e: Push((int) 15325)
0x29f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a0: Pop(3)
0x2a1: PushEmpty(bool)
0x2a2: Stack[-1] = (bool) 0
0x2a3: PushEmpty(bool, object)
0x2a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a5: Call2 0x68a

0x2a6: Pop(1)
0x2a7: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2a8: PushEmpty(bool, object)
0x2a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2aa: Call2 0x6ca

0x2ab: Pop(1)
0x2ac: Pop(1); Push((bool) Stack[-1] == 0)
0x2ad: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ae: Stack[-1] = (bool) 1
0x2af: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b0: Push((int) 532117)
0x2b1: Push((int) 33529)
0x2b2: Push((int) 33528)
0x2b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b4: Pop(3)
0x2b5: PushEmpty(bool)
0x2b6: Stack[-1] = (bool) 0
0x2b7: PushEmpty(bool, object)
0x2b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b9: Call2 0x695

0x2ba: Pop(1)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2bc: PushEmpty(bool, object)
0x2bd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2be: Call2 0x6ca

0x2bf: Pop(1)
0x2c0: Pop(1); Push((bool) Stack[-1] == 0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c2: Stack[-1] = (bool) 1
0x2c3: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c4: Push((int) 532120)
0x2c5: Push((int) 33532)
0x2c6: Push((int) 33531)
0x2c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c8: Pop(3)
0x2c9: Push((int) 514082)
0x2ca: Push((int) -1)
0x2cb: Push((int) 15319)
0x2cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cd: Pop(3)
0x2ce: Return(); Pop(0)

0x2cf: Push((int) 33532)
0x2d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2d2: PushEmpty(string)
0x2d3: Stack[-1] = "Neutral"
0x2d4: Call2 0x1ce

0x2d5: Pop(1)
0x2d6: Push((int) 532121)
0x2d7: @@ SetMessage(Stack[-1])
0x2d8: Pop(1)
0x2d9: @@ ClearReplies()
0x2da: Pop(0)
0x2db: Push((int) 532122)
0x2dc: Push((int) -1)
0x2dd: Push((int) 33533)
0x2de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2df: Pop(3)
0x2e0: Return(); Pop(0)

0x2e1: Push((int) 33529)
0x2e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2e4: PushEmpty(string)
0x2e5: Stack[-1] = "Neutral"
0x2e6: Call2 0x1ce

0x2e7: Pop(1)
0x2e8: Push((int) 532118)
0x2e9: @@ SetMessage(Stack[-1])
0x2ea: Pop(1)
0x2eb: @@ ClearReplies()
0x2ec: Pop(0)
0x2ed: Push((int) 532119)
0x2ee: Push((int) -1)
0x2ef: Push((int) 33530)
0x2f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f1: Pop(3)
0x2f2: Return(); Pop(0)

0x2f3: Push((int) 15326)
0x2f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x2f6: PushEmpty(string)
0x2f7: Stack[-1] = "Neutral"
0x2f8: Call2 0x1ce

0x2f9: Pop(1)
0x2fa: Push((int) 514111)
0x2fb: @@ SetMessage(Stack[-1])
0x2fc: Pop(1)
0x2fd: @@ ClearReplies()
0x2fe: Pop(0)
0x2ff: Push((int) 514112)
0x300: Push((int) -1)
0x301: Push((int) 15327)
0x302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x303: Pop(3)
0x304: Push((int) 529951)
0x305: Push((int) -1)
0x306: Push((int) 31335)
0x307: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x308: Pop(3)
0x309: Return(); Pop(0)

0x30a: Push((int) 15318)
0x30b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x30d: PushEmpty(string)
0x30e: Stack[-1] = "Neutral"
0x30f: Call2 0x1ce

0x310: Pop(1)
0x311: Push((int) 514081)
0x312: @@ SetMessage(Stack[-1])
0x313: Pop(1)
0x314: @@ ClearReplies()
0x315: Pop(0)
0x316: Push((int) 514109)
0x317: Push((int) -1)
0x318: Push((int) 15324)
0x319: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31a: Pop(3)
0x31b: Return(); Pop(0)

0x31c: Push((int) 43681)
0x31d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x31f: PushEmpty(string)
0x320: Stack[-1] = "Neutral"
0x321: Call2 0x1ce

0x322: Pop(1)
0x323: Push((int) 541518)
0x324: @@ SetMessage(Stack[-1])
0x325: Pop(1)
0x326: @@ ClearReplies()
0x327: Pop(0)
0x328: Push((int) 541519)
0x329: Push((int) -1)
0x32a: Push((int) 43682)
0x32b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32c: Pop(3)
0x32d: Push((int) 541520)
0x32e: Push((int) 43684)
0x32f: Push((int) 43683)
0x330: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x331: Pop(3)
0x332: Return(); Pop(0)

0x333: Push((int) 43684)
0x334: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x336: PushEmpty(string)
0x337: Stack[-1] = "Neutral"
0x338: Call2 0x1ce

0x339: Pop(1)
0x33a: Push((int) 541521)
0x33b: @@ SetMessage(Stack[-1])
0x33c: Pop(1)
0x33d: @@ ClearReplies()
0x33e: Pop(0)
0x33f: Push((int) 541522)
0x340: Push((int) -1)
0x341: Push((int) 43685)
0x342: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x343: Pop(3)
0x344: Return(); Pop(0)

0x345: Push((int) 15314)
0x346: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x35c; Pop(1)

0x348: PushEmpty(string)
0x349: Stack[-1] = "Neutral"
0x34a: Call2 0x1ce

0x34b: Pop(1)
0x34c: Push((int) 514077)
0x34d: @@ SetMessage(Stack[-1])
0x34e: Pop(1)
0x34f: @@ ClearReplies()
0x350: Pop(0)
0x351: Push((int) 514078)
0x352: Push((int) -1)
0x353: Push((int) 15315)
0x354: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x355: Pop(3)
0x356: Push((int) 534588)
0x357: Push((int) 36227)
0x358: Push((int) 36226)
0x359: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35a: Pop(3)
0x35b: Return(); Pop(0)

0x35c: Push((int) 36227)
0x35d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35e: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x35f: PushEmpty(string)
0x360: Stack[-1] = "Neutral"
0x361: Call2 0x1ce

0x362: Pop(1)
0x363: Push((int) 534589)
0x364: @@ SetMessage(Stack[-1])
0x365: Pop(1)
0x366: @@ ClearReplies()
0x367: Pop(0)
0x368: Push((int) 534590)
0x369: Push((int) -1)
0x36a: Push((int) 36228)
0x36b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36c: Pop(3)
0x36d: Return(); Pop(0)

0x36e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x36f: PushEmpty(bool)
0x370: Call2 0x97c

0x371: Pop(0)
0x372: IF (Stack[-1] == 0) GOTO 0x376; Pop(1)

0x373: @ lshStopAnimation()
0x374: Pop(0)
0x375: GOTO 0x378

0x376: @ StopAnimation()
0x377: Pop(0)
0x378: Return(); Pop(0)

0x379: GOTO 0x1e5

0x37a: Return(); Pop(0)

0x37b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x37c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x37d: PushEmpty(bool, object, float)
0x37e: Stack[-2] = Stack[-12]
0x37f: Stack[-1] = (float) 130.0
0x380: Call2 0x552

0x381: Pop(2)
0x382: Pop(1); Push((bool) Stack[-1] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x384: Stack[-10] = (int) -2
0x385: Return(); Pop(8)

0x386: @ CreateDialog(Stack[-4])
0x387: Pop(0)
0x388: PushEmpty(int)
0x389: Call2 0x976

0x38a: Pop(0)
0x38b: @@ SetNPCName(Stack[-1])
0x38c: Pop(1)
0x38d: PushEmpty(int)
0x38e: Call2 0x974

0x38f: Pop(0)
0x390: @@ SetNPCDescription(Stack[-1])
0x391: Pop(1)
0x392: PushEmpty(string)
0x393: Call2 0x978

0x394: Pop(0)
0x395: @@ SetPhoto(Stack[-1])
0x396: Pop(1)
0x397: PushEmpty(string)
0x398: Call2 0x97a

0x399: Pop(0)
0x39a: @@ SetPhoto2(Stack[-1])
0x39b: Pop(1)
0x39c: PushEmpty(int)
0x39d: Call2 0x710

0x39e: Pop(0)
0x39f: @@ SetPlayerName(Stack[-1])
0x3a0: Pop(1)
0x3a1: Stack[-2] = (int) -1
0x3a2: @ IsOverrideActive(Stack[-3])
0x3a3: Pop(0)
0x3a4: Push(Stack[-3])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3a8; Pop(1)

0x3a6: Stack[-10] = (int) -2
0x3a7: Return(); Pop(8)

0x3a8: @ DoDialog(Stack[-4])
0x3a9: Pop(0)
0x3aa: PushEmpty(object, object)
0x3ab: Stack[-2] = Stack[-11]
0x3ac: Stack[-1] = Stack[-6]
0x3ad: Push(-2, 4); TaskCall(5)
0x3ae: Call2 0x3c5

0x3af: Pop(-2, 4); TaskReturn
0x3b0: Pop(2)
0x3b1: @@ IsDialogEnd(Stack[-1])
0x3b2: Pop(0)
0x3b3: Pop(0); Push((bool) Stack[-1] == 0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3ba; Pop(1)

0x3b5: @ sync()
0x3b6: Pop(0)
0x3b7: @@ IsDialogEnd(Stack[-1])
0x3b8: Pop(0)
0x3b9: GOTO 0x3b3

0x3ba: PushEmpty(object)
0x3bb: Stack[-1] = Stack[-10]
0x3bc: Call2 0x596

0x3bd: Pop(1)
0x3be: @ StopDialog(Stack[-4])
0x3bf: Pop(0)
0x3c0: @@ GetReturnValue(Stack[-2])
0x3c1: Pop(0)
0x3c2: Stack[-10] = Stack[-2]
0x3c3: Return(); Pop(8)

0x3c4: Stack[-4] = 0
0x3c5: PushEmpty()
0x3c6: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3c7: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3c8: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3c9: Push((int) 1)
0x3ca: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3cb: PushEmpty(string)
0x3cc: Stack[-1] = "Neutral"
0x3cd: Call2 0x3ff

0x3ce: Pop(1)
0x3cf: Push((int) 521530)
0x3d0: @@ SetMessage(Stack[-1])
0x3d1: Pop(1)
0x3d2: @@ ClearReplies()
0x3d3: Pop(0)
0x3d4: Push((int) 521531)
0x3d5: Push((int) 36229)
0x3d6: Push((int) 22692)
0x3d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d8: Pop(3)
0x3d9: Push((int) 534594)
0x3da: Push((int) 36233)
0x3db: Push((int) 36232)
0x3dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dd: Pop(3)
0x3de: GOTO 0x3e1

0x3df: Return(); Pop(0)

0x3e0: GOTO 0x3c9

0x3e1: PushEmpty(bool)
0x3e2: Call2 0x97c

0x3e3: Pop(0)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3e5: @ lshWaitForAnimEnd()
0x3e6: Pop(0)
0x3e7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3e9: GOTO 0x3ef

0x3ea: PushEmpty(string)
0x3eb: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3ec: Call2 0x5a7

0x3ed: Pop(1)
0x3ee: GOTO 0x3e5

0x3ef: GOTO 0x3fe

0x3f0: Push("all")
0x3f1: Push("idle")
0x3f2: @ PlayAnimation(Stack[-2], Stack[-1])
0x3f3: Pop(2)
0x3f4: @ WaitForAnimEnd()
0x3f5: Pop(0)
0x3f6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3f7: IF (Stack[-1] == 0) GOTO 0x3f9; Pop(1)

0x3f8: GOTO 0x3fe

0x3f9: Push("all")
0x3fa: Push("idle")
0x3fb: @ PlayAnimation(Stack[-2], Stack[-1])
0x3fc: Pop(2)
0x3fd: GOTO 0x3f4

0x3fe: Return(); Pop(0)

0x3ff: PushEmpty()
0x400: PushEmpty(bool)
0x401: Call2 0x97c

0x402: Pop(0)
0x403: Pop(1); Push((bool) Stack[-1] == 0)
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: Return(); Pop(0)

0x406: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x407: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x408: Return(); Pop(0)

0x409: PushEmpty(string, bool)
0x40a: Stack[-2] = Stack[-3]
0x40b: Push("")
0x40c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x40d: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40e: Stack[-1] = (bool) 0
0x40f: GOTO 0x411

0x410: Stack[-1] = (bool) 1
0x411: Call2 0x5b7

0x412: Pop(2)
0x413: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x414: Return(); Pop(0)

0x415: PushEmpty()
0x416: Push((int) 1)
0x417: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x418: PushEmpty()
0x419: Call2 0x5d1

0x41a: Pop(0)
0x41b: Push((int) 22691)
0x41c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x41e: PushEmpty(string)
0x41f: Stack[-1] = "Neutral"
0x420: Call2 0x3ff

0x421: Pop(1)
0x422: Push((int) 521530)
0x423: @@ SetMessage(Stack[-1])
0x424: Pop(1)
0x425: @@ ClearReplies()
0x426: Pop(0)
0x427: Push((int) 521531)
0x428: Push((int) 36229)
0x429: Push((int) 22692)
0x42a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42b: Pop(3)
0x42c: Push((int) 534594)
0x42d: Push((int) 36233)
0x42e: Push((int) 36232)
0x42f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(3)
0x431: Return(); Pop(0)

0x432: Push((int) 36233)
0x433: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x435: PushEmpty(string)
0x436: Stack[-1] = "Neutral"
0x437: Call2 0x3ff

0x438: Pop(1)
0x439: Push((int) 534595)
0x43a: @@ SetMessage(Stack[-1])
0x43b: Pop(1)
0x43c: @@ ClearReplies()
0x43d: Pop(0)
0x43e: Push((int) 534596)
0x43f: Push((int) -1)
0x440: Push((int) 36234)
0x441: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x442: Pop(3)
0x443: Push((int) 534597)
0x444: Push((int) -1)
0x445: Push((int) 36235)
0x446: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x447: Pop(3)
0x448: Return(); Pop(0)

0x449: Push((int) 36229)
0x44a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x44c: PushEmpty(string)
0x44d: Stack[-1] = "Neutral"
0x44e: Call2 0x3ff

0x44f: Pop(1)
0x450: Push((int) 534591)
0x451: @@ SetMessage(Stack[-1])
0x452: Pop(1)
0x453: @@ ClearReplies()
0x454: Pop(0)
0x455: Push((int) 534592)
0x456: Push((int) -1)
0x457: Push((int) 36230)
0x458: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x459: Pop(3)
0x45a: Push((int) 534593)
0x45b: Push((int) -1)
0x45c: Push((int) 36231)
0x45d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45e: Pop(3)
0x45f: Return(); Pop(0)

0x460: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x461: PushEmpty(bool)
0x462: Call2 0x97c

0x463: Pop(0)
0x464: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x465: @ lshStopAnimation()
0x466: Pop(0)
0x467: GOTO 0x46a

0x468: @ StopAnimation()
0x469: Pop(0)
0x46a: Return(); Pop(0)

0x46b: GOTO 0x416

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
0x47f: Call2 0x727

0x480: Pop(1)
0x481: @ Trace(Stack[-1])
0x482: Pop(1)
0x483: PushEmpty(bool, int)
0x484: PushEmpty(int, string)
0x485: Stack[-1] = Stack[-5]
0x486: Call2 0x727

0x487: Stack[-3] = Stack[-2]
0x488: Pop(2)
0x489: Call2 0x96a

0x48a: Pop(1)
0x48b: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x48c: PushEmpty(int, object)
0x48d: Stack[-1] = Stack[-5]
0x48e: Push(-2, 1); TaskCall(4)
0x48f: Call2 0x37b

0x490: Pop(-2, 1); TaskReturn
0x491: Pop(2)
0x492: GOTO 0x4b2

0x493: PushEmpty(bool, int)
0x494: PushEmpty(int, string)
0x495: Stack[-1] = Stack[-5]
0x496: Call2 0x727

0x497: Stack[-3] = Stack[-2]
0x498: Pop(2)
0x499: Call2 0x956

0x49a: Pop(1)
0x49b: IF (Stack[-1] == 0) GOTO 0x4a3; Pop(1)

0x49c: PushEmpty(int, object)
0x49d: Stack[-1] = Stack[-5]
0x49e: Push(-2, 1); TaskCall(0)
0x49f: Call2 0x0

0x4a0: Pop(-2, 1); TaskReturn
0x4a1: Pop(2)
0x4a2: GOTO 0x4b2

0x4a3: PushEmpty(bool, int)
0x4a4: PushEmpty(int, string)
0x4a5: Stack[-1] = Stack[-5]
0x4a6: Call2 0x727

0x4a7: Stack[-3] = Stack[-2]
0x4a8: Pop(2)
0x4a9: Call2 0x960

0x4aa: Pop(1)
0x4ab: IF (Stack[-1] == 0) GOTO 0x4b2; Pop(1)

0x4ac: PushEmpty(int, object)
0x4ad: Stack[-1] = Stack[-5]
0x4ae: Push(-2, 1); TaskCall(2)
0x4af: Call2 0xc4

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
0x4e9: Call2 0x5c6

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
0x4fe: Call2 0x605

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
0x51a: Call2 0x5fe

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
0x56d: Call2 0x5d8

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
0x57d: @ CameraTransit(Stack[-3], Stack[-5])
0x57e: Pop(0)
0x57f: Push(CvectorIndex(Stack[-4], 0))
0x580: Push(CvectorIndex(Stack[-5], 2))
0x581: @ Rotate(Stack[-2], Stack[-1])
0x582: Pop(2)
0x583: PushEmpty(bool)
0x584: Call2 0x97c

0x585: Pop(0)
0x586: IF (Stack[-1] == 0) GOTO 0x588; Pop(1)

0x587: GOTO 0x590

0x588: Push("head")
0x589: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x58a: Pop(1)
0x58b: Push(Stack[-1])
0x58c: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58d: Push("head")
0x58e: @ LookAsyncCamera(Stack[-1])
0x58f: Pop(1)
0x590: @ CameraWaitForPlayFinish()
0x591: Pop(0)
0x592: @ ResumeWorld()
0x593: Pop(0)
0x594: Stack[-21] = (bool) 1
0x595: Return(); Pop(18)

0x596: PushEmpty(bool, bool)
0x597: @ CameraSwitchToNormal()
0x598: Pop(0)
0x599: PushEmpty(bool)
0x59a: Call2 0x97c

0x59b: Pop(0)
0x59c: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x59d: GOTO 0x5a6

0x59e: Push("head")
0x59f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5a0: Pop(1)
0x5a1: Push(Stack[-1])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x5a3: Push("head")
0x5a4: @ UnlookAsync(Stack[-1])
0x5a5: Pop(1)
0x5a6: Return(); Pop(2)

0x5a7: PushEmpty(bool, float, float, bool, float, float)
0x5a8: @ lshHasAnimation(Stack[-3], Stack[-7])
0x5a9: Pop(0)
0x5aa: Push(Stack[-3])
0x5ab: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5ac: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x5ad: Pop(0)
0x5ae: Push((bool) 0)
0x5af: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5b0: Pop(1)
0x5b1: GOTO 0x5b6

0x5b2: Push("Can't find lsh animation : ")
0x5b3: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5b4: @ Trace(Stack[-1])
0x5b5: Pop(1)
0x5b6: Return(); Pop(6)

0x5b7: PushEmpty(bool, float, float, bool, float, float)
0x5b8: @ lshHasAnimation(Stack[-3], Stack[-8])
0x5b9: Pop(0)
0x5ba: Push(Stack[-3])
0x5bb: IF (Stack[-1] == 0) GOTO 0x5c1; Pop(1)

0x5bc: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x5bd: Pop(0)
0x5be: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x5bf: Pop(0)
0x5c0: GOTO 0x5c5

0x5c1: Push("Can't find lsh animation : ")
0x5c2: Pop(1); Push(Stack[-1] + Stack[-9]);
0x5c3: @ Trace(Stack[-1])
0x5c4: Pop(1)
0x5c5: Return(); Pop(6)

0x5c6: PushEmpty(float, cvector, float, cvector)
0x5c7: @@ GetEyesHeight(Stack[-2])
0x5c8: Pop(0)
0x5c9: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x5ca: Push(CvectorIndex(Stack[-1], 1))
0x5cb: Stack[-1] = Stack[-3]
0x5cc: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x5cd: Push("head")
0x5ce: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x5cf: Pop(1)
0x5d0: Return(); Pop(4)

0x5d1: PushEmpty(bool)
0x5d2: Call2 0x97c

0x5d3: Pop(0)
0x5d4: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d5: @ lshStopSpeech()
0x5d6: Pop(0)
0x5d7: Return(); Pop(0)

0x5d8: PushEmpty(float, float)
0x5d9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x5da: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x5db: Push((float)0.0)
0x5dc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5dd: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5de: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x5df: Return(); Pop(2)

0x5e0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x5e1: Return(); Pop(2)

0x5e2: PushEmpty(int, bool, int, bool)
0x5e3: @ GetInvItemByName(Stack[-2], Stack[-5])
0x5e4: Pop(0)
0x5e5: @@ HasItem(Stack[-2], Stack[-1])
0x5e6: Pop(0)
0x5e7: Stack[-7] = Stack[-1]
0x5e8: Return(); Pop(4)

0x5e9: PushEmpty(object, object)
0x5ea: @ FindActor(Stack[-1], Stack[-5])
0x5eb: Pop(0)
0x5ec: Pop(0); Push((bool) Stack[-1] == 0)
0x5ed: IF (Stack[-1] == 0) GOTO 0x5f0; Pop(1)

0x5ee: Stack[-6] = (bool) 0
0x5ef: Return(); Pop(2)

0x5f0: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x5f1: Pop(0)
0x5f2: Stack[-6] = (bool) 1
0x5f3: Return(); Pop(2)

0x5f4: Stack[-1] = 0
0x5f5: PushEmpty(float, float)
0x5f6: @ GetGameTime(Stack[-1])
0x5f7: Pop(0)
0x5f8: Push((int) 1)
0x5f9: PushEmpty(int)
0x5fa: Push((int) 24)
0x5fb: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5fc: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5fd: Return(); Pop(2)

0x5fe: PushEmpty(string, string)
0x5ff: Stack[-1] = "idle"
0x600: Push(Stack[-3])
0x601: IF (Stack[-1] == 0) GOTO 0x603; Pop(1)

0x602: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x603: Stack[-4] = Stack[-1]
0x604: Return(); Pop(2)

0x605: PushEmpty(int, bool, int, bool)
0x606: Stack[-2] = (int) 0
0x607: Push("all")
0x608: PushEmpty(string, int)
0x609: Stack[-1] = Stack[-5]
0x60a: Call2 0x5fe

0x60b: Pop(1)
0x60c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x60d: Pop(2)
0x60e: Pop(0); Push((bool) Stack[-1] == 0)
0x60f: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x610: GOTO 0x614

0x611: Push((int) 1)
0x612: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x613: GOTO 0x607

0x614: Stack[-5] = Stack[-2]
0x615: Return(); Pop(4)

0x616: PushEmpty(string, string)
0x617: Push("npc")
0x618: @ GetProperty(Stack[-1], Stack[-2])
0x619: Pop(1)
0x61a: PushEmpty(int)
0x61b: Call2 0x721

0x61c: Pop(0)
0x61d: Push((int) 0)
0x61e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x61f: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x620: PushEmpty(bool, string, string, string)
0x621: Stack[-3] = "volonteers_danko"
0x622: Stack[-2] = "rescue_oneday"
0x623: Stack[-1] = Stack[-5]
0x624: Call2 0x5e9

0x625: Pop(4)
0x626: GOTO 0x63a

0x627: PushEmpty(int)
0x628: Call2 0x721

0x629: Pop(0)
0x62a: Push((int) 1)
0x62b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x62c: IF (Stack[-1] == 0) GOTO 0x634; Pop(1)

0x62d: PushEmpty(bool, string, string, string)
0x62e: Stack[-3] = "volonteers_burah"
0x62f: Stack[-2] = "rescue_oneday"
0x630: Stack[-1] = Stack[-5]
0x631: Call2 0x5e9

0x632: Pop(4)
0x633: GOTO 0x63a

0x634: PushEmpty(bool, string, string, string)
0x635: Stack[-3] = "volonteers_klara"
0x636: Stack[-2] = "rescue_oneday"
0x637: Stack[-1] = Stack[-5]
0x638: Call2 0x5e9

0x639: Pop(4)
0x63a: Return(); Pop(2)

0x63b: PushEmpty(int, int)
0x63c: Push("feromicin")
0x63d: Push((int) 1)
0x63e: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x63f: Pop(2)
0x640: Return(); Pop(2)

0x641: PushEmpty(int, int)
0x642: Push("monomicin")
0x643: Push((int) 1)
0x644: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x645: Pop(2)
0x646: Return(); Pop(2)

0x647: PushEmpty()
0x648: Push("playsound")
0x649: Push("giveitem")
0x64a: @ TriggerWorld(Stack[-2], Stack[-1])
0x64b: Pop(2)
0x64c: Return(); Pop(0)

0x64d: PushEmpty(string, string)
0x64e: Push("npc")
0x64f: @ GetProperty(Stack[-1], Stack[-2])
0x650: Pop(1)
0x651: Push("oo")
0x652: Pop(1); Push(Stack[-1] + Stack[-2]);
0x653: Push("1")
0x654: Pop(2); Push(Stack[-2] + Stack[-1]);
0x655: Push((int) 1)
0x656: @ SetVariable(Stack[-2], Stack[-1])
0x657: Pop(2)
0x658: Return(); Pop(2)

0x659: PushEmpty(int, int)
0x65a: Push("powder")
0x65b: Push((int) 1)
0x65c: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x65d: Pop(2)
0x65e: Return(); Pop(2)

0x65f: PushEmpty(int, int)
0x660: Push("burah_serum")
0x661: Push((int) 1)
0x662: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x663: Pop(2)
0x664: Return(); Pop(2)

0x665: PushEmpty(string, string)
0x666: Push("npc")
0x667: @ GetProperty(Stack[-1], Stack[-2])
0x668: Pop(1)
0x669: PushEmpty(int)
0x66a: Call2 0x721

0x66b: Pop(0)
0x66c: Push((int) 0)
0x66d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x66e: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x66f: PushEmpty(bool, string, string, string)
0x670: Stack[-3] = "volonteers_danko"
0x671: Stack[-2] = "rescue"
0x672: Stack[-1] = Stack[-5]
0x673: Call2 0x5e9

0x674: Pop(4)
0x675: GOTO 0x689

0x676: PushEmpty(int)
0x677: Call2 0x721

0x678: Pop(0)
0x679: Push((int) 1)
0x67a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x67b: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x67c: PushEmpty(bool, string, string, string)
0x67d: Stack[-3] = "volonteers_burah"
0x67e: Stack[-2] = "rescue"
0x67f: Stack[-1] = Stack[-5]
0x680: Call2 0x5e9

0x681: Pop(4)
0x682: GOTO 0x689

0x683: PushEmpty(bool, string, string, string)
0x684: Stack[-3] = "volonteers_klara"
0x685: Stack[-2] = "rescue"
0x686: Stack[-1] = Stack[-5]
0x687: Call2 0x5e9

0x688: Pop(4)
0x689: Return(); Pop(2)

0x68a: PushEmpty()
0x68b: PushEmpty(bool, object, string)
0x68c: Stack[-2] = Stack[-4]
0x68d: Stack[-1] = "monomicin"
0x68e: Call2 0x5e2

0x68f: Pop(2)
0x690: IF (Stack[-1] == 0) GOTO 0x693; Pop(1)

0x691: Stack[-2] = (bool) 1
0x692: Return(); Pop(0)

0x693: Stack[-2] = (bool) 0
0x694: Return(); Pop(0)

0x695: PushEmpty()
0x696: PushEmpty(bool, object, string)
0x697: Stack[-2] = Stack[-4]
0x698: Stack[-1] = "feromicin"
0x699: Call2 0x5e2

0x69a: Pop(2)
0x69b: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x69c: Stack[-2] = (bool) 1
0x69d: Return(); Pop(0)

0x69e: Stack[-2] = (bool) 0
0x69f: Return(); Pop(0)

0x6a0: PushEmpty()
0x6a1: PushEmpty(bool, object)
0x6a2: Stack[-1] = Stack[-3]
0x6a3: Call2 0x6d4

0x6a4: Pop(1)
0x6a5: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6a6: Stack[-2] = (bool) 1
0x6a7: Return(); Pop(0)

0x6a8: Stack[-2] = (bool) 0
0x6a9: Return(); Pop(0)

0x6aa: PushEmpty()
0x6ab: PushEmpty(bool, object, string)
0x6ac: Stack[-2] = Stack[-4]
0x6ad: Stack[-1] = "burah_serum"
0x6ae: Call2 0x5e2

0x6af: Pop(2)
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x6b1: Stack[-2] = (bool) 1
0x6b2: Return(); Pop(0)

0x6b3: Stack[-2] = (bool) 0
0x6b4: Return(); Pop(0)

0x6b5: PushEmpty()
0x6b6: PushEmpty(bool, object, string)
0x6b7: Stack[-2] = Stack[-4]
0x6b8: Stack[-1] = "powder"
0x6b9: Call2 0x5e2

0x6ba: Pop(2)
0x6bb: IF (Stack[-1] == 0) GOTO 0x6be; Pop(1)

0x6bc: Stack[-2] = (bool) 1
0x6bd: Return(); Pop(0)

0x6be: Stack[-2] = (bool) 0
0x6bf: Return(); Pop(0)

0x6c0: PushEmpty()
0x6c1: PushEmpty(bool, object)
0x6c2: Stack[-1] = Stack[-3]
0x6c3: Call2 0x6fc

0x6c4: Pop(1)
0x6c5: IF (Stack[-1] == 0) GOTO 0x6c8; Pop(1)

0x6c6: Stack[-2] = (bool) 1
0x6c7: Return(); Pop(0)

0x6c8: Stack[-2] = (bool) 0
0x6c9: Return(); Pop(0)

0x6ca: PushEmpty()
0x6cb: PushEmpty(bool, object)
0x6cc: Stack[-1] = Stack[-3]
0x6cd: Call2 0x709

0x6ce: Pop(1)
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d0: Stack[-2] = (bool) 1
0x6d1: Return(); Pop(0)

0x6d2: Stack[-2] = (bool) 0
0x6d3: Return(); Pop(0)

0x6d4: PushEmpty(string, int, string, int)
0x6d5: Push("npc")
0x6d6: @ GetProperty(Stack[-1], Stack[-3])
0x6d7: Pop(1)
0x6d8: PushEmpty(int, string)
0x6d9: Stack[-1] = Stack[-4]
0x6da: Call2 0x727

0x6db: Stack[-3] = Stack[-2]
0x6dc: Pop(2)
0x6dd: PushEmpty(int)
0x6de: Call2 0x721

0x6df: Pop(0)
0x6e0: Push((int) 1)
0x6e1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6e2: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e3: PushEmpty(bool, int)
0x6e4: Stack[-1] = Stack[-3]
0x6e5: Call2 0x8d5

0x6e6: Stack[-8] = Stack[-2]
0x6e7: Pop(2)
0x6e8: Return(); Pop(4)

0x6e9: GOTO 0x6f6

0x6ea: PushEmpty(int)
0x6eb: Call2 0x721

0x6ec: Pop(0)
0x6ed: Push((int) 0)
0x6ee: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x6ef: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6f0: PushEmpty(bool, int)
0x6f1: Stack[-1] = Stack[-3]
0x6f2: Call2 0x8fb

0x6f3: Stack[-8] = Stack[-2]
0x6f4: Pop(2)
0x6f5: Return(); Pop(4)

0x6f6: PushEmpty(bool, int)
0x6f7: Stack[-1] = Stack[-3]
0x6f8: Call2 0x926

0x6f9: Stack[-8] = Stack[-2]
0x6fa: Pop(2)
0x6fb: Return(); Pop(4)

0x6fc: PushEmpty(string, int, string, int)
0x6fd: Push("npc")
0x6fe: @ GetProperty(Stack[-1], Stack[-3])
0x6ff: Pop(1)
0x700: Push("oo")
0x701: Pop(1); Push(Stack[-1] + Stack[-3]);
0x702: Push("1")
0x703: Pop(2); Push(Stack[-2] + Stack[-1]);
0x704: @ GetVariable(Stack[-1], Stack[-2])
0x705: Pop(1)
0x706: Push((int) 0)
0x707: Stack[-7] = Stack[-2] == Stack[-1]; Pop(1);
0x708: Return(); Pop(4)

0x709: PushEmpty()
0x70a: PushEmpty(int)
0x70b: Call2 0x5f5

0x70c: Pop(0)
0x70d: Push((int) 12)
0x70e: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x70f: Return(); Pop(0)

0x710: PushEmpty(int, int)
0x711: Push("branch")
0x712: @ GetVariable(Stack[-1], Stack[-2])
0x713: Pop(1)
0x714: Push((int) 0)
0x715: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x716: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x717: Stack[-3] = (int) 1
0x718: Return(); Pop(2)

0x719: GOTO 0x71f

0x71a: Push((int) 1)
0x71b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x71c: IF (Stack[-1] == 0) GOTO 0x71f; Pop(1)

0x71d: Stack[-3] = (int) 2
0x71e: Return(); Pop(2)

0x71f: Stack[-3] = (int) 3
0x720: Return(); Pop(2)

0x721: PushEmpty(int, int)
0x722: Push("branch")
0x723: @ GetVariable(Stack[-1], Stack[-2])
0x724: Pop(1)
0x725: Stack[-3] = Stack[-1]
0x726: Return(); Pop(2)

0x727: PushEmpty()
0x728: @ _strlwr(Stack[-1])
0x729: Pop(0)
0x72a: Push("alexandr")
0x72b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x72c: IF (Stack[-1] == 0) GOTO 0x72f; Pop(1)

0x72d: Stack[-2] = (int) 1
0x72e: Return(); Pop(0)

0x72f: Push("andrei")
0x730: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x731: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x732: Stack[-2] = (int) 2
0x733: Return(); Pop(0)

0x734: Push("anna")
0x735: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x736: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x737: Stack[-2] = (int) 3
0x738: Return(); Pop(0)

0x739: Push("bigvlad")
0x73a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x73b: IF (Stack[-1] == 0) GOTO 0x73e; Pop(1)

0x73c: Stack[-2] = (int) 4
0x73d: Return(); Pop(0)

0x73e: Push("eva")
0x73f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x740: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x741: Stack[-2] = (int) 5
0x742: Return(); Pop(0)

0x743: Push("georg")
0x744: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x745: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x746: Stack[-2] = (int) 6
0x747: Return(); Pop(0)

0x748: Push("grif")
0x749: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x74a: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x74b: Stack[-2] = (int) 7
0x74c: Return(); Pop(0)

0x74d: Push("han")
0x74e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x74f: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x750: Stack[-2] = (int) 8
0x751: Return(); Pop(0)

0x752: Push("julia")
0x753: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x754: IF (Stack[-1] == 0) GOTO 0x757; Pop(1)

0x755: Stack[-2] = (int) 9
0x756: Return(); Pop(0)

0x757: Push("kapella")
0x758: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x759: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x75a: Stack[-2] = (int) 10
0x75b: Return(); Pop(0)

0x75c: Push("katerina")
0x75d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x75e: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x75f: Stack[-2] = (int) 11
0x760: Return(); Pop(0)

0x761: Push("klara")
0x762: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x763: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x764: Stack[-2] = (int) 12
0x765: Return(); Pop(0)

0x766: Push("lara")
0x767: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x768: IF (Stack[-1] == 0) GOTO 0x76b; Pop(1)

0x769: Stack[-2] = (int) 13
0x76a: Return(); Pop(0)

0x76b: Push("laska")
0x76c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x76d: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76e: Stack[-2] = (int) 14
0x76f: Return(); Pop(0)

0x770: Push("maria")
0x771: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x772: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x773: Stack[-2] = (int) 15
0x774: Return(); Pop(0)

0x775: Push("mark")
0x776: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x777: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x778: Stack[-2] = (int) 16
0x779: Return(); Pop(0)

0x77a: Push("mat")
0x77b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x77c: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77d: Stack[-2] = (int) 17
0x77e: Return(); Pop(0)

0x77f: Push("mishka")
0x780: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x781: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x782: Stack[-2] = (int) 18
0x783: Return(); Pop(0)

0x784: Push("mladvlad")
0x785: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x786: IF (Stack[-1] == 0) GOTO 0x789; Pop(1)

0x787: Stack[-2] = (int) 19
0x788: Return(); Pop(0)

0x789: Push("notkin")
0x78a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x78b: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x78c: Stack[-2] = (int) 20
0x78d: Return(); Pop(0)

0x78e: Push("ospina")
0x78f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x793; Pop(1)

0x791: Stack[-2] = (int) 21
0x792: Return(); Pop(0)

0x793: Push("petr")
0x794: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x795: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x796: Stack[-2] = (int) 22
0x797: Return(); Pop(0)

0x798: Push("rubin")
0x799: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x79a: IF (Stack[-1] == 0) GOTO 0x79d; Pop(1)

0x79b: Stack[-2] = (int) 23
0x79c: Return(); Pop(0)

0x79d: Push("spi4ka")
0x79e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x79f: IF (Stack[-1] == 0) GOTO 0x7a2; Pop(1)

0x7a0: Stack[-2] = (int) 24
0x7a1: Return(); Pop(0)

0x7a2: Push("starshina")
0x7a3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a7; Pop(1)

0x7a5: Stack[-2] = (int) 25
0x7a6: Return(); Pop(0)

0x7a7: Push("viktor")
0x7a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a9: IF (Stack[-1] == 0) GOTO 0x7ac; Pop(1)

0x7aa: Stack[-2] = (int) 26
0x7ab: Return(); Pop(0)

0x7ac: Push("wasted_woman")
0x7ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7af: Stack[-2] = (int) 27
0x7b0: Return(); Pop(0)

0x7b1: Push("wasted_male")
0x7b2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b3: IF (Stack[-1] == 0) GOTO 0x7b6; Pop(1)

0x7b4: Stack[-2] = (int) 28
0x7b5: Return(); Pop(0)

0x7b6: Push("alkash")
0x7b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b8: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b9: Stack[-2] = (int) 29
0x7ba: Return(); Pop(0)

0x7bb: Push("boy")
0x7bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7bd: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7be: Stack[-2] = (int) 30
0x7bf: Return(); Pop(0)

0x7c0: Push("girl")
0x7c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c2: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7c3: Stack[-2] = (int) 31
0x7c4: Return(); Pop(0)

0x7c5: Push("littleboy")
0x7c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c7: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c8: Stack[-2] = (int) 32
0x7c9: Return(); Pop(0)

0x7ca: Push("littlegirl")
0x7cb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7cc: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7cd: Stack[-2] = (int) 33
0x7ce: Return(); Pop(0)

0x7cf: Push("butcher")
0x7d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d1: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7d2: Stack[-2] = (int) 34
0x7d3: Return(); Pop(0)

0x7d4: Push("dohodyaga")
0x7d5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d6: IF (Stack[-1] == 0) GOTO 0x7d9; Pop(1)

0x7d7: Stack[-2] = (int) 35
0x7d8: Return(); Pop(0)

0x7d9: Push("unosha")
0x7da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7db: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7dc: Stack[-2] = (int) 36
0x7dd: Return(); Pop(0)

0x7de: Push("vaxxabit")
0x7df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e0: IF (Stack[-1] == 0) GOTO 0x7e3; Pop(1)

0x7e1: Stack[-2] = (int) 37
0x7e2: Return(); Pop(0)

0x7e3: Push("vaxxabitka")
0x7e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7e5: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7e6: Stack[-2] = (int) 38
0x7e7: Return(); Pop(0)

0x7e8: Push("woman")
0x7e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ea: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7eb: Stack[-2] = (int) 39
0x7ec: Return(); Pop(0)

0x7ed: Push("worker")
0x7ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7f0: Stack[-2] = (int) 40
0x7f1: Return(); Pop(0)

0x7f2: Push("whitemask")
0x7f3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7f4: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f5: Stack[-2] = (int) 42
0x7f6: Return(); Pop(0)

0x7f7: Push("birdmask")
0x7f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7f9: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7fa: Stack[-2] = (int) 43
0x7fb: Return(); Pop(0)

0x7fc: Push("birdmask")
0x7fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7fe: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7ff: Stack[-2] = (int) 44
0x800: Return(); Pop(0)

0x801: Push("patrol")
0x802: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x803: IF (Stack[-1] == 0) GOTO 0x806; Pop(1)

0x804: Stack[-2] = (int) 46
0x805: Return(); Pop(0)

0x806: Push("danko")
0x807: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x808: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x809: Stack[-2] = (int) 47
0x80a: Return(); Pop(0)

0x80b: Push("alkash_d")
0x80c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x80d: IF (Stack[-1] == 0) GOTO 0x810; Pop(1)

0x80e: Stack[-2] = (int) 48
0x80f: Return(); Pop(0)

0x810: Push("boy_d")
0x811: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x812: IF (Stack[-1] == 0) GOTO 0x815; Pop(1)

0x813: Stack[-2] = (int) 49
0x814: Return(); Pop(0)

0x815: Push("butcher_d")
0x816: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x817: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x818: Stack[-2] = (int) 50
0x819: Return(); Pop(0)

0x81a: Push("dohodyaga_d")
0x81b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x81c: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x81d: Stack[-2] = (int) 51
0x81e: Return(); Pop(0)

0x81f: Push("girl_d")
0x820: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x821: IF (Stack[-1] == 0) GOTO 0x824; Pop(1)

0x822: Stack[-2] = (int) 52
0x823: Return(); Pop(0)

0x824: Push("littleboy_d")
0x825: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x826: IF (Stack[-1] == 0) GOTO 0x829; Pop(1)

0x827: Stack[-2] = (int) 53
0x828: Return(); Pop(0)

0x829: Push("littlegirl_d")
0x82a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x82b: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x82c: Stack[-2] = (int) 54
0x82d: Return(); Pop(0)

0x82e: Push("unosha2")
0x82f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x830: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x831: Stack[-2] = (int) 55
0x832: Return(); Pop(0)

0x833: Push("unosha_d")
0x834: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x835: IF (Stack[-1] == 0) GOTO 0x838; Pop(1)

0x836: Stack[-2] = (int) 56
0x837: Return(); Pop(0)

0x838: Push("unosha2_d")
0x839: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x83a: IF (Stack[-1] == 0) GOTO 0x83d; Pop(1)

0x83b: Stack[-2] = (int) 57
0x83c: Return(); Pop(0)

0x83d: Push("vaxxabit_d")
0x83e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x83f: IF (Stack[-1] == 0) GOTO 0x842; Pop(1)

0x840: Stack[-2] = (int) 58
0x841: Return(); Pop(0)

0x842: Push("vaxxabitka_d")
0x843: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x844: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x845: Stack[-2] = (int) 59
0x846: Return(); Pop(0)

0x847: Push("wasted_male_d")
0x848: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x849: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x84a: Stack[-2] = (int) 60
0x84b: Return(); Pop(0)

0x84c: Push("wasted_woman_d")
0x84d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x84e: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x84f: Stack[-2] = (int) 61
0x850: Return(); Pop(0)

0x851: Push("woman_d")
0x852: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x853: IF (Stack[-1] == 0) GOTO 0x856; Pop(1)

0x854: Stack[-2] = (int) 62
0x855: Return(); Pop(0)

0x856: Push("worker2")
0x857: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x858: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x859: Stack[-2] = (int) 63
0x85a: Return(); Pop(0)

0x85b: Push("worker_d")
0x85c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x85d: IF (Stack[-1] == 0) GOTO 0x860; Pop(1)

0x85e: Stack[-2] = (int) 64
0x85f: Return(); Pop(0)

0x860: Push("worker2_d")
0x861: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x862: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x863: Stack[-2] = (int) 65
0x864: Return(); Pop(0)

0x865: Push("burah")
0x866: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x867: IF (Stack[-1] == 0) GOTO 0x86a; Pop(1)

0x868: Stack[-2] = (int) 66
0x869: Return(); Pop(0)

0x86a: Push("gorbun_daughter")
0x86b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x86c: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x86d: Stack[-2] = (int) 67
0x86e: Return(); Pop(0)

0x86f: Push("gorbun")
0x870: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x871: IF (Stack[-1] == 0) GOTO 0x874; Pop(1)

0x872: Stack[-2] = (int) 68
0x873: Return(); Pop(0)

0x874: Push("albinos")
0x875: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x876: IF (Stack[-1] == 0) GOTO 0x879; Pop(1)

0x877: Stack[-2] = (int) 69
0x878: Return(); Pop(0)

0x879: Push("aglaja")
0x87a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x87b: IF (Stack[-1] == 0) GOTO 0x87e; Pop(1)

0x87c: Stack[-2] = (int) 70
0x87d: Return(); Pop(0)

0x87e: Push("nude")
0x87f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x880: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x881: Stack[-2] = (int) 71
0x882: Return(); Pop(0)

0x883: Push("block")
0x884: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x885: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x886: Stack[-2] = (int) 72
0x887: Return(); Pop(0)

0x888: Push("officer")
0x889: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x88a: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x88b: Stack[-2] = (int) 73
0x88c: Return(); Pop(0)

0x88d: Push("doberman")
0x88e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x88f: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x890: Stack[-2] = (int) 74
0x891: Return(); Pop(0)

0x892: Push("grabitel")
0x893: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x895: Stack[-2] = (int) 75
0x896: Return(); Pop(0)

0x897: Push("gatherer_wife")
0x898: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x899: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x89a: Stack[-2] = (int) 76
0x89b: Return(); Pop(0)

0x89c: Push("rat_prophet")
0x89d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x89e: IF (Stack[-1] == 0) GOTO 0x8a1; Pop(1)

0x89f: Stack[-2] = (int) 77
0x8a0: Return(); Pop(0)

0x8a1: Push("morlok")
0x8a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8a3: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x8a4: Stack[-2] = (int) 78
0x8a5: Return(); Pop(0)

0x8a6: Push("soldier")
0x8a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8a8: IF (Stack[-1] == 0) GOTO 0x8ab; Pop(1)

0x8a9: Stack[-2] = (int) 79
0x8aa: Return(); Pop(0)

0x8ab: Push("britva")
0x8ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8ad: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8ae: Stack[-2] = (int) 80
0x8af: Return(); Pop(0)

0x8b0: Push("kabaktchik")
0x8b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8b2: IF (Stack[-1] == 0) GOTO 0x8b5; Pop(1)

0x8b3: Stack[-2] = (int) 81
0x8b4: Return(); Pop(0)

0x8b5: Push("sanitar")
0x8b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8b7: IF (Stack[-1] == 0) GOTO 0x8ba; Pop(1)

0x8b8: Stack[-2] = (int) 82
0x8b9: Return(); Pop(0)

0x8ba: Push("salesman")
0x8bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8bc: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8bd: Stack[-2] = (int) 83
0x8be: Return(); Pop(0)

0x8bf: Push("ayyan")
0x8c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8c1: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8c2: Stack[-2] = (int) 84
0x8c3: Return(); Pop(0)

0x8c4: Push("petrbirdmask")
0x8c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8c6: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8c7: Stack[-2] = (int) 85
0x8c8: Return(); Pop(0)

0x8c9: Push("mogila")
0x8ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8cb: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8cc: Stack[-2] = (int) 86
0x8cd: Return(); Pop(0)

0x8ce: Push("klikusha")
0x8cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d0: IF (Stack[-1] == 0) GOTO 0x8d3; Pop(1)

0x8d1: Stack[-2] = (int) 87
0x8d2: Return(); Pop(0)

0x8d3: Stack[-2] = (int) -1
0x8d4: Return(); Pop(0)

0x8d5: PushEmpty()
0x8d6: Push((int) 18)
0x8d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8d8: IF (Stack[-1] == 0) GOTO 0x8db; Pop(1)

0x8d9: Stack[-2] = (bool) 1
0x8da: Return(); Pop(0)

0x8db: Push((int) 24)
0x8dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8dd: IF (Stack[-1] == 0) GOTO 0x8e0; Pop(1)

0x8de: Stack[-2] = (bool) 1
0x8df: Return(); Pop(0)

0x8e0: Push((int) 20)
0x8e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e2: IF (Stack[-1] == 0) GOTO 0x8e5; Pop(1)

0x8e3: Stack[-2] = (bool) 1
0x8e4: Return(); Pop(0)

0x8e5: Push((int) 14)
0x8e6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e7: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e8: Stack[-2] = (bool) 1
0x8e9: Return(); Pop(0)

0x8ea: Push((int) 10)
0x8eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8ec: IF (Stack[-1] == 0) GOTO 0x8ef; Pop(1)

0x8ed: Stack[-2] = (bool) 1
0x8ee: Return(); Pop(0)

0x8ef: Push((int) 17)
0x8f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8f1: IF (Stack[-1] == 0) GOTO 0x8f4; Pop(1)

0x8f2: Stack[-2] = (bool) 1
0x8f3: Return(); Pop(0)

0x8f4: Push((int) 8)
0x8f5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8f6: IF (Stack[-1] == 0) GOTO 0x8f9; Pop(1)

0x8f7: Stack[-2] = (bool) 1
0x8f8: Return(); Pop(0)

0x8f9: Stack[-2] = (bool) 0
0x8fa: Return(); Pop(0)

0x8fb: PushEmpty()
0x8fc: Push((int) 6)
0x8fd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8fe: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x8ff: Stack[-2] = (bool) 1
0x900: Return(); Pop(0)

0x901: Push((int) 26)
0x902: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x903: IF (Stack[-1] == 0) GOTO 0x906; Pop(1)

0x904: Stack[-2] = (bool) 1
0x905: Return(); Pop(0)

0x906: Push((int) 2)
0x907: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x908: IF (Stack[-1] == 0) GOTO 0x90b; Pop(1)

0x909: Stack[-2] = (bool) 1
0x90a: Return(); Pop(0)

0x90b: Push((int) 22)
0x90c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x90d: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x90e: Stack[-2] = (bool) 1
0x90f: Return(); Pop(0)

0x910: Push((int) 15)
0x911: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x912: IF (Stack[-1] == 0) GOTO 0x915; Pop(1)

0x913: Stack[-2] = (bool) 1
0x914: Return(); Pop(0)

0x915: Push((int) 5)
0x916: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x917: IF (Stack[-1] == 0) GOTO 0x91a; Pop(1)

0x918: Stack[-2] = (bool) 1
0x919: Return(); Pop(0)

0x91a: Push((int) 16)
0x91b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x91c: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x91d: Stack[-2] = (bool) 1
0x91e: Return(); Pop(0)

0x91f: Push((int) 19)
0x920: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x921: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x922: Stack[-2] = (bool) 1
0x923: Return(); Pop(0)

0x924: Stack[-2] = (bool) 0
0x925: Return(); Pop(0)

0x926: PushEmpty()
0x927: Push((int) 7)
0x928: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x929: IF (Stack[-1] == 0) GOTO 0x92c; Pop(1)

0x92a: Stack[-2] = (bool) 1
0x92b: Return(); Pop(0)

0x92c: Push((int) 23)
0x92d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x92e: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x92f: Stack[-2] = (bool) 1
0x930: Return(); Pop(0)

0x931: Push((int) 21)
0x932: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x933: IF (Stack[-1] == 0) GOTO 0x936; Pop(1)

0x934: Stack[-2] = (bool) 1
0x935: Return(); Pop(0)

0x936: Push((int) 9)
0x937: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x938: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x939: Stack[-2] = (bool) 1
0x93a: Return(); Pop(0)

0x93b: Push((int) 3)
0x93c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x93d: IF (Stack[-1] == 0) GOTO 0x940; Pop(1)

0x93e: Stack[-2] = (bool) 1
0x93f: Return(); Pop(0)

0x940: Push((int) 1)
0x941: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x942: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x943: Stack[-2] = (bool) 1
0x944: Return(); Pop(0)

0x945: Push((int) 11)
0x946: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x947: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x948: Stack[-2] = (bool) 1
0x949: Return(); Pop(0)

0x94a: Push((int) 13)
0x94b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x94c: IF (Stack[-1] == 0) GOTO 0x94f; Pop(1)

0x94d: Stack[-2] = (bool) 1
0x94e: Return(); Pop(0)

0x94f: Push((int) 25)
0x950: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x951: IF (Stack[-1] == 0) GOTO 0x954; Pop(1)

0x952: Stack[-2] = (bool) 1
0x953: Return(); Pop(0)

0x954: Stack[-2] = (bool) 0
0x955: Return(); Pop(0)

0x956: PushEmpty(int, int)
0x957: Push("vol_")
0x958: Pop(1); Push(Stack[-1] + Stack[-4]);
0x959: @ GetVariable(Stack[-1], Stack[-2])
0x95a: Pop(1)
0x95b: Push((int) 32)
0x95c: Pop(1); Push(Stack[-2] & Stack[-1]);
0x95d: Push((int) 0)
0x95e: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x95f: Return(); Pop(2)

0x960: PushEmpty(int, int)
0x961: Push("vol_")
0x962: Pop(1); Push(Stack[-1] + Stack[-4]);
0x963: @ GetVariable(Stack[-1], Stack[-2])
0x964: Pop(1)
0x965: Push((int) 4)
0x966: Pop(1); Push(Stack[-2] & Stack[-1]);
0x967: Push((int) 0)
0x968: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x969: Return(); Pop(2)

0x96a: PushEmpty(int, int)
0x96b: Push("vol_")
0x96c: Pop(1); Push(Stack[-1] + Stack[-4]);
0x96d: @ GetVariable(Stack[-1], Stack[-2])
0x96e: Pop(1)
0x96f: Push((int) 16)
0x970: Pop(1); Push(Stack[-2] & Stack[-1]);
0x971: Push((int) 0)
0x972: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x973: Return(); Pop(2)

0x974: Stack[-1] = (int) 515571
0x975: Return(); Pop(0)

0x976: Stack[-1] = (int) 504029
0x977: Return(); Pop(0)

0x978: Stack[-1] = "ui/NPC_bmask.png"
0x979: Return(); Pop(0)

0x97a: Stack[-1] = "ui/NPC_bmask_b.png"
0x97b: Return(); Pop(0)

0x97c: Stack[-1] = (bool) 0
0x97d: Return(); Pop(0)

