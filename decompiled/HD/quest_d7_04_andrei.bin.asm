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
	Grin
	SetMessage
	ClearReplies
	AddReply
	Untrust
	all
	idle
	Smile
	Neutral
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ood7AndreiPrisoned1
	quest_d7_04
	completed
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Andrei.png
	ui/NPC_Andrei_b.png

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
	Hold (0 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
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
	irand (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1f6
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x1ee Vars = (object)
		EVENT_26 Op = 0x1fa Vars = (string)
		EVENT_6 Op = 0x216 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x228

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3cd

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3cb

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3cf

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3d1

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3ba

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
0x31: Call2 0x33e

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x27f

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
0x48: Call2 0x26d

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
0x56: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x378

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x5c: PushEmpty(object, object)
0x5d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f: Call2 0x368

0x60: Pop(2)
0x61: PushEmpty(string)
0x62: Stack[-1] = "Grin"
0x63: Call2 0xa9

0x64: Pop(1)
0x65: Push((int) 533209)
0x66: @@ SetMessage(Stack[-1])
0x67: Pop(1)
0x68: @@ ClearReplies()
0x69: Pop(0)
0x6a: Push((int) 535195)
0x6b: Push((int) 36867)
0x6c: Push((int) 36866)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 535202)
0x70: Push((int) 36867)
0x71: Push((int) 36873)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x8b

0x75: PushEmpty(string)
0x76: Stack[-1] = "Untrust"
0x77: Call2 0xa9

0x78: Pop(1)
0x79: Push((int) 533219)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: Push((int) 533220)
0x7f: Push((int) -1)
0x80: Push((int) 34740)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: Push((int) 535201)
0x84: Push((int) -1)
0x85: Push((int) 36872)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: GOTO 0x8b

0x89: Return(); Pop(0)

0x8a: GOTO 0x55

0x8b: PushEmpty(bool)
0x8c: Call2 0x3d3

0x8d: Pop(0)
0x8e: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8f: @ lshWaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: PushEmpty(string)
0x95: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x96: Call2 0x309

0x97: Pop(1)
0x98: GOTO 0x8f

0x99: GOTO 0xa8

0x9a: Push("all")
0x9b: Push("idle")
0x9c: @ PlayAnimation(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: @ WaitForAnimEnd()
0x9f: Pop(0)
0xa0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: GOTO 0xa8

0xa3: Push("all")
0xa4: Push("idle")
0xa5: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: GOTO 0x9e

0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: PushEmpty(bool)
0xab: Call2 0x3d3

0xac: Pop(0)
0xad: Pop(1); Push((bool) Stack[-1] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Return(); Pop(0)

0xb0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: PushEmpty(string, bool)
0xb4: Stack[-2] = Stack[-3]
0xb5: Push("")
0xb6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb8: Stack[-1] = (bool) 0
0xb9: GOTO 0xbb

0xba: Stack[-1] = (bool) 1
0xbb: Call2 0x319

0xbc: Pop(2)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0x337

0xc4: Pop(0)
0xc5: Push((int) 34738)
0xc6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x36e

0xcc: Pop(2)
0xcd: Push((int) 37544)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0x36e

0xd4: Pop(2)
0xd5: Push((int) 34729)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda: Call2 0x378

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xdd: PushEmpty(object, object)
0xde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe0: Call2 0x368

0xe1: Pop(2)
0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Grin"
0xe4: Call2 0xa9

0xe5: Pop(1)
0xe6: Push((int) 533209)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 535195)
0xec: Push((int) 36867)
0xed: Push((int) 36866)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 535202)
0xf1: Push((int) 36867)
0xf2: Push((int) 36873)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Untrust"
0xf8: Call2 0xa9

0xf9: Pop(1)
0xfa: Push((int) 533219)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: Push((int) 533220)
0x100: Push((int) -1)
0x101: Push((int) 34740)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Push((int) 535201)
0x105: Push((int) -1)
0x106: Push((int) 36872)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 36867)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Untrust"
0x10f: Call2 0xa9

0x110: Pop(1)
0x111: Push((int) 535196)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: Push((int) 535197)
0x117: Push((int) 36869)
0x118: Push((int) 36868)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Push((int) 535200)
0x11c: Push((int) 37527)
0x11d: Push((int) 36871)
0x11e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f: Pop(3)
0x120: Return(); Pop(0)

0x121: Push((int) 36869)
0x122: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x124: PushEmpty(string)
0x125: Stack[-1] = "Untrust"
0x126: Call2 0xa9

0x127: Pop(1)
0x128: Push((int) 535198)
0x129: @@ SetMessage(Stack[-1])
0x12a: Pop(1)
0x12b: @@ ClearReplies()
0x12c: Pop(0)
0x12d: Push((int) 535831)
0x12e: Push((int) 37526)
0x12f: Push((int) 37525)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Push((int) 535828)
0x133: Push((int) 37538)
0x134: Push((int) 37522)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: Return(); Pop(0)

0x138: Push((int) 37526)
0x139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x13b: PushEmpty(string)
0x13c: Stack[-1] = "Untrust"
0x13d: Call2 0xa9

0x13e: Pop(1)
0x13f: Push((int) 535832)
0x140: @@ SetMessage(Stack[-1])
0x141: Pop(1)
0x142: @@ ClearReplies()
0x143: Pop(0)
0x144: Push((int) 535199)
0x145: Push((int) 37527)
0x146: Push((int) 36870)
0x147: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x148: Pop(3)
0x149: Push((int) 535194)
0x14a: Push((int) 34731)
0x14b: Push((int) 36865)
0x14c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14d: Pop(3)
0x14e: Return(); Pop(0)

0x14f: Push((int) 34731)
0x150: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x151: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x152: PushEmpty(string)
0x153: Stack[-1] = "Untrust"
0x154: Call2 0xa9

0x155: Pop(1)
0x156: Push((int) 533211)
0x157: @@ SetMessage(Stack[-1])
0x158: Pop(1)
0x159: @@ ClearReplies()
0x15a: Pop(0)
0x15b: Push((int) 533212)
0x15c: Push((int) 34733)
0x15d: Push((int) 34732)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Push((int) 535834)
0x161: Push((int) 37538)
0x162: Push((int) 37528)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Return(); Pop(0)

0x166: Push((int) 37538)
0x167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x169: PushEmpty(string)
0x16a: Stack[-1] = "Smile"
0x16b: Call2 0xa9

0x16c: Pop(1)
0x16d: Push((int) 535843)
0x16e: @@ SetMessage(Stack[-1])
0x16f: Pop(1)
0x170: @@ ClearReplies()
0x171: Pop(0)
0x172: Push((int) 535844)
0x173: Push((int) 37533)
0x174: Push((int) 37539)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: Return(); Pop(0)

0x178: Push((int) 37527)
0x179: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17a: IF (Stack[-1] == 0) GOTO 0x18f; Pop(1)

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Untrust"
0x17d: Call2 0xa9

0x17e: Pop(1)
0x17f: Push((int) 535833)
0x180: @@ SetMessage(Stack[-1])
0x181: Pop(1)
0x182: @@ ClearReplies()
0x183: Pop(0)
0x184: Push((int) 535835)
0x185: Push((int) 34733)
0x186: Push((int) 37529)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Push((int) 535845)
0x18a: Push((int) 37533)
0x18b: Push((int) 37542)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: Return(); Pop(0)

0x18f: Push((int) 34733)
0x190: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x191: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x192: PushEmpty(string)
0x193: Stack[-1] = "Neutral"
0x194: Call2 0xa9

0x195: Pop(1)
0x196: Push((int) 533213)
0x197: @@ SetMessage(Stack[-1])
0x198: Pop(1)
0x199: @@ ClearReplies()
0x19a: Pop(0)
0x19b: Push((int) 533214)
0x19c: Push((int) 34735)
0x19d: Push((int) 34734)
0x19e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19f: Pop(3)
0x1a0: Push((int) 535842)
0x1a1: Push((int) 34735)
0x1a2: Push((int) 37537)
0x1a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a4: Pop(3)
0x1a5: Return(); Pop(0)

0x1a6: Push((int) 34735)
0x1a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1a9: PushEmpty(string)
0x1aa: Stack[-1] = "Neutral"
0x1ab: Call2 0xa9

0x1ac: Pop(1)
0x1ad: Push((int) 533215)
0x1ae: @@ SetMessage(Stack[-1])
0x1af: Pop(1)
0x1b0: @@ ClearReplies()
0x1b1: Pop(0)
0x1b2: Push((int) 533216)
0x1b3: Push((int) 37533)
0x1b4: Push((int) 34736)
0x1b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b6: Pop(3)
0x1b7: Return(); Pop(0)

0x1b8: Push((int) 37533)
0x1b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ba: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1bb: PushEmpty(string)
0x1bc: Stack[-1] = "Untrust"
0x1bd: Call2 0xa9

0x1be: Pop(1)
0x1bf: Push((int) 535838)
0x1c0: @@ SetMessage(Stack[-1])
0x1c1: Pop(1)
0x1c2: @@ ClearReplies()
0x1c3: Pop(0)
0x1c4: Push((int) 535840)
0x1c5: Push((int) 37536)
0x1c6: Push((int) 37535)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: Push((int) 535846)
0x1ca: Push((int) -1)
0x1cb: Push((int) 37544)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: Return(); Pop(0)

0x1cf: Push((int) 37536)
0x1d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1d2: PushEmpty(string)
0x1d3: Stack[-1] = "Untrust"
0x1d4: Call2 0xa9

0x1d5: Pop(1)
0x1d6: Push((int) 535841)
0x1d7: @@ SetMessage(Stack[-1])
0x1d8: Pop(1)
0x1d9: @@ ClearReplies()
0x1da: Pop(0)
0x1db: Push((int) 533218)
0x1dc: Push((int) -1)
0x1dd: Push((int) 34738)
0x1de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df: Pop(3)
0x1e0: Return(); Pop(0)

0x1e1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e2: PushEmpty(bool)
0x1e3: Call2 0x3d3

0x1e4: Pop(0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e6: @ lshStopAnimation()
0x1e7: Pop(0)
0x1e8: GOTO 0x1eb

0x1e9: @ StopAnimation()
0x1ea: Pop(0)
0x1eb: Return(); Pop(0)

0x1ec: GOTO 0xc0

0x1ed: Return(); Pop(0)

0x1ee: PushEmpty()
0x1ef: PushEmpty(int, object)
0x1f0: Stack[-1] = Stack[-3]
0x1f1: Push(-2, 1); TaskCall(0)
0x1f2: Call2 0x0

0x1f3: Pop(-2, 1); TaskReturn
0x1f4: Pop(2)
0x1f5: Return(); Pop(0)

0x1f6: @ Hold()
0x1f7: Pop(0)
0x1f8: GOTO 0x1f6

0x1f9: Return(); Pop(0)

0x1fa: PushEmpty(bool, bool)
0x1fb: Push("cleanup")
0x1fc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x1fe: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1ff: @ IsLoaded(Stack[-1])
0x200: Pop(0)
0x201: PushEmpty(bool)
0x202: Stack[-1] = (bool) 0
0x203: Pop(0); Push((bool) Stack[-2] == 0)
0x204: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x205: PushEmpty(bool)
0x206: Call2 0x226

0x207: Pop(0)
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: Stack[-1] = (bool) 1
0x20a: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20b: PushEmpty(object)
0x20c: Call2 0x33e

0x20d: Pop(0)
0x20e: @ RemoveActor(Stack[-1])
0x20f: Pop(1)
0x210: GOTO 0x215

0x211: Push("restore")
0x212: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x214: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x215: Return(); Pop(2)

0x216: PushEmpty(bool)
0x217: Stack[-1] = (bool) 0
0x218: Push( Stack[0 + Tasks[-1].StackPointer] )
0x219: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21a: PushEmpty(bool)
0x21b: Call2 0x226

0x21c: Pop(0)
0x21d: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21e: Stack[-1] = (bool) 1
0x21f: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x220: PushEmpty(object)
0x221: Call2 0x33e

0x222: Pop(0)
0x223: @ RemoveActor(Stack[-1])
0x224: Pop(1)
0x225: Return(); Pop(0)

0x226: Stack[-1] = (bool) 1
0x227: Return(); Pop(0)

0x228: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x229: @@ GetPosition(Stack[-8])
0x22a: Pop(0)
0x22b: @@ GetEyesHeight(Stack[-9])
0x22c: Pop(0)
0x22d: Push(CvectorIndex(Stack[-8], 1))
0x22e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x22f: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x230: @ GetPosition(Stack[-7])
0x231: Pop(0)
0x232: @ GetEyesHeight(Stack[-9])
0x233: Pop(0)
0x234: Push(CvectorIndex(Stack[-7], 1))
0x235: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x236: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x237: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x238: Push(CvectorIndex(Stack[-6], 1))
0x239: Stack[-1] = (int) 0
0x23a: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x23b: Pop(0); Push(Stack[-6] | Stack[-6]);
0x23c: Pop(1); Push(Sqrt(Stack[-1]))
0x23d: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x23e: Stack[-5] = -Stack[-6]; Pop(0);
0x23f: Pop(0); Push(Stack[-6] * Stack[-19]);
0x240: PushEmpty(cvector, cvector)
0x241: Push(CVector(0.0, 1.0, 0.0))
0x242: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x243: Call2 0x344

0x244: Pop(1)
0x245: Push((int) 25)
0x246: Pop(2); Push(Stack[-2] * Stack[-1]);
0x247: Pop(2); Push(Stack[-2] + Stack[-1]);
0x248: Push(CVector(0.0, 10.0, 0.0))
0x249: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x24a: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x24b: @ IsOverrideActive(Stack[-2])
0x24c: Pop(0)
0x24d: Push(Stack[-2])
0x24e: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x24f: Stack[-21] = (bool) 0
0x250: Return(); Pop(18)

0x251: @ StopWorld()
0x252: Pop(0)
0x253: Push((bool) 1)
0x254: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x255: Pop(1)
0x256: Push(CvectorIndex(Stack[-4], 0))
0x257: Push(CvectorIndex(Stack[-5], 2))
0x258: @ Rotate(Stack[-2], Stack[-1])
0x259: Pop(2)
0x25a: PushEmpty(bool)
0x25b: Call2 0x3d3

0x25c: Pop(0)
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: GOTO 0x267

0x25f: Push("head")
0x260: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x261: Pop(1)
0x262: Push(Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x264: Push("head")
0x265: @ LookAsyncCamera(Stack[-1])
0x266: Pop(1)
0x267: @ CameraWaitForPlayFinish()
0x268: Pop(0)
0x269: @ ResumeWorld()
0x26a: Pop(0)
0x26b: Stack[-21] = (bool) 1
0x26c: Return(); Pop(18)

0x26d: PushEmpty(bool, bool)
0x26e: Push((bool) 1)
0x26f: @ CameraSwitchToNormal(Stack[-1])
0x270: Pop(1)
0x271: PushEmpty(bool)
0x272: Call2 0x3d3

0x273: Pop(0)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: GOTO 0x27e

0x276: Push("head")
0x277: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x278: Pop(1)
0x279: Push(Stack[-1])
0x27a: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27b: Push("head")
0x27c: @ UnlookAsync(Stack[-1])
0x27d: Pop(1)
0x27e: Return(); Pop(2)

0x27f: PushEmpty(int, int, int, int)
0x280: Push("voice_common")
0x281: @ GetVariable(Stack[-1], Stack[-3])
0x282: Pop(1)
0x283: Push(Stack[-2])
0x284: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x285: PushEmpty(bool, object)
0x286: Stack[-1] = Stack[-7]
0x287: Call2 0x2b9

0x288: Pop(1)
0x289: Pop(1); Push((bool) Stack[-1] == 0)
0x28a: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x28b: PushEmpty(bool, object)
0x28c: Stack[-1] = Stack[-7]
0x28d: Call2 0x2de

0x28e: Pop(1)
0x28f: Pop(1); Push((bool) Stack[-1] == 0)
0x290: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x291: Stack[-6] = (bool) 0
0x292: Return(); Pop(4)

0x293: Push((int) 2)
0x294: @ irand(Stack[-2], Stack[-1])
0x295: Pop(1)
0x296: Push(Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x298: Push("voice_common")
0x299: Push((int) 1)
0x29a: Pop(1); Push(Stack[-4] + Stack[-1]);
0x29b: Push((int) 3)
0x29c: Pop(2); Push(Stack[-2] % Stack[-1]);
0x29d: @ SetVariable(Stack[-2], Stack[-1])
0x29e: Pop(2)
0x29f: GOTO 0x2a4

0x2a0: Push("voice_common")
0x2a1: Push((int) 0)
0x2a2: @ SetVariable(Stack[-2], Stack[-1])
0x2a3: Pop(2)
0x2a4: GOTO 0x2b7

0x2a5: PushEmpty(bool, object)
0x2a6: Stack[-1] = Stack[-7]
0x2a7: Call2 0x2de

0x2a8: Pop(1)
0x2a9: Pop(1); Push((bool) Stack[-1] == 0)
0x2aa: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2ab: PushEmpty(bool, object)
0x2ac: Stack[-1] = Stack[-7]
0x2ad: Call2 0x2b9

0x2ae: Pop(1)
0x2af: Pop(1); Push((bool) Stack[-1] == 0)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b1: Stack[-6] = (bool) 0
0x2b2: Return(); Pop(4)

0x2b3: Push("voice_common")
0x2b4: Push((int) 1)
0x2b5: @ SetVariable(Stack[-2], Stack[-1])
0x2b6: Pop(2)
0x2b7: Stack[-6] = (bool) 1
0x2b8: Return(); Pop(4)

0x2b9: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2ba: Stack[-5] = "c"
0x2bb: Stack[-4] = (int) 0
0x2bc: Push((int) 1)
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2be: Push((int) 1)
0x2bf: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2c0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2c1: @@ HasProperty(Stack[-1], Stack[-4])
0x2c2: Pop(1)
0x2c3: Pop(0); Push((bool) Stack[-3] == 0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c5: GOTO 0x2c9

0x2c6: Push((int) 1)
0x2c7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2c8: GOTO 0x2bc

0x2c9: Pop(0); Push((bool) Stack[-4] == 0)
0x2ca: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cb: Stack[-12] = (bool) 0
0x2cc: Return(); Pop(10)

0x2cd: Stack[-2] = (int) 0
0x2ce: Push((int) 1)
0x2cf: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d1: @ irand(Stack[-2], Stack[-4])
0x2d2: Pop(0)
0x2d3: Push((int) 1)
0x2d4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2d5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2d6: @@ GetProperty(Stack[-1], Stack[-2])
0x2d7: Pop(1)
0x2d8: PushEmpty(bool, string)
0x2d9: Stack[-1] = Stack[-3]
0x2da: Call2 0x328

0x2db: Stack[-14] = Stack[-2]
0x2dc: Pop(2)
0x2dd: Return(); Pop(10)

0x2de: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2df: Push("d")
0x2e0: PushEmpty(int)
0x2e1: Call2 0x35f

0x2e2: Pop(0)
0x2e3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2e4: Push("m")
0x2e5: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x2e6: Stack[-4] = (int) 0
0x2e7: Push((int) 1)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2e9: Push((int) 1)
0x2ea: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2eb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2ec: @@ HasProperty(Stack[-1], Stack[-4])
0x2ed: Pop(1)
0x2ee: Pop(0); Push((bool) Stack[-3] == 0)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2f0: GOTO 0x2f4

0x2f1: Push((int) 1)
0x2f2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2f3: GOTO 0x2e7

0x2f4: Pop(0); Push((bool) Stack[-4] == 0)
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f6: Stack[-12] = (bool) 0
0x2f7: Return(); Pop(10)

0x2f8: Stack[-2] = (int) 0
0x2f9: Push((int) 1)
0x2fa: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fc: @ irand(Stack[-2], Stack[-4])
0x2fd: Pop(0)
0x2fe: Push((int) 1)
0x2ff: Pop(1); Push(Stack[-3] + Stack[-1]);
0x300: Pop(1); Push(Stack[-6] + Stack[-1]);
0x301: @@ GetProperty(Stack[-1], Stack[-2])
0x302: Pop(1)
0x303: PushEmpty(bool, string)
0x304: Stack[-1] = Stack[-3]
0x305: Call2 0x328

0x306: Stack[-14] = Stack[-2]
0x307: Pop(2)
0x308: Return(); Pop(10)

0x309: PushEmpty(bool, float, float, bool, float, float)
0x30a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x30b: Pop(0)
0x30c: Push(Stack[-3])
0x30d: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x30f: Pop(0)
0x310: Push((bool) 0)
0x311: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x312: Pop(1)
0x313: GOTO 0x318

0x314: Push("Can't find lsh animation : ")
0x315: Pop(1); Push(Stack[-1] + Stack[-8]);
0x316: @ Trace(Stack[-1])
0x317: Pop(1)
0x318: Return(); Pop(6)

0x319: PushEmpty(bool, float, float, bool, float, float)
0x31a: @ lshHasAnimation(Stack[-3], Stack[-8])
0x31b: Pop(0)
0x31c: Push(Stack[-3])
0x31d: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x31e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x31f: Pop(0)
0x320: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x321: Pop(0)
0x322: GOTO 0x327

0x323: Push("Can't find lsh animation : ")
0x324: Pop(1); Push(Stack[-1] + Stack[-9]);
0x325: @ Trace(Stack[-1])
0x326: Pop(1)
0x327: Return(); Pop(6)

0x328: PushEmpty(bool, bool)
0x329: PushEmpty(bool)
0x32a: Call2 0x3d3

0x32b: Pop(0)
0x32c: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32d: @ lshHasSpeech(Stack[-1], Stack[-3])
0x32e: Pop(0)
0x32f: Push(Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x331: @ lshPlaySpeech(Stack[-3])
0x332: Pop(0)
0x333: Stack[-4] = (bool) 1
0x334: Return(); Pop(2)

0x335: Stack[-4] = (bool) 0
0x336: Return(); Pop(2)

0x337: PushEmpty(bool)
0x338: Call2 0x3d3

0x339: Pop(0)
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: @ lshStopSpeech()
0x33c: Pop(0)
0x33d: Return(); Pop(0)

0x33e: PushEmpty(object, object)
0x33f: @ self(Stack[-1])
0x340: Pop(0)
0x341: Stack[-3] = Stack[-1]
0x342: Return(); Pop(2)

0x343: Stack[-1] = 0
0x344: PushEmpty(float, float)
0x345: Pop(0); Push(Stack[-3] | Stack[-3]);
0x346: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x347: Push((float)0.0)
0x348: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x349: IF (Stack[-1] == 0) GOTO 0x34c; Pop(1)

0x34a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x34b: Return(); Pop(2)

0x34c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x34d: Return(); Pop(2)

0x34e: PushEmpty(int, int)
0x34f: @ GetVariable(Stack[-3], Stack[-1])
0x350: Pop(0)
0x351: Stack[-4] = Stack[-1]
0x352: Return(); Pop(2)

0x353: PushEmpty(object, object)
0x354: @ FindActor(Stack[-1], Stack[-4])
0x355: Pop(0)
0x356: Pop(0); Push((bool) Stack[-1] == 0)
0x357: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x358: Stack[-5] = (bool) 0
0x359: Return(); Pop(2)

0x35a: @ Trigger(Stack[-1], Stack[-3])
0x35b: Pop(0)
0x35c: Stack[-5] = (bool) 1
0x35d: Return(); Pop(2)

0x35e: Stack[-1] = 0
0x35f: PushEmpty(float, float)
0x360: @ GetGameTime(Stack[-1])
0x361: Pop(0)
0x362: Push((int) 1)
0x363: PushEmpty(int)
0x364: Push((int) 24)
0x365: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x366: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x367: Return(); Pop(2)

0x368: PushEmpty()
0x369: Push("ood7AndreiPrisoned1")
0x36a: Push((int) 1)
0x36b: @ SetVariable(Stack[-2], Stack[-1])
0x36c: Pop(2)
0x36d: Return(); Pop(0)

0x36e: PushEmpty()
0x36f: PushEmpty()
0x370: Call2 0x384

0x371: Pop(0)
0x372: PushEmpty(bool, string, string)
0x373: Stack[-2] = "quest_d7_04"
0x374: Stack[-1] = "completed"
0x375: Call2 0x353

0x376: Pop(3)
0x377: Return(); Pop(0)

0x378: PushEmpty()
0x379: PushEmpty(int, string)
0x37a: Stack[-1] = "ood7AndreiPrisoned1"
0x37b: Call2 0x34e

0x37c: Pop(1)
0x37d: Push((int) 0)
0x37e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x37f: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x380: Stack[-2] = (bool) 1
0x381: Return(); Pop(0)

0x382: Stack[-2] = (bool) 0
0x383: Return(); Pop(0)

0x384: PushEmpty(object, object)
0x385: Push((int) 640)
0x386: Push((int) 2)
0x387: Push((int) 533226)
0x388: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x389: Pop(3)
0x38a: PushEmpty(bool, object, int)
0x38b: Stack[-2] = Stack[-4]
0x38c: Stack[-1] = (int) 637
0x38d: Call2 0x39e

0x38e: Pop(3)
0x38f: Return(); Pop(2)

0x390: Stack[-1] = 0
0x391: PushEmpty(object, object)
0x392: @ GetDiaryRoot(Stack[-1])
0x393: Pop(0)
0x394: Pop(0); Push((bool) Stack[-1] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x396: Push("Can't retrieve diary root")
0x397: @ Trace(Stack[-1])
0x398: Pop(1)
0x399: Stack[-3] = (bool) 0
0x39a: Return(); Pop(2)

0x39b: Stack[-3] = Stack[-1]
0x39c: Return(); Pop(2)

0x39d: Stack[-1] = 0
0x39e: PushEmpty(object, object, int, object, object, int)
0x39f: PushEmpty(object)
0x3a0: Call2 0x391

0x3a1: Stack[-4] = Stack[-1]
0x3a2: Pop(1)
0x3a3: @@ Find(Stack[-7], Stack[-2])
0x3a4: Pop(0)
0x3a5: Pop(0); Push((bool) Stack[-2] == 0)
0x3a6: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3a7: Push("Can't find diary parent with id: ")
0x3a8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3a9: @ Trace(Stack[-1])
0x3aa: Pop(1)
0x3ab: Stack[-9] = (bool) 0
0x3ac: Return(); Pop(6)

0x3ad: @@ AddChild(Stack[-8])
0x3ae: Pop(0)
0x3af: Push((int) 7)
0x3b0: @ SendWorldWndMessage(Stack[-1])
0x3b1: Pop(1)
0x3b2: @@ GetCategory(Stack[-1])
0x3b3: Pop(0)
0x3b4: @ SetDiarySection(Stack[-1])
0x3b5: Pop(0)
0x3b6: Stack[-9] = (bool) 0
0x3b7: Return(); Pop(6)

0x3b8: Stack[-2] = 0
0x3b9: Stack[-3] = 0
0x3ba: PushEmpty(int, int)
0x3bb: Push("branch")
0x3bc: @ GetVariable(Stack[-1], Stack[-2])
0x3bd: Pop(1)
0x3be: Push((int) 0)
0x3bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c1: Stack[-3] = (int) 1
0x3c2: Return(); Pop(2)

0x3c3: GOTO 0x3c9

0x3c4: Push((int) 1)
0x3c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3c7: Stack[-3] = (int) 2
0x3c8: Return(); Pop(2)

0x3c9: Stack[-3] = (int) 3
0x3ca: Return(); Pop(2)

0x3cb: Stack[-1] = (int) 515529
0x3cc: Return(); Pop(0)

0x3cd: Stack[-1] = (int) 502855
0x3ce: Return(); Pop(0)

0x3cf: Stack[-1] = "ui/NPC_Andrei.png"
0x3d0: Return(); Pop(0)

0x3d1: Stack[-1] = "ui/NPC_Andrei_b.png"
0x3d2: Return(); Pop(0)

0x3d3: Stack[-1] = (bool) 1
0x3d4: Return(); Pop(0)

