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
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	player
	head
	GetPosition
	GetProperty
	SetProperty
	GetEyesHeight
	Can't find lsh animation : 
	add
	money
	Money
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png
	d1q02AnnaGotoLaska
	FindMark
	Remove
	d1q02JuliaGotoAnna
	quest_d1_02
	completed
	ood1GorbunLaska1
	d1q02
	money 2000 removed
	ood1GorbunLaska2
	playsound
	givemoney
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	branch

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
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
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
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x1fd
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x203 Vars = (object)
		EVENT_26 Op = 0x234 Vars = (string)
		EVENT_6 Op = 0x23c Vars = ()
		EVENT_7 Op = 0x27d Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 100.0
0x5: Call2 0x30c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3d6

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3d4

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3d8

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3da

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x4d2

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
0x41: Call2 0x351

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
0x4f: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0xae

0x53: Pop(1)
0x54: Push((int) 532716)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call2 0x467

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x443

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x67: Push((int) 532717)
0x68: Push((int) 34571)
0x69: Push((int) 34192)
0x6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b: Pop(3)
0x6c: PushEmpty(bool)
0x6d: Stack[-1] = (bool) 0
0x6e: PushEmpty(bool)
0x6f: Stack[-1] = (bool) 0
0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0x439

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x75: PushEmpty(bool, object)
0x76: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77: Call2 0x44f

0x78: Pop(1)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Stack[-1] = (bool) 1
0x7b: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x7c: PushEmpty(bool, object)
0x7d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e: Call2 0x45b

0x7f: Pop(1)
0x80: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x81: Stack[-1] = (bool) 1
0x82: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x83: Push((int) 532721)
0x84: Push((int) 34197)
0x85: Push((int) 34196)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: Push((int) 532724)
0x89: Push((int) -1)
0x8a: Push((int) 34199)
0x8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(3)
0x8d: GOTO 0x90

0x8e: Return(); Pop(0)

0x8f: GOTO 0x4e

0x90: PushEmpty(bool)
0x91: Call2 0x3dc

0x92: Pop(0)
0x93: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x94: @ lshWaitForAnimEnd()
0x95: Pop(0)
0x96: Push( Stack[3 + Tasks[-1].StackPointer] )
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: GOTO 0x9e

0x99: PushEmpty(string)
0x9a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9b: Call2 0x363

0x9c: Pop(1)
0x9d: GOTO 0x94

0x9e: GOTO 0xad

0x9f: Push("all")
0xa0: Push("idle")
0xa1: @ PlayAnimation(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: @ WaitForAnimEnd()
0xa4: Pop(0)
0xa5: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: GOTO 0xad

0xa8: Push("all")
0xa9: Push("idle")
0xaa: @ PlayAnimation(Stack[-2], Stack[-1])
0xab: Pop(2)
0xac: GOTO 0xa3

0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: PushEmpty(bool)
0xb0: Call2 0x3dc

0xb1: Pop(0)
0xb2: Pop(1); Push((bool) Stack[-1] == 0)
0xb3: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb4: Return(); Pop(0)

0xb5: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Return(); Pop(0)

0xb8: PushEmpty(string, bool)
0xb9: Stack[-2] = Stack[-3]
0xba: Push("")
0xbb: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbd: Stack[-1] = (bool) 0
0xbe: GOTO 0xc0

0xbf: Stack[-1] = (bool) 1
0xc0: Call2 0x373

0xc1: Pop(2)
0xc2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: Push((int) 1)
0xc6: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0x38d

0xc9: Pop(0)
0xca: Push((int) 34192)
0xcb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call2 0x414

0xd1: Pop(2)
0xd2: Push((int) 34194)
0xd3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xd5: PushEmpty(object, object)
0xd6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8: Call2 0x433

0xd9: Pop(2)
0xda: PushEmpty(object, object)
0xdb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd: Call2 0x3f6

0xde: Pop(2)
0xdf: PushEmpty(object, object)
0xe0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe2: Call2 0x423

0xe3: Pop(2)
0xe4: Push((int) 34195)
0xe5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe7: PushEmpty(object, object)
0xe8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea: Call2 0x41a

0xeb: Pop(2)
0xec: Push((int) 34196)
0xed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x42d

0xf3: Pop(2)
0xf4: Push((int) 34198)
0xf5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf7: PushEmpty(object, object)
0xf8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfa: Call2 0x3f6

0xfb: Pop(2)
0xfc: PushEmpty(object, object)
0xfd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xff: Call2 0x433

0x100: Pop(2)
0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x103: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x104: Call2 0x423

0x105: Pop(2)
0x106: Push((int) 34591)
0x107: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x109: PushEmpty(object, object)
0x10a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10c: Call2 0x3f6

0x10d: Pop(2)
0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0x433

0x112: Pop(2)
0x113: PushEmpty(object, object)
0x114: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x115: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x116: Call2 0x423

0x117: Pop(2)
0x118: Push((int) 34191)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral"
0x11d: Call2 0xae

0x11e: Pop(1)
0x11f: Push((int) 532716)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: PushEmpty(bool)
0x125: Stack[-1] = (bool) 0
0x126: PushEmpty(bool, object)
0x127: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x128: Call2 0x467

0x129: Pop(1)
0x12a: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12b: PushEmpty(bool, object)
0x12c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12d: Call2 0x443

0x12e: Pop(1)
0x12f: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x130: Stack[-1] = (bool) 1
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: Push((int) 532717)
0x133: Push((int) 34571)
0x134: Push((int) 34192)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: PushEmpty(bool)
0x138: Stack[-1] = (bool) 0
0x139: PushEmpty(bool)
0x13a: Stack[-1] = (bool) 0
0x13b: PushEmpty(bool, object)
0x13c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13d: Call2 0x439

0x13e: Pop(1)
0x13f: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x140: PushEmpty(bool, object)
0x141: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x142: Call2 0x44f

0x143: Pop(1)
0x144: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x145: Stack[-1] = (bool) 1
0x146: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x147: PushEmpty(bool, object)
0x148: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x149: Call2 0x45b

0x14a: Pop(1)
0x14b: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x14c: Stack[-1] = (bool) 1
0x14d: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x14e: Push((int) 532721)
0x14f: Push((int) 34197)
0x150: Push((int) 34196)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: Push((int) 532724)
0x154: Push((int) -1)
0x155: Push((int) 34199)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: Return(); Pop(0)

0x159: Push((int) 34197)
0x15a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x15c: PushEmpty(string)
0x15d: Stack[-1] = "Neutral"
0x15e: Call2 0xae

0x15f: Pop(1)
0x160: Push((int) 532722)
0x161: @@ SetMessage(Stack[-1])
0x162: Pop(1)
0x163: @@ ClearReplies()
0x164: Pop(0)
0x165: Push((int) 532723)
0x166: Push((int) -1)
0x167: Push((int) 34198)
0x168: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: Push((int) 533075)
0x16b: Push((int) 34590)
0x16c: Push((int) 34589)
0x16d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16e: Pop(3)
0x16f: Return(); Pop(0)

0x170: Push((int) 34590)
0x171: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x172: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x173: PushEmpty(string)
0x174: Stack[-1] = "Neutral"
0x175: Call2 0xae

0x176: Pop(1)
0x177: Push((int) 533076)
0x178: @@ SetMessage(Stack[-1])
0x179: Pop(1)
0x17a: @@ ClearReplies()
0x17b: Pop(0)
0x17c: Push((int) 533077)
0x17d: Push((int) -1)
0x17e: Push((int) 34591)
0x17f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180: Pop(3)
0x181: Return(); Pop(0)

0x182: Push((int) 34571)
0x183: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x185: PushEmpty(string)
0x186: Stack[-1] = "Neutral"
0x187: Call2 0xae

0x188: Pop(1)
0x189: Push((int) 533060)
0x18a: @@ SetMessage(Stack[-1])
0x18b: Pop(1)
0x18c: @@ ClearReplies()
0x18d: Pop(0)
0x18e: Push((int) 533061)
0x18f: Push((int) 34573)
0x190: Push((int) 34572)
0x191: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: Push((int) 533071)
0x194: Push((int) 34573)
0x195: Push((int) 34583)
0x196: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: Return(); Pop(0)

0x199: Push((int) 34573)
0x19a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19b: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x19c: PushEmpty(string)
0x19d: Stack[-1] = "Neutral"
0x19e: Call2 0xae

0x19f: Pop(1)
0x1a0: Push((int) 533062)
0x1a1: @@ SetMessage(Stack[-1])
0x1a2: Pop(1)
0x1a3: @@ ClearReplies()
0x1a4: Pop(0)
0x1a5: Push((int) 533063)
0x1a6: Push((int) 34575)
0x1a7: Push((int) 34574)
0x1a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a9: Pop(3)
0x1aa: Push((int) 533072)
0x1ab: Push((int) 34193)
0x1ac: Push((int) 34585)
0x1ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ae: Pop(3)
0x1af: Return(); Pop(0)

0x1b0: Push((int) 34575)
0x1b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1b3: PushEmpty(string)
0x1b4: Stack[-1] = "Neutral"
0x1b5: Call2 0xae

0x1b6: Pop(1)
0x1b7: Push((int) 533064)
0x1b8: @@ SetMessage(Stack[-1])
0x1b9: Pop(1)
0x1ba: @@ ClearReplies()
0x1bb: Pop(0)
0x1bc: Push((int) 533065)
0x1bd: Push((int) 34193)
0x1be: Push((int) 34576)
0x1bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c0: Pop(3)
0x1c1: Return(); Pop(0)

0x1c2: Push((int) 34193)
0x1c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1c5: PushEmpty(string)
0x1c6: Stack[-1] = "Neutral"
0x1c7: Call2 0xae

0x1c8: Pop(1)
0x1c9: Push((int) 532718)
0x1ca: @@ SetMessage(Stack[-1])
0x1cb: Pop(1)
0x1cc: @@ ClearReplies()
0x1cd: Pop(0)
0x1ce: Push((int) 533073)
0x1cf: Push((int) 34588)
0x1d0: Push((int) 34587)
0x1d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d2: Pop(3)
0x1d3: Return(); Pop(0)

0x1d4: Push((int) 34588)
0x1d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1d7: PushEmpty(string)
0x1d8: Stack[-1] = "Neutral"
0x1d9: Call2 0xae

0x1da: Pop(1)
0x1db: Push((int) 533074)
0x1dc: @@ SetMessage(Stack[-1])
0x1dd: Pop(1)
0x1de: @@ ClearReplies()
0x1df: Pop(0)
0x1e0: PushEmpty(bool, object)
0x1e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e2: Call2 0x439

0x1e3: Pop(1)
0x1e4: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e5: Push((int) 532719)
0x1e6: Push((int) -1)
0x1e7: Push((int) 34194)
0x1e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e9: Pop(3)
0x1ea: Push((int) 532720)
0x1eb: Push((int) -1)
0x1ec: Push((int) 34195)
0x1ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ee: Pop(3)
0x1ef: Return(); Pop(0)

0x1f0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f1: PushEmpty(bool)
0x1f2: Call2 0x3dc

0x1f3: Pop(0)
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f5: @ lshStopAnimation()
0x1f6: Pop(0)
0x1f7: GOTO 0x1fa

0x1f8: @ StopAnimation()
0x1f9: Pop(0)
0x1fa: Return(); Pop(0)

0x1fb: GOTO 0xc5

0x1fc: Return(); Pop(0)

0x1fd: PushEmpty(float, float)
0x1fe: Stack[-2] = (int) 300
0x1ff: Stack[-1] = (int) 100
0x200: Call2 0x20e

0x201: Pop(2)
0x202: Return(); Pop(0)

0x203: PushEmpty()
0x204: PushEmpty()
0x205: Call2 0x294

0x206: Pop(0)
0x207: PushEmpty(int, object)
0x208: Stack[-1] = Stack[-3]
0x209: Push(-2, 1); TaskCall(0)
0x20a: Call2 0x0

0x20b: Pop(-2, 1); TaskReturn
0x20c: Pop(2)
0x20d: Return(); Pop(0)

0x20e: PushEmpty(float, bool, float, bool)
0x20f: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x210: Push((int) 3)
0x211: @ rand(Stack[-3], Stack[-1])
0x212: Pop(1)
0x213: Push((int) 3)
0x214: Pop(1); Push(Stack[-3] + Stack[-1]);
0x215: @ Sleep(Stack[-1], Stack[-2])
0x216: Pop(1)
0x217: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x218: PushEmpty(float, float)
0x219: Stack[-2] = Stack[-8]
0x21a: Stack[-1] = Stack[-7]
0x21b: Call2 0x253

0x21c: Pop(2)
0x21d: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x21e: GOTO 0x210

0x21f: Return(); Pop(4)

0x220: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x221: PushEmpty(bool)
0x222: Stack[-1] = (bool) 0
0x223: PushEmpty(bool)
0x224: Call2 0x307

0x225: Pop(0)
0x226: Pop(1); Push((bool) Stack[-1] == 0)
0x227: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x228: PushEmpty(bool)
0x229: Call2 0x251

0x22a: Pop(0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: Stack[-1] = (bool) 1
0x22d: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x22e: PushEmpty(object)
0x22f: Call2 0x394

0x230: Pop(0)
0x231: @ RemoveActor(Stack[-1])
0x232: Pop(1)
0x233: Return(); Pop(0)

0x234: PushEmpty()
0x235: Push("cleanup")
0x236: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x238: PushEmpty()
0x239: Call2 0x220

0x23a: Pop(0)
0x23b: Return(); Pop(0)

0x23c: Push( Stack[6 + Tasks[-1].StackPointer] )
0x23d: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23e: PushEmpty()
0x23f: Call2 0x294

0x240: Pop(0)
0x241: PushEmpty(bool)
0x242: Stack[-1] = (bool) 0
0x243: Push( Stack[5 + Tasks[-1].StackPointer] )
0x244: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x245: PushEmpty(bool)
0x246: Call2 0x251

0x247: Pop(0)
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: Stack[-1] = (bool) 1
0x24a: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24b: PushEmpty(object)
0x24c: Call2 0x394

0x24d: Pop(0)
0x24e: @ RemoveActor(Stack[-1])
0x24f: Pop(1)
0x250: Return(); Pop(0)

0x251: Stack[-1] = (bool) 1
0x252: Return(); Pop(0)

0x253: PushEmpty()
0x254: PushEmpty(bool)
0x255: Call2 0x307

0x256: Pop(0)
0x257: Pop(1); Push((bool) Stack[-1] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: Return(); Pop(0)

0x25a: Push("player")
0x25b: @ FindActor(Stack[-4], Stack[-1])
0x25c: Pop(1)
0x25d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x25e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x25f: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x260: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x261: Push((int) 10)
0x262: Push((float)1.0)
0x263: @ SetTimer(Stack[-2], Stack[-1])
0x264: Pop(2)
0x265: PushEmpty()
0x266: Call2 0x2a2

0x267: Pop(0)
0x268: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26a: Push((int) 10)
0x26b: @ KillTimer(Stack[-1])
0x26c: Pop(1)
0x26d: Return(); Pop(0)

0x26e: PushEmpty(float, float)
0x26f: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x270: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x271: Stack[-3] = (bool) 0
0x272: Return(); Pop(2)

0x273: PushEmpty(float, object)
0x274: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x275: Call2 0x2f8

0x276: Pop(1)
0x277: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x278: Push( Stack[2 + Tasks[-1].StackPointer] )
0x279: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x27a: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x27b: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x27c: Return(); Pop(2)

0x27d: PushEmpty()
0x27e: Push((int) 10)
0x27f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x281: PushEmpty(bool)
0x282: Call2 0x26e

0x283: Pop(0)
0x284: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x285: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: PushEmpty(object)
0x288: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x289: Call2 0x382

0x28a: Pop(1)
0x28b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x28c: GOTO 0x293

0x28d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x28e: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x28f: Push("head")
0x290: @ UnlookAsync(Stack[-1])
0x291: Pop(1)
0x292: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x293: Return(); Pop(0)

0x294: PushEmpty()
0x295: Call2 0x2f3

0x296: Pop(0)
0x297: Push((int) 10)
0x298: @ KillTimer(Stack[-1])
0x299: Pop(1)
0x29a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x29b: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29c: Push("head")
0x29d: @ UnlookAsync(Stack[-1])
0x29e: Pop(1)
0x29f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2a0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2a1: Return(); Pop(0)

0x2a2: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2a3: @ WaitForAnimEnd()
0x2a4: Pop(0)
0x2a5: PushEmpty(bool)
0x2a6: Call2 0x307

0x2a7: Pop(0)
0x2a8: Pop(1); Push((bool) Stack[-1] == 0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: Return(); Pop(14)

0x2ab: PushEmpty(int)
0x2ac: Call2 0x3e5

0x2ad: Stack[-8] = Stack[-1]
0x2ae: Pop(1)
0x2af: Stack[-6] = (int) 0
0x2b0: PushEmpty(bool)
0x2b1: Stack[-1] = (bool) 0
0x2b2: Push((int) 5)
0x2b3: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2b4: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b5: PushEmpty(bool)
0x2b6: Call2 0x307

0x2b7: Pop(0)
0x2b8: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b9: Stack[-1] = (bool) 1
0x2ba: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2bb: Push((int) 3)
0x2bc: @ irand(Stack[-6], Stack[-1])
0x2bd: Pop(1)
0x2be: Push((int) 0)
0x2bf: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2c1: Push(Stack[-7])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2c3: @ irand(Stack[-4], Stack[-7])
0x2c4: Pop(0)
0x2c5: Push("all")
0x2c6: PushEmpty(string, int)
0x2c7: Stack[-1] = Stack[-7]
0x2c8: Call2 0x3de

0x2c9: Pop(1)
0x2ca: @ PlayAnimation(Stack[-2], Stack[-1])
0x2cb: Pop(2)
0x2cc: @ WaitForAnimEnd(Stack[-3])
0x2cd: Pop(0)
0x2ce: Pop(0); Push((bool) Stack[-3] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2d0: GOTO 0x2ee

0x2d1: GOTO 0x2e3

0x2d2: Push((int) 1)
0x2d3: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2d5: Push((int) 4)
0x2d6: @ rand(Stack[-3], Stack[-1])
0x2d7: Pop(1)
0x2d8: Push((int) 1)
0x2d9: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2da: @ Sleep(Stack[-1], Stack[-2])
0x2db: Pop(1)
0x2dc: Pop(0); Push((bool) Stack[-1] == 0)
0x2dd: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2de: GOTO 0x2ee

0x2df: GOTO 0x2e3

0x2e0: Push(Stack[-6])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e2: GOTO 0x2ee

0x2e3: PushEmpty(bool)
0x2e4: Call2 0x2f1

0x2e5: Pop(0)
0x2e6: Pop(1); Push((bool) Stack[-1] == 0)
0x2e7: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e8: GOTO 0x2ee

0x2e9: @ ResetAAS()
0x2ea: Pop(0)
0x2eb: Push((int) 1)
0x2ec: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2ed: GOTO 0x2b0

0x2ee: @ ResetAAS()
0x2ef: Pop(0)
0x2f0: Return(); Pop(14)

0x2f1: Stack[-1] = (bool) 1
0x2f2: Return(); Pop(0)

0x2f3: @ StopAnimation()
0x2f4: Pop(0)
0x2f5: @ StopGroup0()
0x2f6: Pop(0)
0x2f7: Return(); Pop(0)

0x2f8: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2f9: @ GetPosition(Stack[-3])
0x2fa: Pop(0)
0x2fb: @@ GetPosition(Stack[-2])
0x2fc: Pop(0)
0x2fd: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2fe: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2ff: Return(); Pop(6)

0x300: PushEmpty(int, int)
0x301: @@ GetProperty(Stack[-4], Stack[-1])
0x302: Pop(0)
0x303: Pop(0); Push(Stack[-1] + Stack[-3]);
0x304: @@ SetProperty(Stack[-5], Stack[-1])
0x305: Pop(1)
0x306: Return(); Pop(2)

0x307: PushEmpty(bool, bool)
0x308: @ IsLoaded(Stack[-1])
0x309: Pop(0)
0x30a: Stack[-3] = Stack[-1]
0x30b: Return(); Pop(2)

0x30c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x30d: @@ GetPosition(Stack[-8])
0x30e: Pop(0)
0x30f: @@ GetEyesHeight(Stack[-9])
0x310: Pop(0)
0x311: Push(CvectorIndex(Stack[-8], 1))
0x312: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x313: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x314: @ GetPosition(Stack[-7])
0x315: Pop(0)
0x316: @ GetEyesHeight(Stack[-9])
0x317: Pop(0)
0x318: Push(CvectorIndex(Stack[-7], 1))
0x319: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x31a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x31b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x31c: Push(CvectorIndex(Stack[-6], 1))
0x31d: Stack[-1] = (int) 0
0x31e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x31f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x320: Pop(1); Push(Sqrt(Stack[-1]))
0x321: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x322: Stack[-5] = -Stack[-6]; Pop(0);
0x323: Pop(0); Push(Stack[-6] * Stack[-19]);
0x324: PushEmpty(cvector, cvector)
0x325: Push(CVector(0.0, 1.0, 0.0))
0x326: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x327: Call2 0x39a

0x328: Pop(1)
0x329: Push((int) 25)
0x32a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x32b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32c: Push(CVector(0.0, 10.0, 0.0))
0x32d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x32e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x32f: @ IsOverrideActive(Stack[-2])
0x330: Pop(0)
0x331: Push(Stack[-2])
0x332: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x333: Stack[-21] = (bool) 0
0x334: Return(); Pop(18)

0x335: @ StopWorld()
0x336: Pop(0)
0x337: Push((bool) 1)
0x338: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x339: Pop(1)
0x33a: Push(CvectorIndex(Stack[-4], 0))
0x33b: Push(CvectorIndex(Stack[-5], 2))
0x33c: @ Rotate(Stack[-2], Stack[-1])
0x33d: Pop(2)
0x33e: PushEmpty(bool)
0x33f: Call2 0x3dc

0x340: Pop(0)
0x341: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x342: GOTO 0x34b

0x343: Push("head")
0x344: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x345: Pop(1)
0x346: Push(Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x348: Push("head")
0x349: @ LookAsyncCamera(Stack[-1])
0x34a: Pop(1)
0x34b: @ CameraWaitForPlayFinish()
0x34c: Pop(0)
0x34d: @ ResumeWorld()
0x34e: Pop(0)
0x34f: Stack[-21] = (bool) 1
0x350: Return(); Pop(18)

0x351: PushEmpty(bool, bool)
0x352: Push((bool) 1)
0x353: @ CameraSwitchToNormal(Stack[-1])
0x354: Pop(1)
0x355: PushEmpty(bool)
0x356: Call2 0x3dc

0x357: Pop(0)
0x358: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x359: GOTO 0x362

0x35a: Push("head")
0x35b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x35c: Pop(1)
0x35d: Push(Stack[-1])
0x35e: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35f: Push("head")
0x360: @ UnlookAsync(Stack[-1])
0x361: Pop(1)
0x362: Return(); Pop(2)

0x363: PushEmpty(bool, float, float, bool, float, float)
0x364: @ lshHasAnimation(Stack[-3], Stack[-7])
0x365: Pop(0)
0x366: Push(Stack[-3])
0x367: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x368: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x369: Pop(0)
0x36a: Push((bool) 0)
0x36b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x36c: Pop(1)
0x36d: GOTO 0x372

0x36e: Push("Can't find lsh animation : ")
0x36f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x370: @ Trace(Stack[-1])
0x371: Pop(1)
0x372: Return(); Pop(6)

0x373: PushEmpty(bool, float, float, bool, float, float)
0x374: @ lshHasAnimation(Stack[-3], Stack[-8])
0x375: Pop(0)
0x376: Push(Stack[-3])
0x377: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x378: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x379: Pop(0)
0x37a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x37b: Pop(0)
0x37c: GOTO 0x381

0x37d: Push("Can't find lsh animation : ")
0x37e: Pop(1); Push(Stack[-1] + Stack[-9]);
0x37f: @ Trace(Stack[-1])
0x380: Pop(1)
0x381: Return(); Pop(6)

0x382: PushEmpty(float, cvector, float, cvector)
0x383: @@ GetEyesHeight(Stack[-2])
0x384: Pop(0)
0x385: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x386: Push(CvectorIndex(Stack[-1], 1))
0x387: Stack[-1] = Stack[-3]
0x388: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x389: Push("head")
0x38a: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x38b: Pop(1)
0x38c: Return(); Pop(4)

0x38d: PushEmpty(bool)
0x38e: Call2 0x3dc

0x38f: Pop(0)
0x390: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x391: @ lshStopSpeech()
0x392: Pop(0)
0x393: Return(); Pop(0)

0x394: PushEmpty(object, object)
0x395: @ self(Stack[-1])
0x396: Pop(0)
0x397: Stack[-3] = Stack[-1]
0x398: Return(); Pop(2)

0x399: Stack[-1] = 0
0x39a: PushEmpty(float, float)
0x39b: Pop(0); Push(Stack[-3] | Stack[-3]);
0x39c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x39d: Push((float)0.0)
0x39e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3a2; Pop(1)

0x3a0: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3a1: Return(); Pop(2)

0x3a2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3a3: Return(); Pop(2)

0x3a4: PushEmpty(int, int)
0x3a5: @ GetVariable(Stack[-3], Stack[-1])
0x3a6: Pop(0)
0x3a7: Stack[-4] = Stack[-1]
0x3a8: Return(); Pop(2)

0x3a9: PushEmpty(object, object)
0x3aa: @ CreateIntVector(Stack[-1])
0x3ab: Pop(0)
0x3ac: @@ add(Stack[-4])
0x3ad: Pop(0)
0x3ae: @@ add(Stack[-3])
0x3af: Pop(0)
0x3b0: Push((int) 3)
0x3b1: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x3b2: Pop(1)
0x3b3: Return(); Pop(2)

0x3b4: Stack[-1] = 0
0x3b5: PushEmpty(int, int)
0x3b6: PushEmpty(object, string, int)
0x3b7: Stack[-3] = Stack[-7]
0x3b8: Stack[-2] = "money"
0x3b9: Stack[-1] = Stack[-6]
0x3ba: Call2 0x300

0x3bb: Pop(3)
0x3bc: Push((int) 0)
0x3bd: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x3be: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3bf: Push("Money")
0x3c0: @ GetInvItemByName(Stack[-2], Stack[-1])
0x3c1: Pop(1)
0x3c2: PushEmpty(int, int)
0x3c3: Stack[-2] = Stack[-3]
0x3c4: Stack[-1] = Stack[-5]
0x3c5: Call2 0x3a9

0x3c6: Pop(2)
0x3c7: Return(); Pop(2)

0x3c8: PushEmpty(object, object)
0x3c9: @ FindActor(Stack[-1], Stack[-4])
0x3ca: Pop(0)
0x3cb: Pop(0); Push((bool) Stack[-1] == 0)
0x3cc: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3cd: Stack[-5] = (bool) 0
0x3ce: Return(); Pop(2)

0x3cf: @ Trigger(Stack[-1], Stack[-3])
0x3d0: Pop(0)
0x3d1: Stack[-5] = (bool) 1
0x3d2: Return(); Pop(2)

0x3d3: Stack[-1] = 0
0x3d4: Stack[-1] = (int) 515594
0x3d5: Return(); Pop(0)

0x3d6: Stack[-1] = (int) 512583
0x3d7: Return(); Pop(0)

0x3d8: Stack[-1] = "ui/NPC_Citizen3.png"
0x3d9: Return(); Pop(0)

0x3da: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x3db: Return(); Pop(0)

0x3dc: Stack[-1] = (bool) 0
0x3dd: Return(); Pop(0)

0x3de: PushEmpty(string, string)
0x3df: Stack[-1] = "idle"
0x3e0: Push(Stack[-3])
0x3e1: IF (Stack[-1] == 0) GOTO 0x3e3; Pop(1)

0x3e2: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3e3: Stack[-4] = Stack[-1]
0x3e4: Return(); Pop(2)

0x3e5: PushEmpty(int, bool, int, bool)
0x3e6: Stack[-2] = (int) 0
0x3e7: Push("all")
0x3e8: PushEmpty(string, int)
0x3e9: Stack[-1] = Stack[-5]
0x3ea: Call2 0x3de

0x3eb: Pop(1)
0x3ec: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3ed: Pop(2)
0x3ee: Pop(0); Push((bool) Stack[-1] == 0)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3f0: GOTO 0x3f4

0x3f1: Push((int) 1)
0x3f2: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3f3: GOTO 0x3e7

0x3f4: Stack[-5] = Stack[-2]
0x3f5: Return(); Pop(4)

0x3f6: PushEmpty(object, object, object, object)
0x3f7: PushEmpty(object)
0x3f8: Call2 0x4c1

0x3f9: Stack[-3] = Stack[-1]
0x3fa: Pop(1)
0x3fb: Push("d1q02AnnaGotoLaska")
0x3fc: @@ FindMark(Stack[-2], Stack[-1])
0x3fd: Pop(1)
0x3fe: Push(Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x400: @@ Remove()
0x401: Pop(0)
0x402: Push("d1q02JuliaGotoAnna")
0x403: @@ FindMark(Stack[-2], Stack[-1])
0x404: Pop(1)
0x405: Push(Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x407: @@ Remove()
0x408: Pop(0)
0x409: PushEmpty()
0x40a: Call2 0x47e

0x40b: Pop(0)
0x40c: PushEmpty(bool, string, string)
0x40d: Stack[-2] = "quest_d1_02"
0x40e: Stack[-1] = "completed"
0x40f: Call2 0x3c8

0x410: Pop(3)
0x411: Return(); Pop(4)

0x412: Stack[-1] = 0
0x413: Stack[-2] = 0
0x414: PushEmpty()
0x415: Push("ood1GorbunLaska1")
0x416: Push((int) 1)
0x417: @ SetVariable(Stack[-2], Stack[-1])
0x418: Pop(2)
0x419: Return(); Pop(0)

0x41a: PushEmpty()
0x41b: Push("d1q02")
0x41c: Push((int) 4)
0x41d: @ SetVariable(Stack[-2], Stack[-1])
0x41e: Pop(2)
0x41f: PushEmpty()
0x420: Call2 0x48b

0x421: Pop(0)
0x422: Return(); Pop(0)

0x423: PushEmpty()
0x424: Push("money 2000 removed")
0x425: @ Trace(Stack[-1])
0x426: Pop(1)
0x427: PushEmpty(object, int)
0x428: Stack[-2] = Stack[-4]
0x429: Stack[-1] = (int) -2000
0x42a: Call2 0x3b5

0x42b: Pop(2)
0x42c: Return(); Pop(0)

0x42d: PushEmpty()
0x42e: Push("ood1GorbunLaska2")
0x42f: Push((int) 1)
0x430: @ SetVariable(Stack[-2], Stack[-1])
0x431: Pop(2)
0x432: Return(); Pop(0)

0x433: PushEmpty()
0x434: Push("playsound")
0x435: Push("givemoney")
0x436: @ TriggerWorld(Stack[-2], Stack[-1])
0x437: Pop(2)
0x438: Return(); Pop(0)

0x439: PushEmpty()
0x43a: PushEmpty(bool, object)
0x43b: Stack[-1] = Stack[-3]
0x43c: Call2 0x473

0x43d: Pop(1)
0x43e: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x43f: Stack[-2] = (bool) 1
0x440: Return(); Pop(0)

0x441: Stack[-2] = (bool) 0
0x442: Return(); Pop(0)

0x443: PushEmpty()
0x444: PushEmpty(int, string)
0x445: Stack[-1] = "ood1GorbunLaska1"
0x446: Call2 0x3a4

0x447: Pop(1)
0x448: Push((int) 0)
0x449: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x44a: IF (Stack[-1] == 0) GOTO 0x44d; Pop(1)

0x44b: Stack[-2] = (bool) 1
0x44c: Return(); Pop(0)

0x44d: Stack[-2] = (bool) 0
0x44e: Return(); Pop(0)

0x44f: PushEmpty()
0x450: PushEmpty(int, string)
0x451: Stack[-1] = "ood1GorbunLaska2"
0x452: Call2 0x3a4

0x453: Pop(1)
0x454: Push((int) 0)
0x455: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x456: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x457: Stack[-2] = (bool) 1
0x458: Return(); Pop(0)

0x459: Stack[-2] = (bool) 0
0x45a: Return(); Pop(0)

0x45b: PushEmpty()
0x45c: PushEmpty(int, string)
0x45d: Stack[-1] = "d1q02"
0x45e: Call2 0x3a4

0x45f: Pop(1)
0x460: Push((int) 4)
0x461: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x462: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x463: Stack[-2] = (bool) 1
0x464: Return(); Pop(0)

0x465: Stack[-2] = (bool) 0
0x466: Return(); Pop(0)

0x467: PushEmpty()
0x468: PushEmpty(int, string)
0x469: Stack[-1] = "d1q02"
0x46a: Call2 0x3a4

0x46b: Pop(1)
0x46c: Push((int) 2)
0x46d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x46e: IF (Stack[-1] == 0) GOTO 0x471; Pop(1)

0x46f: Stack[-2] = (bool) 1
0x470: Return(); Pop(0)

0x471: Stack[-2] = (bool) 0
0x472: Return(); Pop(0)

0x473: PushEmpty(float, float)
0x474: Push("money")
0x475: @@ GetProperty(Stack[-1], Stack[-2])
0x476: Pop(1)
0x477: Push((int) 2000)
0x478: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x479: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47a: Stack[-4] = (bool) 1
0x47b: Return(); Pop(2)

0x47c: Stack[-4] = (bool) 0
0x47d: Return(); Pop(2)

0x47e: PushEmpty(object, object)
0x47f: Push((int) 36)
0x480: Push((int) 2)
0x481: Push((int) 512118)
0x482: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x483: Pop(3)
0x484: PushEmpty(bool, object, int)
0x485: Stack[-2] = Stack[-4]
0x486: Stack[-1] = (int) 7
0x487: Call2 0x4a5

0x488: Pop(3)
0x489: Return(); Pop(2)

0x48a: Stack[-1] = 0
0x48b: PushEmpty(object, object)
0x48c: Push((int) 625)
0x48d: Push((int) 2)
0x48e: Push((int) 532728)
0x48f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x490: Pop(3)
0x491: PushEmpty(bool, object, int)
0x492: Stack[-2] = Stack[-4]
0x493: Stack[-1] = (int) 7
0x494: Call2 0x4a5

0x495: Pop(3)
0x496: Return(); Pop(2)

0x497: Stack[-1] = 0
0x498: PushEmpty(object, object)
0x499: @ GetDiaryRoot(Stack[-1])
0x49a: Pop(0)
0x49b: Pop(0); Push((bool) Stack[-1] == 0)
0x49c: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x49d: Push("Can't retrieve diary root")
0x49e: @ Trace(Stack[-1])
0x49f: Pop(1)
0x4a0: Stack[-3] = (bool) 0
0x4a1: Return(); Pop(2)

0x4a2: Stack[-3] = Stack[-1]
0x4a3: Return(); Pop(2)

0x4a4: Stack[-1] = 0
0x4a5: PushEmpty(object, object, int, object, object, int)
0x4a6: PushEmpty(object)
0x4a7: Call2 0x498

0x4a8: Stack[-4] = Stack[-1]
0x4a9: Pop(1)
0x4aa: @@ Find(Stack[-7], Stack[-2])
0x4ab: Pop(0)
0x4ac: Pop(0); Push((bool) Stack[-2] == 0)
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4ae: Push("Can't find diary parent with id: ")
0x4af: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4b0: @ Trace(Stack[-1])
0x4b1: Pop(1)
0x4b2: Stack[-9] = (bool) 0
0x4b3: Return(); Pop(6)

0x4b4: @@ AddChild(Stack[-8])
0x4b5: Pop(0)
0x4b6: Push((int) 7)
0x4b7: @ SendWorldWndMessage(Stack[-1])
0x4b8: Pop(1)
0x4b9: @@ GetCategory(Stack[-1])
0x4ba: Pop(0)
0x4bb: @ SetDiarySection(Stack[-1])
0x4bc: Pop(0)
0x4bd: Stack[-9] = (bool) 0
0x4be: Return(); Pop(6)

0x4bf: Stack[-2] = 0
0x4c0: Stack[-3] = 0
0x4c1: PushEmpty(object, object, object, object)
0x4c2: @ GetMainOutdoorScene(Stack[-2])
0x4c3: Pop(0)
0x4c4: Pop(0); Push((bool) Stack[-2] == 0)
0x4c5: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4c6: Push("Can't find main outdoor scene")
0x4c7: @ Trace(Stack[-1])
0x4c8: Pop(1)
0x4c9: Stack[-1] = 0
0x4ca: Stack[-5] = Stack[-1]
0x4cb: Return(); Pop(4)

0x4cc: @@ GetMap(Stack[-1])
0x4cd: Pop(0)
0x4ce: Stack[-5] = Stack[-1]
0x4cf: Return(); Pop(4)

0x4d0: Stack[-1] = 0
0x4d1: Stack[-2] = 0
0x4d2: PushEmpty(int, int)
0x4d3: Push("branch")
0x4d4: @ GetVariable(Stack[-1], Stack[-2])
0x4d5: Pop(1)
0x4d6: Push((int) 0)
0x4d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4dc; Pop(1)

0x4d9: Stack[-3] = (int) 1
0x4da: Return(); Pop(2)

0x4db: GOTO 0x4e1

0x4dc: Push((int) 1)
0x4dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4de: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4df: Stack[-3] = (int) 2
0x4e0: Return(); Pop(2)

0x4e1: Stack[-3] = (int) 3
0x4e2: Return(); Pop(2)

