GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Isee
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Threat
	cleanup
	restore
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	ood7AglajaPetr1
	quest_d7_03
	remove_maria
	completed
	samopal is given
	Samopal
	whitevaccine is given
	white_vaccine
	feromicin is given
	feromicin
	neomicin is given
	neomicin
	samopal ammo5 is given
	samopal_ammo
	d7q03
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Aglaja.png
	ui/NPC_Aglaja_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x212
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc8 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x216 Vars = (string)
		EVENT_6 Op = 0x22a Vars = ()
		EVENT_5 Op = 0x237 Vars = ()
		EVENT_7 Op = 0x280 Vars = (int)
		EVENT_45 Op = 0x2c2 Vars = (bool)
		EVENT_0 Op = 0x2ce Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x357

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x596

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x594

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x598

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x59a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x583

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
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x46d

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x3ae

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x39c

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x529

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x535

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[-1] = (bool) 1
0x64: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x65: PushEmpty(object, object)
0x66: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68: Call2 0x4db

0x69: Pop(2)
0x6a: PushEmpty(object, object)
0x6b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6d: Call2 0x4e1

0x6e: Pop(2)
0x6f: PushEmpty(string)
0x70: Stack[-1] = "Isee"
0x71: Call2 0xb2

0x72: Pop(1)
0x73: Push((int) 533268)
0x74: @@ SetMessage(Stack[-1])
0x75: Pop(1)
0x76: @@ ClearReplies()
0x77: Pop(0)
0x78: Push((int) 534543)
0x79: Push((int) 36176)
0x7a: Push((int) 36175)
0x7b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c: Pop(3)
0x7d: GOTO 0x94

0x7e: PushEmpty(string)
0x7f: Stack[-1] = "Neutral"
0x80: Call2 0xb2

0x81: Pop(1)
0x82: Push((int) 533273)
0x83: @@ SetMessage(Stack[-1])
0x84: Pop(1)
0x85: @@ ClearReplies()
0x86: Pop(0)
0x87: Push((int) 533274)
0x88: Push((int) -1)
0x89: Push((int) 34788)
0x8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b: Pop(3)
0x8c: Push((int) 534553)
0x8d: Push((int) -1)
0x8e: Push((int) 36185)
0x8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90: Pop(3)
0x91: GOTO 0x94

0x92: Return(); Pop(0)

0x93: GOTO 0x55

0x94: PushEmpty(bool)
0x95: Call2 0x59c

0x96: Pop(0)
0x97: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0x98: @ lshWaitForAnimEnd()
0x99: Pop(0)
0x9a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: GOTO 0xa2

0x9d: PushEmpty(string)
0x9e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9f: Call2 0x438

0xa0: Pop(1)
0xa1: GOTO 0x98

0xa2: GOTO 0xb1

0xa3: Push("all")
0xa4: Push("idle")
0xa5: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: @ WaitForAnimEnd()
0xa8: Pop(0)
0xa9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: GOTO 0xb1

0xac: Push("all")
0xad: Push("idle")
0xae: @ PlayAnimation(Stack[-2], Stack[-1])
0xaf: Pop(2)
0xb0: GOTO 0xa7

0xb1: Return(); Pop(0)

0xb2: PushEmpty()
0xb3: PushEmpty(bool)
0xb4: Call2 0x59c

0xb5: Pop(0)
0xb6: Pop(1); Push((bool) Stack[-1] == 0)
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Return(); Pop(0)

0xb9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: Return(); Pop(0)

0xbc: PushEmpty(string, bool)
0xbd: Stack[-2] = Stack[-3]
0xbe: Push("")
0xbf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc1: Stack[-1] = (bool) 0
0xc2: GOTO 0xc4

0xc3: Stack[-1] = (bool) 1
0xc4: Call2 0x448

0xc5: Pop(2)
0xc6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc7: Return(); Pop(0)

0xc8: PushEmpty()
0xc9: Push((int) 1)
0xca: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0xcb: PushEmpty()
0xcc: Call2 0x466

0xcd: Pop(0)
0xce: Push((int) 34783)
0xcf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call2 0x4f2

0xd5: Pop(2)
0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x51e

0xda: Pop(2)
0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call2 0x4e8

0xdf: Pop(2)
0xe0: Push((int) 34784)
0xe1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xe3: PushEmpty(object, object)
0xe4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6: Call2 0x4e8

0xe7: Pop(2)
0xe8: PushEmpty(object, object)
0xe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb: Call2 0x4fd

0xec: Pop(2)
0xed: Push((int) 34785)
0xee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xef: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0xf0: PushEmpty(object, object)
0xf1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf3: Call2 0x4e8

0xf4: Pop(2)
0xf5: PushEmpty(object, object)
0xf6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf8: Call2 0x508

0xf9: Pop(2)
0xfa: PushEmpty(object, object)
0xfb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfd: Call2 0x513

0xfe: Pop(2)
0xff: PushEmpty(object, object)
0x100: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x101: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x102: Call2 0x513

0x103: Pop(2)
0x104: Push((int) 34786)
0x105: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x107: PushEmpty(object, object)
0x108: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x109: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10a: Call2 0x4e8

0x10b: Pop(2)
0x10c: Push((int) 34782)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x10f: PushEmpty(bool)
0x110: Stack[-1] = (bool) 0
0x111: PushEmpty(bool, object)
0x112: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x113: Call2 0x529

0x114: Pop(1)
0x115: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x116: PushEmpty(bool, object)
0x117: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x118: Call2 0x535

0x119: Pop(1)
0x11a: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11b: Stack[-1] = (bool) 1
0x11c: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x11d: PushEmpty(object, object)
0x11e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x120: Call2 0x4db

0x121: Pop(2)
0x122: PushEmpty(object, object)
0x123: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x124: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x125: Call2 0x4e1

0x126: Pop(2)
0x127: PushEmpty(string)
0x128: Stack[-1] = "Isee"
0x129: Call2 0xb2

0x12a: Pop(1)
0x12b: Push((int) 533268)
0x12c: @@ SetMessage(Stack[-1])
0x12d: Pop(1)
0x12e: @@ ClearReplies()
0x12f: Pop(0)
0x130: Push((int) 534543)
0x131: Push((int) 36176)
0x132: Push((int) 36175)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Neutral"
0x138: Call2 0xb2

0x139: Pop(1)
0x13a: Push((int) 533273)
0x13b: @@ SetMessage(Stack[-1])
0x13c: Pop(1)
0x13d: @@ ClearReplies()
0x13e: Pop(0)
0x13f: Push((int) 533274)
0x140: Push((int) -1)
0x141: Push((int) 34788)
0x142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(3)
0x144: Push((int) 534553)
0x145: Push((int) -1)
0x146: Push((int) 36185)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Return(); Pop(0)

0x14a: Push((int) 36176)
0x14b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14c: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0x14d: PushEmpty(string)
0x14e: Stack[-1] = "Isee"
0x14f: Call2 0xb2

0x150: Pop(1)
0x151: Push((int) 534544)
0x152: @@ SetMessage(Stack[-1])
0x153: Pop(1)
0x154: @@ ClearReplies()
0x155: Pop(0)
0x156: Push((int) 534545)
0x157: Push((int) 36178)
0x158: Push((int) 36177)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: Return(); Pop(0)

0x15c: Push((int) 36178)
0x15d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15e: IF (Stack[-1] == 0) GOTO 0x173; Pop(1)

0x15f: PushEmpty(string)
0x160: Stack[-1] = "Isee"
0x161: Call2 0xb2

0x162: Pop(1)
0x163: Push((int) 534546)
0x164: @@ SetMessage(Stack[-1])
0x165: Pop(1)
0x166: @@ ClearReplies()
0x167: Pop(0)
0x168: Push((int) 534547)
0x169: Push((int) 36180)
0x16a: Push((int) 36179)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Push((int) 535169)
0x16e: Push((int) 36835)
0x16f: Push((int) 36834)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: Return(); Pop(0)

0x173: Push((int) 36835)
0x174: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x176: PushEmpty(string)
0x177: Stack[-1] = "Neutral"
0x178: Call2 0xb2

0x179: Pop(1)
0x17a: Push((int) 535170)
0x17b: @@ SetMessage(Stack[-1])
0x17c: Pop(1)
0x17d: @@ ClearReplies()
0x17e: Pop(0)
0x17f: Push((int) 535171)
0x180: Push((int) 36180)
0x181: Push((int) 36836)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: Push((int) 36180)
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x197; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Isee"
0x18a: Call2 0xb2

0x18b: Pop(1)
0x18c: Push((int) 534548)
0x18d: @@ SetMessage(Stack[-1])
0x18e: Pop(1)
0x18f: @@ ClearReplies()
0x190: Pop(0)
0x191: Push((int) 534549)
0x192: Push((int) 36182)
0x193: Push((int) 36181)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Return(); Pop(0)

0x197: Push((int) 36182)
0x198: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x19a: PushEmpty(string)
0x19b: Stack[-1] = "Threat"
0x19c: Call2 0xb2

0x19d: Pop(1)
0x19e: Push((int) 534550)
0x19f: @@ SetMessage(Stack[-1])
0x1a0: Pop(1)
0x1a1: @@ ClearReplies()
0x1a2: Pop(0)
0x1a3: Push((int) 534551)
0x1a4: Push((int) 36841)
0x1a5: Push((int) 36183)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Push((int) 535172)
0x1a9: Push((int) 36839)
0x1aa: Push((int) 36838)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: Push((int) 36839)
0x1af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b1: PushEmpty(string)
0x1b2: Stack[-1] = "Neutral"
0x1b3: Call2 0xb2

0x1b4: Pop(1)
0x1b5: Push((int) 535173)
0x1b6: @@ SetMessage(Stack[-1])
0x1b7: Pop(1)
0x1b8: @@ ClearReplies()
0x1b9: Pop(0)
0x1ba: Push((int) 535174)
0x1bb: Push((int) 36184)
0x1bc: Push((int) 36840)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: Push((int) 36841)
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = "Threat"
0x1c5: Call2 0xb2

0x1c6: Pop(1)
0x1c7: Push((int) 535175)
0x1c8: @@ SetMessage(Stack[-1])
0x1c9: Pop(1)
0x1ca: @@ ClearReplies()
0x1cb: Pop(0)
0x1cc: Push((int) 535176)
0x1cd: Push((int) 36184)
0x1ce: Push((int) 36842)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: PushEmpty(bool, object)
0x1d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d3: Call2 0x541

0x1d4: Pop(1)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d6: Push((int) 535177)
0x1d7: Push((int) -1)
0x1d8: Push((int) 36843)
0x1d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(3)
0x1db: Return(); Pop(0)

0x1dc: Push((int) 36184)
0x1dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1df: PushEmpty(string)
0x1e0: Stack[-1] = "Neutral"
0x1e1: Call2 0xb2

0x1e2: Pop(1)
0x1e3: Push((int) 534552)
0x1e4: @@ SetMessage(Stack[-1])
0x1e5: Pop(1)
0x1e6: @@ ClearReplies()
0x1e7: Pop(0)
0x1e8: Push((int) 533269)
0x1e9: Push((int) -1)
0x1ea: Push((int) 34783)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Push((int) 533270)
0x1ee: Push((int) -1)
0x1ef: Push((int) 34784)
0x1f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f1: Pop(3)
0x1f2: Push((int) 533271)
0x1f3: Push((int) -1)
0x1f4: Push((int) 34785)
0x1f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f6: Pop(3)
0x1f7: Push((int) 533272)
0x1f8: Push((int) -1)
0x1f9: Push((int) 34786)
0x1fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fb: Pop(3)
0x1fc: Return(); Pop(0)

0x1fd: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1fe: PushEmpty(bool)
0x1ff: Call2 0x59c

0x200: Pop(0)
0x201: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x202: @ lshStopAnimation()
0x203: Pop(0)
0x204: GOTO 0x207

0x205: @ StopAnimation()
0x206: Pop(0)
0x207: Return(); Pop(0)

0x208: GOTO 0xc9

0x209: Return(); Pop(0)

0x20a: PushEmpty()
0x20b: PushEmpty(int, object)
0x20c: Stack[-1] = Stack[-3]
0x20d: Push(-2, 1); TaskCall(0)
0x20e: Call2 0x0

0x20f: Pop(-2, 1); TaskReturn
0x210: Pop(2)
0x211: Return(); Pop(0)

0x212: PushEmpty()
0x213: Call2 0x23b

0x214: Pop(0)
0x215: Return(); Pop(0)

0x216: PushEmpty(bool, bool)
0x217: Push("cleanup")
0x218: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x219: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x21a: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x21b: @ IsLoaded(Stack[-1])
0x21c: Pop(0)
0x21d: Pop(0); Push((bool) Stack[-1] == 0)
0x21e: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x21f: PushEmpty(object)
0x220: Call2 0x46d

0x221: Pop(0)
0x222: @ RemoveActor(Stack[-1])
0x223: Pop(1)
0x224: GOTO 0x229

0x225: Push("restore")
0x226: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x229: Return(); Pop(2)

0x22a: Push( Stack[1 + Tasks[-1].StackPointer] )
0x22b: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22c: PushEmpty(object)
0x22d: Call2 0x46d

0x22e: Pop(0)
0x22f: @ RemoveActor(Stack[-1])
0x230: Pop(1)
0x231: @ Hold()
0x232: Pop(0)
0x233: PushEmpty()
0x234: Call2 0x2a6

0x235: Pop(0)
0x236: Return(); Pop(0)

0x237: PushEmpty()
0x238: Call2 0x2b5

0x239: Pop(0)
0x23a: Return(); Pop(0)

0x23b: PushEmpty(bool)
0x23c: Call2 0x352

0x23d: Pop(0)
0x23e: Pop(1); Push((bool) Stack[-1] == 0)
0x23f: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x240: @ Hold()
0x241: Pop(0)
0x242: @ GetDirection(Stack[-0])
0x243: Pop(0)
0x244: PushEmpty()
0x245: Call2 0x2eb

0x246: Pop(0)
0x247: GOTO 0x244

0x248: Return(); Pop(0)

0x249: PushEmpty(object, object)
0x24a: Push("player")
0x24b: @ FindActor(Stack[-2], Stack[-1])
0x24c: Pop(1)
0x24d: Pop(0); Push((bool) Stack[-1] == 0)
0x24e: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24f: Stack[-3] = (bool) 0
0x250: Return(); Pop(2)

0x251: PushEmpty(bool, object)
0x252: Stack[-1] = Stack[-3]
0x253: Call2 0x349

0x254: Stack[-5] = Stack[-2]
0x255: Pop(2)
0x256: Return(); Pop(2)

0x257: Stack[-1] = 0
0x258: Push(CvectorIndex(Stack[-0], 0))
0x259: Push(CvectorIndex(Stack[-0], 2))
0x25a: @ RotateAsync(Stack[-2], Stack[-1])
0x25b: Pop(2)
0x25c: Return(); Pop(0)

0x25d: PushEmpty(object, bool, object, bool)
0x25e: Push("player")
0x25f: @ FindActor(Stack[-3], Stack[-1])
0x260: Pop(1)
0x261: Pop(0); Push((bool) Stack[-2] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x263: Stack[-5] = (bool) 0
0x264: Return(); Pop(4)

0x265: PushEmpty(float, object)
0x266: Stack[-1] = Stack[-4]
0x267: Call2 0x337

0x268: Pop(1)
0x269: Push((float)90000.0)
0x26a: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26c: Stack[-5] = (bool) 0
0x26d: Return(); Pop(4)

0x26e: @ CanSee(Stack[-1], Stack[-2])
0x26f: Pop(0)
0x270: Stack[-5] = Stack[-1]
0x271: Return(); Pop(4)

0x272: Stack[-2] = 0
0x273: PushEmpty(float, float)
0x274: Push((int) 8)
0x275: Push((int) 16)
0x276: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x277: Pop(2)
0x278: Push((int) 10)
0x279: @ SetTimer(Stack[-1], Stack[-2])
0x27a: Pop(1)
0x27b: Return(); Pop(2)

0x27c: Push((int) 10)
0x27d: @ KillTimer(Stack[-1])
0x27e: Pop(1)
0x27f: Return(); Pop(0)

0x280: PushEmpty()
0x281: Push((int) 10)
0x282: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x283: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x284: PushEmpty()
0x285: Call2 0x27c

0x286: Pop(0)
0x287: PushEmpty(bool)
0x288: Stack[-1] = (bool) 0
0x289: PushEmpty(bool)
0x28a: Call2 0x352

0x28b: Pop(0)
0x28c: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x28d: PushEmpty(bool)
0x28e: Call2 0x25d

0x28f: Pop(0)
0x290: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x291: Stack[-1] = (bool) 1
0x292: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x293: PushEmpty(bool)
0x294: Call2 0x249

0x295: Pop(0)
0x296: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x297: PushEmpty(bool, object)
0x298: PushEmpty(object)
0x299: Call2 0x46d

0x29a: Stack[-2] = Stack[-1]
0x29b: Pop(1)
0x29c: Call2 0x3e8

0x29d: Pop(2)
0x29e: GOTO 0x2a5

0x29f: PushEmpty()
0x2a0: Call2 0x258

0x2a1: Pop(0)
0x2a2: PushEmpty()
0x2a3: Call2 0x273

0x2a4: Pop(0)
0x2a5: Return(); Pop(0)

0x2a6: PushEmpty()
0x2a7: Call2 0x332

0x2a8: Pop(0)
0x2a9: PushEmpty()
0x2aa: Call2 0x27c

0x2ab: Pop(0)
0x2ac: @ lshStopSpeech()
0x2ad: Pop(0)
0x2ae: @ lshStopAnimation()
0x2af: Pop(0)
0x2b0: @ StopAsync()
0x2b1: Pop(0)
0x2b2: @ Hold()
0x2b3: Pop(0)
0x2b4: Return(); Pop(0)

0x2b5: @ StopGroup0()
0x2b6: Pop(0)
0x2b7: PushEmpty()
0x2b8: Call2 0x27c

0x2b9: Pop(0)
0x2ba: PushEmpty(string)
0x2bb: Stack[-1] = "Neutral"
0x2bc: Call2 0x438

0x2bd: Pop(1)
0x2be: PushEmpty()
0x2bf: Call2 0x273

0x2c0: Pop(0)
0x2c1: Return(); Pop(0)

0x2c2: PushEmpty()
0x2c3: Push(Stack[-1])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c5: PushEmpty()
0x2c6: Call2 0x273

0x2c7: Pop(0)
0x2c8: GOTO 0x2cd

0x2c9: PushEmpty(string)
0x2ca: Stack[-1] = "Neutral"
0x2cb: Call2 0x438

0x2cc: Pop(1)
0x2cd: Return(); Pop(0)

0x2ce: PushEmpty(bool, bool)
0x2cf: @ IsOverrideActive(Stack[-1])
0x2d0: Pop(0)
0x2d1: Pop(0); Push((bool) Stack[-1] == 0)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2d3: EventDisable(0)
0x2d4: PushEmpty()
0x2d5: Call2 0x332

0x2d6: Pop(0)
0x2d7: PushEmpty(bool, object)
0x2d8: Stack[-1] = Stack[-5]
0x2d9: Call2 0x349

0x2da: Pop(2)
0x2db: EventEnable(0)
0x2dc: PushEmpty(object)
0x2dd: Stack[-1] = Stack[-4]
0x2de: Call2 0x20a

0x2df: Pop(1)
0x2e0: PushEmpty(string)
0x2e1: Stack[-1] = "Neutral"
0x2e2: Call2 0x438

0x2e3: Pop(1)
0x2e4: PushEmpty()
0x2e5: Call2 0x27c

0x2e6: Pop(0)
0x2e7: PushEmpty()
0x2e8: Call2 0x273

0x2e9: Pop(0)
0x2ea: Return(); Pop(2)

0x2eb: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x2ec: @ WaitForAnimEnd()
0x2ed: Pop(0)
0x2ee: PushEmpty(bool)
0x2ef: Call2 0x352

0x2f0: Pop(0)
0x2f1: Pop(1); Push((bool) Stack[-1] == 0)
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2f3: Return(); Pop(12)

0x2f4: PushEmpty(int)
0x2f5: Call2 0x4ca

0x2f6: Stack[-7] = Stack[-1]
0x2f7: Pop(1)
0x2f8: Stack[-5] = (int) 0
0x2f9: PushEmpty(bool)
0x2fa: Stack[-1] = (bool) 0
0x2fb: Push((int) 5)
0x2fc: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x2fd: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2fe: PushEmpty(bool)
0x2ff: Call2 0x352

0x300: Pop(0)
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: Stack[-1] = (bool) 1
0x303: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x304: Pop(0); Push((bool) Stack[-6] == 0)
0x305: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x306: Push((int) 3)
0x307: @ Sleep(Stack[-1], Stack[-5])
0x308: Pop(1)
0x309: Pop(0); Push((bool) Stack[-4] == 0)
0x30a: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30b: GOTO 0x32d

0x30c: GOTO 0x322

0x30d: @ irand(Stack[-3], Stack[-6])
0x30e: Pop(0)
0x30f: Push((int) 5)
0x310: @ irand(Stack[-3], Stack[-1])
0x311: Pop(1)
0x312: Push((int) 0)
0x313: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x314: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x315: Stack[-3] = (int) 0
0x316: Push("all")
0x317: PushEmpty(string, int)
0x318: Stack[-1] = Stack[-6]
0x319: Call2 0x4c3

0x31a: Pop(1)
0x31b: @ PlayAnimation(Stack[-2], Stack[-1])
0x31c: Pop(2)
0x31d: @ WaitForAnimEnd(Stack[-1])
0x31e: Pop(0)
0x31f: Pop(0); Push((bool) Stack[-1] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x321: GOTO 0x32d

0x322: PushEmpty(bool)
0x323: Call2 0x330

0x324: Pop(0)
0x325: Pop(1); Push((bool) Stack[-1] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x327: GOTO 0x32d

0x328: @ ResetAAS()
0x329: Pop(0)
0x32a: Push((int) 1)
0x32b: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x32c: GOTO 0x2f9

0x32d: @ ResetAAS()
0x32e: Pop(0)
0x32f: Return(); Pop(12)

0x330: Stack[-1] = (bool) 1
0x331: Return(); Pop(0)

0x332: @ StopAnimation()
0x333: Pop(0)
0x334: @ StopGroup0()
0x335: Pop(0)
0x336: Return(); Pop(0)

0x337: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x338: @ GetPosition(Stack[-3])
0x339: Pop(0)
0x33a: @@ GetPosition(Stack[-2])
0x33b: Pop(0)
0x33c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x33d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x33e: Return(); Pop(6)

0x33f: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x340: @ GetPosition(Stack[-3])
0x341: Pop(0)
0x342: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x343: Push(CvectorIndex(Stack[-2], 0))
0x344: Push(CvectorIndex(Stack[-3], 2))
0x345: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x346: Pop(2)
0x347: Stack[-8] = Stack[-1]
0x348: Return(); Pop(6)

0x349: PushEmpty(cvector, cvector)
0x34a: @@ GetPosition(Stack[-1])
0x34b: Pop(0)
0x34c: PushEmpty(bool, cvector)
0x34d: Stack[-1] = Stack[-3]
0x34e: Call2 0x33f

0x34f: Stack[-6] = Stack[-2]
0x350: Pop(2)
0x351: Return(); Pop(2)

0x352: PushEmpty(bool, bool)
0x353: @ IsLoaded(Stack[-1])
0x354: Pop(0)
0x355: Stack[-3] = Stack[-1]
0x356: Return(); Pop(2)

0x357: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x358: @@ GetPosition(Stack[-8])
0x359: Pop(0)
0x35a: @@ GetEyesHeight(Stack[-9])
0x35b: Pop(0)
0x35c: Push(CvectorIndex(Stack[-8], 1))
0x35d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x35e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x35f: @ GetPosition(Stack[-7])
0x360: Pop(0)
0x361: @ GetEyesHeight(Stack[-9])
0x362: Pop(0)
0x363: Push(CvectorIndex(Stack[-7], 1))
0x364: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x365: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x366: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x367: Push(CvectorIndex(Stack[-6], 1))
0x368: Stack[-1] = (int) 0
0x369: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x36a: Pop(0); Push(Stack[-6] | Stack[-6]);
0x36b: Pop(1); Push(Sqrt(Stack[-1]))
0x36c: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x36d: Stack[-5] = -Stack[-6]; Pop(0);
0x36e: Pop(0); Push(Stack[-6] * Stack[-19]);
0x36f: PushEmpty(cvector, cvector)
0x370: Push(CVector(0.0, 1.0, 0.0))
0x371: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x372: Call2 0x473

0x373: Pop(1)
0x374: Push((int) 25)
0x375: Pop(2); Push(Stack[-2] * Stack[-1]);
0x376: Pop(2); Push(Stack[-2] + Stack[-1]);
0x377: Push(CVector(0.0, 10.0, 0.0))
0x378: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x379: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x37a: @ IsOverrideActive(Stack[-2])
0x37b: Pop(0)
0x37c: Push(Stack[-2])
0x37d: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37e: Stack[-21] = (bool) 0
0x37f: Return(); Pop(18)

0x380: @ StopWorld()
0x381: Pop(0)
0x382: Push((bool) 1)
0x383: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x384: Pop(1)
0x385: Push(CvectorIndex(Stack[-4], 0))
0x386: Push(CvectorIndex(Stack[-5], 2))
0x387: @ Rotate(Stack[-2], Stack[-1])
0x388: Pop(2)
0x389: PushEmpty(bool)
0x38a: Call2 0x59c

0x38b: Pop(0)
0x38c: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38d: GOTO 0x396

0x38e: Push("head")
0x38f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x390: Pop(1)
0x391: Push(Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x393: Push("head")
0x394: @ LookAsyncCamera(Stack[-1])
0x395: Pop(1)
0x396: @ CameraWaitForPlayFinish()
0x397: Pop(0)
0x398: @ ResumeWorld()
0x399: Pop(0)
0x39a: Stack[-21] = (bool) 1
0x39b: Return(); Pop(18)

0x39c: PushEmpty(bool, bool)
0x39d: Push((bool) 1)
0x39e: @ CameraSwitchToNormal(Stack[-1])
0x39f: Pop(1)
0x3a0: PushEmpty(bool)
0x3a1: Call2 0x59c

0x3a2: Pop(0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a4: GOTO 0x3ad

0x3a5: Push("head")
0x3a6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3a7: Pop(1)
0x3a8: Push(Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3aa: Push("head")
0x3ab: @ UnlookAsync(Stack[-1])
0x3ac: Pop(1)
0x3ad: Return(); Pop(2)

0x3ae: PushEmpty(int, int, int, int)
0x3af: Push("voice_common")
0x3b0: @ GetVariable(Stack[-1], Stack[-3])
0x3b1: Pop(1)
0x3b2: Push(Stack[-2])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3b4: PushEmpty(bool, object)
0x3b5: Stack[-1] = Stack[-7]
0x3b6: Call2 0x3e8

0x3b7: Pop(1)
0x3b8: Pop(1); Push((bool) Stack[-1] == 0)
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3ba: PushEmpty(bool, object)
0x3bb: Stack[-1] = Stack[-7]
0x3bc: Call2 0x40d

0x3bd: Pop(1)
0x3be: Pop(1); Push((bool) Stack[-1] == 0)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c0: Stack[-6] = (bool) 0
0x3c1: Return(); Pop(4)

0x3c2: Push((int) 2)
0x3c3: @ irand(Stack[-2], Stack[-1])
0x3c4: Pop(1)
0x3c5: Push(Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3c7: Push("voice_common")
0x3c8: Push((int) 1)
0x3c9: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3ca: Push((int) 3)
0x3cb: Pop(2); Push(Stack[-2] % Stack[-1]);
0x3cc: @ SetVariable(Stack[-2], Stack[-1])
0x3cd: Pop(2)
0x3ce: GOTO 0x3d3

0x3cf: Push("voice_common")
0x3d0: Push((int) 0)
0x3d1: @ SetVariable(Stack[-2], Stack[-1])
0x3d2: Pop(2)
0x3d3: GOTO 0x3e6

0x3d4: PushEmpty(bool, object)
0x3d5: Stack[-1] = Stack[-7]
0x3d6: Call2 0x40d

0x3d7: Pop(1)
0x3d8: Pop(1); Push((bool) Stack[-1] == 0)
0x3d9: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3da: PushEmpty(bool, object)
0x3db: Stack[-1] = Stack[-7]
0x3dc: Call2 0x3e8

0x3dd: Pop(1)
0x3de: Pop(1); Push((bool) Stack[-1] == 0)
0x3df: IF (Stack[-1] == 0) GOTO 0x3e2; Pop(1)

0x3e0: Stack[-6] = (bool) 0
0x3e1: Return(); Pop(4)

0x3e2: Push("voice_common")
0x3e3: Push((int) 1)
0x3e4: @ SetVariable(Stack[-2], Stack[-1])
0x3e5: Pop(2)
0x3e6: Stack[-6] = (bool) 1
0x3e7: Return(); Pop(4)

0x3e8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3e9: Stack[-5] = "c"
0x3ea: Stack[-4] = (int) 0
0x3eb: Push((int) 1)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3ed: Push((int) 1)
0x3ee: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3ef: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3f0: @@ HasProperty(Stack[-1], Stack[-4])
0x3f1: Pop(1)
0x3f2: Pop(0); Push((bool) Stack[-3] == 0)
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f4: GOTO 0x3f8

0x3f5: Push((int) 1)
0x3f6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3f7: GOTO 0x3eb

0x3f8: Pop(0); Push((bool) Stack[-4] == 0)
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: Stack[-12] = (bool) 0
0x3fb: Return(); Pop(10)

0x3fc: Stack[-2] = (int) 0
0x3fd: Push((int) 1)
0x3fe: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x400: @ irand(Stack[-2], Stack[-4])
0x401: Pop(0)
0x402: Push((int) 1)
0x403: Pop(1); Push(Stack[-3] + Stack[-1]);
0x404: Pop(1); Push(Stack[-6] + Stack[-1]);
0x405: @@ GetProperty(Stack[-1], Stack[-2])
0x406: Pop(1)
0x407: PushEmpty(bool, string)
0x408: Stack[-1] = Stack[-3]
0x409: Call2 0x457

0x40a: Stack[-14] = Stack[-2]
0x40b: Pop(2)
0x40c: Return(); Pop(10)

0x40d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x40e: Push("d")
0x40f: PushEmpty(int)
0x410: Call2 0x4ba

0x411: Pop(0)
0x412: Pop(2); Push(Stack[-2] + Stack[-1]);
0x413: Push("m")
0x414: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x415: Stack[-4] = (int) 0
0x416: Push((int) 1)
0x417: IF (Stack[-1] == 0) GOTO 0x423; Pop(1)

0x418: Push((int) 1)
0x419: Pop(1); Push(Stack[-5] + Stack[-1]);
0x41a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x41b: @@ HasProperty(Stack[-1], Stack[-4])
0x41c: Pop(1)
0x41d: Pop(0); Push((bool) Stack[-3] == 0)
0x41e: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41f: GOTO 0x423

0x420: Push((int) 1)
0x421: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x422: GOTO 0x416

0x423: Pop(0); Push((bool) Stack[-4] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x427; Pop(1)

0x425: Stack[-12] = (bool) 0
0x426: Return(); Pop(10)

0x427: Stack[-2] = (int) 0
0x428: Push((int) 1)
0x429: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x42a: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x42b: @ irand(Stack[-2], Stack[-4])
0x42c: Pop(0)
0x42d: Push((int) 1)
0x42e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x42f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x430: @@ GetProperty(Stack[-1], Stack[-2])
0x431: Pop(1)
0x432: PushEmpty(bool, string)
0x433: Stack[-1] = Stack[-3]
0x434: Call2 0x457

0x435: Stack[-14] = Stack[-2]
0x436: Pop(2)
0x437: Return(); Pop(10)

0x438: PushEmpty(bool, float, float, bool, float, float)
0x439: @ lshHasAnimation(Stack[-3], Stack[-7])
0x43a: Pop(0)
0x43b: Push(Stack[-3])
0x43c: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x43d: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x43e: Pop(0)
0x43f: Push((bool) 0)
0x440: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x441: Pop(1)
0x442: GOTO 0x447

0x443: Push("Can't find lsh animation : ")
0x444: Pop(1); Push(Stack[-1] + Stack[-8]);
0x445: @ Trace(Stack[-1])
0x446: Pop(1)
0x447: Return(); Pop(6)

0x448: PushEmpty(bool, float, float, bool, float, float)
0x449: @ lshHasAnimation(Stack[-3], Stack[-8])
0x44a: Pop(0)
0x44b: Push(Stack[-3])
0x44c: IF (Stack[-1] == 0) GOTO 0x452; Pop(1)

0x44d: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x44e: Pop(0)
0x44f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x450: Pop(0)
0x451: GOTO 0x456

0x452: Push("Can't find lsh animation : ")
0x453: Pop(1); Push(Stack[-1] + Stack[-9]);
0x454: @ Trace(Stack[-1])
0x455: Pop(1)
0x456: Return(); Pop(6)

0x457: PushEmpty(bool, bool)
0x458: PushEmpty(bool)
0x459: Call2 0x59c

0x45a: Pop(0)
0x45b: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x45c: @ lshHasSpeech(Stack[-1], Stack[-3])
0x45d: Pop(0)
0x45e: Push(Stack[-1])
0x45f: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x460: @ lshPlaySpeech(Stack[-3])
0x461: Pop(0)
0x462: Stack[-4] = (bool) 1
0x463: Return(); Pop(2)

0x464: Stack[-4] = (bool) 0
0x465: Return(); Pop(2)

0x466: PushEmpty(bool)
0x467: Call2 0x59c

0x468: Pop(0)
0x469: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x46a: @ lshStopSpeech()
0x46b: Pop(0)
0x46c: Return(); Pop(0)

0x46d: PushEmpty(object, object)
0x46e: @ self(Stack[-1])
0x46f: Pop(0)
0x470: Stack[-3] = Stack[-1]
0x471: Return(); Pop(2)

0x472: Stack[-1] = 0
0x473: PushEmpty(float, float)
0x474: Pop(0); Push(Stack[-3] | Stack[-3]);
0x475: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x476: Push((float)0.0)
0x477: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x478: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x479: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x47a: Return(); Pop(2)

0x47b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x47c: Return(); Pop(2)

0x47d: PushEmpty(int, int)
0x47e: @ GetVariable(Stack[-3], Stack[-1])
0x47f: Pop(0)
0x480: Stack[-4] = Stack[-1]
0x481: Return(); Pop(2)

0x482: PushEmpty(object, object)
0x483: @ CreateIntVector(Stack[-1])
0x484: Pop(0)
0x485: @@ add(Stack[-4])
0x486: Pop(0)
0x487: @@ add(Stack[-3])
0x488: Pop(0)
0x489: Push((int) 3)
0x48a: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x48b: Pop(1)
0x48c: Return(); Pop(2)

0x48d: Stack[-1] = 0
0x48e: PushEmpty(int, int, bool, int, int, bool)
0x48f: @@ GetItemID(Stack[-3])
0x490: Pop(0)
0x491: Push("Category")
0x492: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x493: Pop(1)
0x494: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x495: Pop(0)
0x496: Pop(0); Push((bool) Stack[-1] == 0)
0x497: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x498: @@ DropItems(Stack[-8], Stack[-7])
0x499: Pop(0)
0x49a: GOTO 0x4a0

0x49b: PushEmpty(int, int)
0x49c: Stack[-2] = Stack[-5]
0x49d: Stack[-1] = Stack[-9]
0x49e: Call2 0x482

0x49f: Pop(2)
0x4a0: Return(); Pop(6)

0x4a1: PushEmpty(object, object)
0x4a2: @ CreateInvItem(Stack[-1])
0x4a3: Pop(0)
0x4a4: @@ SetItemName(Stack[-4])
0x4a5: Pop(0)
0x4a6: PushEmpty(object, object, int)
0x4a7: Stack[-3] = Stack[-8]
0x4a8: Stack[-2] = Stack[-4]
0x4a9: Stack[-1] = Stack[-6]
0x4aa: Call2 0x48e

0x4ab: Pop(3)
0x4ac: Return(); Pop(2)

0x4ad: Stack[-1] = 0
0x4ae: PushEmpty(object, object)
0x4af: @ FindActor(Stack[-1], Stack[-4])
0x4b0: Pop(0)
0x4b1: Pop(0); Push((bool) Stack[-1] == 0)
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b3: Stack[-5] = (bool) 0
0x4b4: Return(); Pop(2)

0x4b5: @ Trigger(Stack[-1], Stack[-3])
0x4b6: Pop(0)
0x4b7: Stack[-5] = (bool) 1
0x4b8: Return(); Pop(2)

0x4b9: Stack[-1] = 0
0x4ba: PushEmpty(float, float)
0x4bb: @ GetGameTime(Stack[-1])
0x4bc: Pop(0)
0x4bd: Push((int) 1)
0x4be: PushEmpty(int)
0x4bf: Push((int) 24)
0x4c0: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x4c1: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x4c2: Return(); Pop(2)

0x4c3: PushEmpty(string, string)
0x4c4: Stack[-1] = "idle"
0x4c5: Push(Stack[-3])
0x4c6: IF (Stack[-1] == 0) GOTO 0x4c8; Pop(1)

0x4c7: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x4c8: Stack[-4] = Stack[-1]
0x4c9: Return(); Pop(2)

0x4ca: PushEmpty(int, bool, int, bool)
0x4cb: Stack[-2] = (int) 0
0x4cc: Push("all")
0x4cd: PushEmpty(string, int)
0x4ce: Stack[-1] = Stack[-5]
0x4cf: Call2 0x4c3

0x4d0: Pop(1)
0x4d1: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4d2: Pop(2)
0x4d3: Pop(0); Push((bool) Stack[-1] == 0)
0x4d4: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d5: GOTO 0x4d9

0x4d6: Push((int) 1)
0x4d7: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4d8: GOTO 0x4cc

0x4d9: Stack[-5] = Stack[-2]
0x4da: Return(); Pop(4)

0x4db: PushEmpty()
0x4dc: Push("ood7AglajaPetr1")
0x4dd: Push((int) 1)
0x4de: @ SetVariable(Stack[-2], Stack[-1])
0x4df: Pop(2)
0x4e0: Return(); Pop(0)

0x4e1: PushEmpty()
0x4e2: PushEmpty(bool, string, string)
0x4e3: Stack[-2] = "quest_d7_03"
0x4e4: Stack[-1] = "remove_maria"
0x4e5: Call2 0x4ae

0x4e6: Pop(3)
0x4e7: Return(); Pop(0)

0x4e8: PushEmpty()
0x4e9: PushEmpty()
0x4ea: Call2 0x54d

0x4eb: Pop(0)
0x4ec: PushEmpty(bool, string, string)
0x4ed: Stack[-2] = "quest_d7_03"
0x4ee: Stack[-1] = "completed"
0x4ef: Call2 0x4ae

0x4f0: Pop(3)
0x4f1: Return(); Pop(0)

0x4f2: PushEmpty()
0x4f3: Push("samopal is given")
0x4f4: @ Trace(Stack[-1])
0x4f5: Pop(1)
0x4f6: PushEmpty(object, string, int)
0x4f7: Stack[-3] = Stack[-5]
0x4f8: Stack[-2] = "Samopal"
0x4f9: Stack[-1] = (int) 1
0x4fa: Call2 0x4a1

0x4fb: Pop(3)
0x4fc: Return(); Pop(0)

0x4fd: PushEmpty()
0x4fe: Push("whitevaccine is given")
0x4ff: @ Trace(Stack[-1])
0x500: Pop(1)
0x501: PushEmpty(object, string, int)
0x502: Stack[-3] = Stack[-5]
0x503: Stack[-2] = "white_vaccine"
0x504: Stack[-1] = (int) 1
0x505: Call2 0x4a1

0x506: Pop(3)
0x507: Return(); Pop(0)

0x508: PushEmpty()
0x509: Push("feromicin is given")
0x50a: @ Trace(Stack[-1])
0x50b: Pop(1)
0x50c: PushEmpty(object, string, int)
0x50d: Stack[-3] = Stack[-5]
0x50e: Stack[-2] = "feromicin"
0x50f: Stack[-1] = (int) 1
0x510: Call2 0x4a1

0x511: Pop(3)
0x512: Return(); Pop(0)

0x513: PushEmpty()
0x514: Push("neomicin is given")
0x515: @ Trace(Stack[-1])
0x516: Pop(1)
0x517: PushEmpty(object, string, int)
0x518: Stack[-3] = Stack[-5]
0x519: Stack[-2] = "neomicin"
0x51a: Stack[-1] = (int) 1
0x51b: Call2 0x4a1

0x51c: Pop(3)
0x51d: Return(); Pop(0)

0x51e: PushEmpty()
0x51f: Push("samopal ammo5 is given")
0x520: @ Trace(Stack[-1])
0x521: Pop(1)
0x522: PushEmpty(object, string, int)
0x523: Stack[-3] = Stack[-5]
0x524: Stack[-2] = "samopal_ammo"
0x525: Stack[-1] = (int) 5
0x526: Call2 0x4a1

0x527: Pop(3)
0x528: Return(); Pop(0)

0x529: PushEmpty()
0x52a: PushEmpty(int, string)
0x52b: Stack[-1] = "ood7AglajaPetr1"
0x52c: Call2 0x47d

0x52d: Pop(1)
0x52e: Push((int) 0)
0x52f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x530: IF (Stack[-1] == 0) GOTO 0x533; Pop(1)

0x531: Stack[-2] = (bool) 1
0x532: Return(); Pop(0)

0x533: Stack[-2] = (bool) 0
0x534: Return(); Pop(0)

0x535: PushEmpty()
0x536: PushEmpty(int, string)
0x537: Stack[-1] = "d7q03"
0x538: Call2 0x47d

0x539: Pop(1)
0x53a: Push((int) 4)
0x53b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x53c: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53d: Stack[-2] = (bool) 1
0x53e: Return(); Pop(0)

0x53f: Stack[-2] = (bool) 0
0x540: Return(); Pop(0)

0x541: PushEmpty()
0x542: PushEmpty(int, string)
0x543: Stack[-1] = "d7q03"
0x544: Call2 0x47d

0x545: Pop(1)
0x546: Push((int) 1000)
0x547: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x548: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x549: Stack[-2] = (bool) 1
0x54a: Return(); Pop(0)

0x54b: Stack[-2] = (bool) 0
0x54c: Return(); Pop(0)

0x54d: PushEmpty(object, object)
0x54e: Push((int) 645)
0x54f: Push((int) 2)
0x550: Push((int) 533279)
0x551: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x552: Pop(3)
0x553: PushEmpty(bool, object, int)
0x554: Stack[-2] = Stack[-4]
0x555: Stack[-1] = (int) 641
0x556: Call2 0x567

0x557: Pop(3)
0x558: Return(); Pop(2)

0x559: Stack[-1] = 0
0x55a: PushEmpty(object, object)
0x55b: @ GetDiaryRoot(Stack[-1])
0x55c: Pop(0)
0x55d: Pop(0); Push((bool) Stack[-1] == 0)
0x55e: IF (Stack[-1] == 0) GOTO 0x564; Pop(1)

0x55f: Push("Can't retrieve diary root")
0x560: @ Trace(Stack[-1])
0x561: Pop(1)
0x562: Stack[-3] = (bool) 0
0x563: Return(); Pop(2)

0x564: Stack[-3] = Stack[-1]
0x565: Return(); Pop(2)

0x566: Stack[-1] = 0
0x567: PushEmpty(object, object, int, object, object, int)
0x568: PushEmpty(object)
0x569: Call2 0x55a

0x56a: Stack[-4] = Stack[-1]
0x56b: Pop(1)
0x56c: @@ Find(Stack[-7], Stack[-2])
0x56d: Pop(0)
0x56e: Pop(0); Push((bool) Stack[-2] == 0)
0x56f: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x570: Push("Can't find diary parent with id: ")
0x571: Pop(1); Push(Stack[-1] + Stack[-8]);
0x572: @ Trace(Stack[-1])
0x573: Pop(1)
0x574: Stack[-9] = (bool) 0
0x575: Return(); Pop(6)

0x576: @@ AddChild(Stack[-8])
0x577: Pop(0)
0x578: Push((int) 7)
0x579: @ SendWorldWndMessage(Stack[-1])
0x57a: Pop(1)
0x57b: @@ GetCategory(Stack[-1])
0x57c: Pop(0)
0x57d: @ SetDiarySection(Stack[-1])
0x57e: Pop(0)
0x57f: Stack[-9] = (bool) 0
0x580: Return(); Pop(6)

0x581: Stack[-2] = 0
0x582: Stack[-3] = 0
0x583: PushEmpty(int, int)
0x584: Push("branch")
0x585: @ GetVariable(Stack[-1], Stack[-2])
0x586: Pop(1)
0x587: Push((int) 0)
0x588: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x589: IF (Stack[-1] == 0) GOTO 0x58d; Pop(1)

0x58a: Stack[-3] = (int) 1
0x58b: Return(); Pop(2)

0x58c: GOTO 0x592

0x58d: Push((int) 1)
0x58e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x58f: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x590: Stack[-3] = (int) 2
0x591: Return(); Pop(2)

0x592: Stack[-3] = (int) 3
0x593: Return(); Pop(2)

0x594: Stack[-1] = (int) 515527
0x595: Return(); Pop(0)

0x596: Stack[-1] = (int) 513334
0x597: Return(); Pop(0)

0x598: Stack[-1] = "ui/NPC_Aglaja.png"
0x599: Return(); Pop(0)

0x59a: Stack[-1] = "ui/NPC_Aglaja_b.png"
0x59b: Return(); Pop(0)

0x59c: Stack[-1] = (bool) 1
0x59d: Return(); Pop(0)

