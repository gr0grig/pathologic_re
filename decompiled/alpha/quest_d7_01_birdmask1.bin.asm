GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	d7q01
	ood7UBirdmask1
	ureport is given
	d7q01_ureport
	quest_d7_01
	kill_player
	sobor_teleport
	GetItemCount
	bird_mask
	bird_balahon
	GetItem
	IsItemSelected
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Adding diary entry
	ui/NPC_Black.png

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
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetInvItemByName (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x27b
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe1 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x27f Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x287

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x3e8

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x3ea

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x3c7

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x2bf

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0x45: PushEmpty(bool)
0x46: Stack[-1] = (bool) 0
0x47: PushEmpty(bool, object)
0x48: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x49: Call 0x34b

0x4a: Pop(1)
0x4b: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x4c: PushEmpty(bool, object)
0x4d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e: Call 0x361

0x4f: Pop(1)
0x50: IF (Stack[-1] == 0) GOTO 0x52; Pop(1)

0x51: Stack[-1] = (bool) 1
0x52: IF (Stack[-1] == 0) GOTO 0x62; Pop(1)

0x53: PushEmpty(string)
0x54: Stack[-1] = "Neutral"
0x55: Call 0xd1

0x56: Pop(1)
0x57: Push((int) 12188)
0x58: @@ SetMessage(Stack[-1])
0x59: Pop(1)
0x5a: @@ ClearReplies()
0x5b: Pop(0)
0x5c: Push((int) 12189)
0x5d: Push((int) 14396)
0x5e: Push((int) 13344)
0x5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60: Pop(3)
0x61: GOTO 0xb3

0x62: PushEmpty(bool)
0x63: Stack[-1] = (bool) 0
0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call 0x357

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call 0x33f

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: Stack[-1] = (bool) 1
0x6f: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call 0xd1

0x73: Pop(1)
0x74: Push((int) 13197)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: Push((int) 13198)
0x7a: Push((int) 14433)
0x7b: Push((int) 14421)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 13199)
0x7f: Push((int) 14428)
0x80: Push((int) 14422)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: Push((int) 13200)
0x84: Push((int) 14424)
0x85: Push((int) 14423)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: Push((int) 13330)
0x89: Push((int) -1)
0x8a: Push((int) 14562)
0x8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(3)
0x8d: Push((int) 13331)
0x8e: Push((int) -1)
0x8f: Push((int) 14563)
0x90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91: Pop(3)
0x92: GOTO 0xb3

0x93: PushEmpty(bool, object)
0x94: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95: Call 0x33f

0x96: Pop(1)
0x97: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0x98: PushEmpty(string)
0x99: Stack[-1] = "Neutral"
0x9a: Call 0xd1

0x9b: Pop(1)
0x9c: Push((int) 13175)
0x9d: @@ SetMessage(Stack[-1])
0x9e: Pop(1)
0x9f: @@ ClearReplies()
0xa0: Pop(0)
0xa1: Push((int) 13177)
0xa2: Push((int) 14398)
0xa3: Push((int) 14397)
0xa4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5: Pop(3)
0xa6: Push((int) 13195)
0xa7: Push((int) 14411)
0xa8: Push((int) 14417)
0xa9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa: Pop(3)
0xab: Push((int) 13193)
0xac: Push((int) -1)
0xad: Push((int) 14415)
0xae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf: Pop(3)
0xb0: GOTO 0xb3

0xb1: Return(); Pop(0)

0xb2: GOTO 0x43

0xb3: PushEmpty(bool)
0xb4: Call 0x3ec

0xb5: Pop(0)
0xb6: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xb7: @ lshWaitForAnimEnd()
0xb8: Pop(0)
0xb9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xba: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xbb: GOTO 0xc1

0xbc: PushEmpty(string)
0xbd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbe: Call 0x2c3

0xbf: Pop(1)
0xc0: GOTO 0xb7

0xc1: GOTO 0xd0

0xc2: Push("all")
0xc3: Push("idle")
0xc4: @ PlayAnimation(Stack[-2], Stack[-1])
0xc5: Pop(2)
0xc6: @ WaitForAnimEnd()
0xc7: Pop(0)
0xc8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc9: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xca: GOTO 0xd0

0xcb: Push("all")
0xcc: Push("idle")
0xcd: @ PlayAnimation(Stack[-2], Stack[-1])
0xce: Pop(2)
0xcf: GOTO 0xc6

0xd0: Return(); Pop(0)

0xd1: PushEmpty()
0xd2: PushEmpty(bool)
0xd3: Call 0x3ec

0xd4: Pop(0)
0xd5: Pop(1); Push((bool) Stack[-1] == 0)
0xd6: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xd7: Return(); Pop(0)

0xd8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd9: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xda: Return(); Pop(0)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = Stack[-2]
0xdd: Call 0x2c3

0xde: Pop(1)
0xdf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe0: Return(); Pop(0)

0xe1: PushEmpty()
0xe2: Push((int) 1)
0xe3: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0xe4: PushEmpty()
0xe5: Call 0x2d5

0xe6: Pop(0)
0xe7: Push((int) 14419)
0xe8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xf9; Pop(1)

0xea: PushEmpty(object, object)
0xeb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xed: Call 0x320

0xee: Pop(2)
0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call 0x326

0xf3: Pop(2)
0xf4: PushEmpty(object, object)
0xf5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf7: Call 0x311

0xf8: Pop(2)
0xf9: Push((int) 14487)
0xfa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfb: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfc: PushEmpty(object, object)
0xfd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xff: Call 0x331

0x100: Pop(2)
0x101: Push((int) 14432)
0x102: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x104: PushEmpty(object, object)
0x105: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x106: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x107: Call 0x331

0x108: Pop(2)
0x109: Push((int) 14562)
0x10a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: PushEmpty(object, object)
0x10d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10f: Call 0x331

0x110: Pop(2)
0x111: Push((int) 14563)
0x112: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x114: PushEmpty(object, object)
0x115: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x116: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x117: Call 0x338

0x118: Pop(2)
0x119: PushEmpty(object, object)
0x11a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11c: Call 0x317

0x11d: Pop(2)
0x11e: Push((int) 13343)
0x11f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x121: PushEmpty(bool)
0x122: Stack[-1] = (bool) 0
0x123: PushEmpty(bool, object)
0x124: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x125: Call 0x34b

0x126: Pop(1)
0x127: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x128: PushEmpty(bool, object)
0x129: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12a: Call 0x361

0x12b: Pop(1)
0x12c: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x12d: Stack[-1] = (bool) 1
0x12e: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral"
0x131: Call 0xd1

0x132: Pop(1)
0x133: Push((int) 12188)
0x134: @@ SetMessage(Stack[-1])
0x135: Pop(1)
0x136: @@ ClearReplies()
0x137: Pop(0)
0x138: Push((int) 12189)
0x139: Push((int) 14396)
0x13a: Push((int) 13344)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Return(); Pop(0)

0x13e: PushEmpty(bool)
0x13f: Stack[-1] = (bool) 0
0x140: PushEmpty(bool, object)
0x141: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x142: Call 0x357

0x143: Pop(1)
0x144: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x145: PushEmpty(bool, object)
0x146: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x147: Call 0x33f

0x148: Pop(1)
0x149: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x14a: Stack[-1] = (bool) 1
0x14b: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x14c: PushEmpty(string)
0x14d: Stack[-1] = "Neutral"
0x14e: Call 0xd1

0x14f: Pop(1)
0x150: Push((int) 13197)
0x151: @@ SetMessage(Stack[-1])
0x152: Pop(1)
0x153: @@ ClearReplies()
0x154: Pop(0)
0x155: Push((int) 13198)
0x156: Push((int) 14433)
0x157: Push((int) 14421)
0x158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(3)
0x15a: Push((int) 13199)
0x15b: Push((int) 14428)
0x15c: Push((int) 14422)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Push((int) 13200)
0x160: Push((int) 14424)
0x161: Push((int) 14423)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Push((int) 13330)
0x165: Push((int) -1)
0x166: Push((int) 14562)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Push((int) 13331)
0x16a: Push((int) -1)
0x16b: Push((int) 14563)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: PushEmpty(bool, object)
0x170: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x171: Call 0x33f

0x172: Pop(1)
0x173: IF (Stack[-1] == 0) GOTO 0x18d; Pop(1)

0x174: PushEmpty(string)
0x175: Stack[-1] = "Neutral"
0x176: Call 0xd1

0x177: Pop(1)
0x178: Push((int) 13175)
0x179: @@ SetMessage(Stack[-1])
0x17a: Pop(1)
0x17b: @@ ClearReplies()
0x17c: Pop(0)
0x17d: Push((int) 13177)
0x17e: Push((int) 14398)
0x17f: Push((int) 14397)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Push((int) 13195)
0x183: Push((int) 14411)
0x184: Push((int) 14417)
0x185: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x186: Pop(3)
0x187: Push((int) 13193)
0x188: Push((int) -1)
0x189: Push((int) 14415)
0x18a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18b: Pop(3)
0x18c: Return(); Pop(0)

0x18d: Push((int) 14398)
0x18e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18f: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral"
0x192: Call 0xd1

0x193: Pop(1)
0x194: Push((int) 13178)
0x195: @@ SetMessage(Stack[-1])
0x196: Pop(1)
0x197: @@ ClearReplies()
0x198: Pop(0)
0x199: Push((int) 13179)
0x19a: Push((int) 14402)
0x19b: Push((int) 14399)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: Push((int) 13180)
0x19f: Push((int) 14403)
0x1a0: Push((int) 14400)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Push((int) 13181)
0x1a4: Push((int) 14404)
0x1a5: Push((int) 14401)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: Return(); Pop(0)

0x1a9: Push((int) 14404)
0x1aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ab: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "Neutral"
0x1ae: Call 0xd1

0x1af: Pop(1)
0x1b0: Push((int) 13184)
0x1b1: @@ SetMessage(Stack[-1])
0x1b2: Pop(1)
0x1b3: @@ ClearReplies()
0x1b4: Pop(0)
0x1b5: Push((int) 13189)
0x1b6: Push((int) -1)
0x1b7: Push((int) 14409)
0x1b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(3)
0x1ba: Push((int) 13190)
0x1bb: Push((int) 14411)
0x1bc: Push((int) 14410)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: Push((int) 14403)
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = "Neutral"
0x1c5: Call 0xd1

0x1c6: Pop(1)
0x1c7: Push((int) 13183)
0x1c8: @@ SetMessage(Stack[-1])
0x1c9: Pop(1)
0x1ca: @@ ClearReplies()
0x1cb: Pop(0)
0x1cc: Push((int) 13187)
0x1cd: Push((int) -1)
0x1ce: Push((int) 14407)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Push((int) 13188)
0x1d2: Push((int) 14411)
0x1d3: Push((int) 14408)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: Return(); Pop(0)

0x1d7: Push((int) 14402)
0x1d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1da: PushEmpty(string)
0x1db: Stack[-1] = "Neutral"
0x1dc: Call 0xd1

0x1dd: Pop(1)
0x1de: Push((int) 13182)
0x1df: @@ SetMessage(Stack[-1])
0x1e0: Pop(1)
0x1e1: @@ ClearReplies()
0x1e2: Pop(0)
0x1e3: Push((int) 13185)
0x1e4: Push((int) 14411)
0x1e5: Push((int) 14405)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Push((int) 13186)
0x1e9: Push((int) -1)
0x1ea: Push((int) 14406)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Return(); Pop(0)

0x1ee: Push((int) 14411)
0x1ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f0: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1f1: PushEmpty(string)
0x1f2: Stack[-1] = "Neutral"
0x1f3: Call 0xd1

0x1f4: Pop(1)
0x1f5: Push((int) 13191)
0x1f6: @@ SetMessage(Stack[-1])
0x1f7: Pop(1)
0x1f8: @@ ClearReplies()
0x1f9: Pop(0)
0x1fa: Push((int) 13192)
0x1fb: Push((int) -1)
0x1fc: Push((int) 14414)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: Return(); Pop(0)

0x200: Push((int) 14424)
0x201: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x21c; Pop(1)

0x203: PushEmpty(string)
0x204: Stack[-1] = "Neutral"
0x205: Call 0xd1

0x206: Pop(1)
0x207: Push((int) 13201)
0x208: @@ SetMessage(Stack[-1])
0x209: Pop(1)
0x20a: @@ ClearReplies()
0x20b: Pop(0)
0x20c: Push((int) 13202)
0x20d: Push((int) 14429)
0x20e: Push((int) 14425)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: Push((int) 13203)
0x212: Push((int) 14433)
0x213: Push((int) 14426)
0x214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x215: Pop(3)
0x216: Push((int) 13204)
0x217: Push((int) 14428)
0x218: Push((int) 14427)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Return(); Pop(0)

0x21c: Push((int) 14429)
0x21d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21e: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x21f: PushEmpty(string)
0x220: Stack[-1] = "Neutral"
0x221: Call 0xd1

0x222: Pop(1)
0x223: Push((int) 13206)
0x224: @@ SetMessage(Stack[-1])
0x225: Pop(1)
0x226: @@ ClearReplies()
0x227: Pop(0)
0x228: Push((int) 13207)
0x229: Push((int) -1)
0x22a: Push((int) 14430)
0x22b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(3)
0x22d: Return(); Pop(0)

0x22e: Push((int) 14428)
0x22f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x230: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x231: PushEmpty(string)
0x232: Stack[-1] = "Neutral"
0x233: Call 0xd1

0x234: Pop(1)
0x235: Push((int) 13205)
0x236: @@ SetMessage(Stack[-1])
0x237: Pop(1)
0x238: @@ ClearReplies()
0x239: Pop(0)
0x23a: Push((int) 13208)
0x23b: Push((int) -1)
0x23c: Push((int) 14431)
0x23d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23e: Pop(3)
0x23f: Push((int) 13209)
0x240: Push((int) -1)
0x241: Push((int) 14432)
0x242: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x243: Pop(3)
0x244: Return(); Pop(0)

0x245: Push((int) 14433)
0x246: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x248: PushEmpty(string)
0x249: Stack[-1] = "Neutral"
0x24a: Call 0xd1

0x24b: Pop(1)
0x24c: Push((int) 13210)
0x24d: @@ SetMessage(Stack[-1])
0x24e: Pop(1)
0x24f: @@ ClearReplies()
0x250: Pop(0)
0x251: Push((int) 13211)
0x252: Push((int) -1)
0x253: Push((int) 14434)
0x254: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x255: Pop(3)
0x256: Push((int) 13260)
0x257: Push((int) -1)
0x258: Push((int) 14487)
0x259: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25a: Pop(3)
0x25b: Return(); Pop(0)

0x25c: Push((int) 14396)
0x25d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x25f: PushEmpty(string)
0x260: Stack[-1] = "Neutral"
0x261: Call 0xd1

0x262: Pop(1)
0x263: Push((int) 13176)
0x264: @@ SetMessage(Stack[-1])
0x265: Pop(1)
0x266: @@ ClearReplies()
0x267: Pop(0)
0x268: Push((int) 13196)
0x269: Push((int) -1)
0x26a: Push((int) 14419)
0x26b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26c: Pop(3)
0x26d: Return(); Pop(0)

0x26e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x26f: PushEmpty(bool)
0x270: Call 0x3ec

0x271: Pop(0)
0x272: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x273: @ lshStopAnimation()
0x274: Pop(0)
0x275: GOTO 0x278

0x276: @ StopAnimation()
0x277: Pop(0)
0x278: Return(); Pop(0)

0x279: GOTO 0xe2

0x27a: Return(); Pop(0)

0x27b: @ Hold()
0x27c: Pop(0)
0x27d: GOTO 0x27b

0x27e: Return(); Pop(0)

0x27f: PushEmpty()
0x280: PushEmpty(int, object)
0x281: Stack[-1] = Stack[-3]
0x282: Push(-2, 1); TaskCall(0)
0x283: Call 0x0

0x284: Pop(-2, 1); TaskReturn
0x285: Pop(2)
0x286: Return(); Pop(0)

0x287: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x288: @@ GetPosition(Stack[-7])
0x289: Pop(0)
0x28a: @@ GetEyesHeight(Stack[-8])
0x28b: Pop(0)
0x28c: Push(CvectorIndex(Stack[-7], 1))
0x28d: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x28e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x28f: @ GetPosition(Stack[-6])
0x290: Pop(0)
0x291: @ GetEyesHeight(Stack[-8])
0x292: Pop(0)
0x293: Push(CvectorIndex(Stack[-6], 1))
0x294: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x295: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x296: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x297: Push(CvectorIndex(Stack[-5], 1))
0x298: Stack[-1] = (int) 0
0x299: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x29a: Pop(0); Push(Stack[-5] | Stack[-5]);
0x29b: Pop(1); Push(Sqrt(Stack[-1]))
0x29c: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x29d: Stack[-4] = -Stack[-5]; Pop(0);
0x29e: Push((int) 70)
0x29f: Pop(1); Push(Stack[-6] * Stack[-1]);
0x2a0: PushEmpty(cvector, cvector)
0x2a1: Push(CVector(0.0, 1.0, 0.0))
0x2a2: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x2a3: Call 0x2dc

0x2a4: Pop(1)
0x2a5: Push((int) 25)
0x2a6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2a7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a8: Push(CVector(0.0, 10.0, 0.0))
0x2a9: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x2aa: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x2ab: @ IsOverrideActive(Stack[-1])
0x2ac: Pop(0)
0x2ad: Push(Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2af: Stack[-18] = (bool) 0
0x2b0: Return(); Pop(16)

0x2b1: @ StopWorld()
0x2b2: Pop(0)
0x2b3: @ CameraTransit(Stack[-2], Stack[-4])
0x2b4: Pop(0)
0x2b5: Push(CvectorIndex(Stack[-3], 0))
0x2b6: Push(CvectorIndex(Stack[-4], 2))
0x2b7: @ Rotate(Stack[-2], Stack[-1])
0x2b8: Pop(2)
0x2b9: @ CameraWaitForPlayFinish()
0x2ba: Pop(0)
0x2bb: @ ResumeWorld()
0x2bc: Pop(0)
0x2bd: Stack[-18] = (bool) 1
0x2be: Return(); Pop(16)

0x2bf: PushEmpty()
0x2c0: @ CameraSwitchToNormal()
0x2c1: Pop(0)
0x2c2: Return(); Pop(0)

0x2c3: PushEmpty(float, float, float, float)
0x2c4: Push("playing ")
0x2c5: Pop(1); Push(Stack[-1] + Stack[-6]);
0x2c6: @ Trace(Stack[-1])
0x2c7: Pop(1)
0x2c8: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x2c9: Pop(0)
0x2ca: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x2cb: Pop(0)
0x2cc: Push("start: ")
0x2cd: Pop(1); Push(Stack[-1] + Stack[-3]);
0x2ce: @ Trace(Stack[-1])
0x2cf: Pop(1)
0x2d0: Push("end: ")
0x2d1: Pop(1); Push(Stack[-1] + Stack[-2]);
0x2d2: @ Trace(Stack[-1])
0x2d3: Pop(1)
0x2d4: Return(); Pop(4)

0x2d5: PushEmpty(bool)
0x2d6: Call 0x3ec

0x2d7: Pop(0)
0x2d8: IF (Stack[-1] == 0) GOTO 0x2db; Pop(1)

0x2d9: @ lshStopSpeech()
0x2da: Pop(0)
0x2db: Return(); Pop(0)

0x2dc: PushEmpty(float, float)
0x2dd: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2de: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2df: Push((float)0.0)
0x2e0: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e2: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2e3: Return(); Pop(2)

0x2e4: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2e5: Return(); Pop(2)

0x2e6: PushEmpty(int, int)
0x2e7: @ GetVariable(Stack[-3], Stack[-1])
0x2e8: Pop(0)
0x2e9: Stack[-4] = Stack[-1]
0x2ea: Return(); Pop(2)

0x2eb: PushEmpty(int, int, bool, int, int, bool)
0x2ec: @@ GetItemID(Stack[-3])
0x2ed: Pop(0)
0x2ee: Push("Category")
0x2ef: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x2f0: Pop(1)
0x2f1: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x2f2: Pop(0)
0x2f3: Pop(0); Push((bool) Stack[-1] == 0)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f5: @@ DropItems(Stack[-8], Stack[-7])
0x2f6: Pop(0)
0x2f7: Return(); Pop(6)

0x2f8: PushEmpty(object, object)
0x2f9: @ CreateInvItem(Stack[-1])
0x2fa: Pop(0)
0x2fb: @@ SetItemName(Stack[-4])
0x2fc: Pop(0)
0x2fd: PushEmpty(object, object, int)
0x2fe: Stack[-3] = Stack[-8]
0x2ff: Stack[-2] = Stack[-4]
0x300: Stack[-1] = Stack[-6]
0x301: Call 0x2eb

0x302: Pop(3)
0x303: Return(); Pop(2)

0x304: Stack[-1] = 0
0x305: PushEmpty(object, object)
0x306: @ FindActor(Stack[-1], Stack[-4])
0x307: Pop(0)
0x308: Pop(0); Push((bool) Stack[-1] == 0)
0x309: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30a: Stack[-5] = (bool) 0
0x30b: Return(); Pop(2)

0x30c: @ Trigger(Stack[-1], Stack[-3])
0x30d: Pop(0)
0x30e: Stack[-5] = (bool) 1
0x30f: Return(); Pop(2)

0x310: Stack[-1] = 0
0x311: PushEmpty()
0x312: Push("playsound")
0x313: Push("giveitem")
0x314: @ TriggerWorld(Stack[-2], Stack[-1])
0x315: Pop(2)
0x316: Return(); Pop(0)

0x317: PushEmpty()
0x318: Push("d7q01")
0x319: Push((int) 3)
0x31a: @ SetVariable(Stack[-2], Stack[-1])
0x31b: Pop(2)
0x31c: PushEmpty()
0x31d: Call 0x3d8

0x31e: Pop(0)
0x31f: Return(); Pop(0)

0x320: PushEmpty()
0x321: Push("ood7UBirdmask1")
0x322: Push((int) 1)
0x323: @ SetVariable(Stack[-2], Stack[-1])
0x324: Pop(2)
0x325: Return(); Pop(0)

0x326: PushEmpty()
0x327: Push("ureport is given")
0x328: @ Trace(Stack[-1])
0x329: Pop(1)
0x32a: PushEmpty(object, string, int)
0x32b: Stack[-3] = Stack[-5]
0x32c: Stack[-2] = "d7q01_ureport"
0x32d: Stack[-1] = (int) 1
0x32e: Call 0x2f8

0x32f: Pop(3)
0x330: Return(); Pop(0)

0x331: PushEmpty()
0x332: PushEmpty(bool, string, string)
0x333: Stack[-2] = "quest_d7_01"
0x334: Stack[-1] = "kill_player"
0x335: Call 0x305

0x336: Pop(3)
0x337: Return(); Pop(0)

0x338: PushEmpty()
0x339: PushEmpty(bool, string, string)
0x33a: Stack[-2] = "quest_d7_01"
0x33b: Stack[-1] = "sobor_teleport"
0x33c: Call 0x305

0x33d: Pop(3)
0x33e: Return(); Pop(0)

0x33f: PushEmpty()
0x340: PushEmpty(int, string)
0x341: Stack[-1] = "d7q01"
0x342: Call 0x2e6

0x343: Pop(1)
0x344: Push((int) 2)
0x345: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x347: Stack[-2] = (bool) 1
0x348: Return(); Pop(0)

0x349: Stack[-2] = (bool) 0
0x34a: Return(); Pop(0)

0x34b: PushEmpty()
0x34c: PushEmpty(int, string)
0x34d: Stack[-1] = "d7q01"
0x34e: Call 0x2e6

0x34f: Pop(1)
0x350: Push((int) 1)
0x351: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x353: Stack[-2] = (bool) 1
0x354: Return(); Pop(0)

0x355: Stack[-2] = (bool) 0
0x356: Return(); Pop(0)

0x357: PushEmpty()
0x358: PushEmpty(bool, object)
0x359: Stack[-1] = Stack[-3]
0x35a: Call 0x36d

0x35b: Pop(1)
0x35c: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35d: Stack[-2] = (bool) 1
0x35e: Return(); Pop(0)

0x35f: Stack[-2] = (bool) 0
0x360: Return(); Pop(0)

0x361: PushEmpty()
0x362: PushEmpty(int, string)
0x363: Stack[-1] = "ood7UBirdmask1"
0x364: Call 0x2e6

0x365: Pop(1)
0x366: Push((int) 0)
0x367: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x368: IF (Stack[-1] == 0) GOTO 0x36b; Pop(1)

0x369: Stack[-2] = (bool) 1
0x36a: Return(); Pop(0)

0x36b: Stack[-2] = (bool) 0
0x36c: Return(); Pop(0)

0x36d: PushEmpty(int, int, int, bool, bool, int, object, int, bool, bool, int, int, int, bool, bool, int, object, int, bool, bool)
0x36e: Push((int) 1)
0x36f: @@ GetItemCount(Stack[-11], Stack[-1])
0x370: Pop(1)
0x371: Push("bird_mask")
0x372: @ GetInvItemByName(Stack[-10], Stack[-1])
0x373: Pop(1)
0x374: Push("bird_balahon")
0x375: @ GetInvItemByName(Stack[-9], Stack[-1])
0x376: Pop(1)
0x377: Stack[-7] = (bool) 0
0x378: Stack[-6] = (bool) 0
0x379: Stack[-5] = (int) 0
0x37a: Pop(0); Push((bool) Stack[-5] < Stack[-10])
0x37b: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x37c: Push((int) 1)
0x37d: @@ GetItem(Stack[-5], Stack[-6], Stack[-1])
0x37e: Pop(1)
0x37f: @@ GetItemID(Stack[-3])
0x380: Pop(0)
0x381: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0x382: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x383: Push((int) 1)
0x384: @@ IsItemSelected(Stack[-3], Stack[-6], Stack[-1])
0x385: Pop(1)
0x386: Push(Stack[-2])
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: Stack[-7] = (bool) 1
0x389: GOTO 0x392

0x38a: Pop(0); Push((bool) Stack[-3] == Stack[-8])
0x38b: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x38c: Push((int) 1)
0x38d: @@ IsItemSelected(Stack[-2], Stack[-6], Stack[-1])
0x38e: Pop(1)
0x38f: Push(Stack[-1])
0x390: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x391: Stack[-6] = (bool) 1
0x392: Stack[-4] = 0
0x393: Push((int) 1)
0x394: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x395: GOTO 0x37a

0x396: Stack[-22] = (bool) 0
0x397: Push(Stack[-7])
0x398: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x399: Push(Stack[-6])
0x39a: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39b: Stack[-22] = (bool) 1
0x39c: Return(); Pop(20)

0x39d: PushEmpty(object, object)
0x39e: @ GetDiaryRoot(Stack[-1])
0x39f: Pop(0)
0x3a0: Pop(0); Push((bool) Stack[-1] == 0)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a7; Pop(1)

0x3a2: Push("Can't retrieve diary root")
0x3a3: @ Trace(Stack[-1])
0x3a4: Pop(1)
0x3a5: Stack[-3] = (bool) 0
0x3a6: Return(); Pop(2)

0x3a7: Stack[-3] = Stack[-1]
0x3a8: Return(); Pop(2)

0x3a9: Stack[-1] = 0
0x3aa: PushEmpty(object, object, int, object, object, int)
0x3ab: PushEmpty(object)
0x3ac: Call 0x39d

0x3ad: Stack[-4] = Stack[-1]
0x3ae: Pop(1)
0x3af: @@ Find(Stack[-7], Stack[-2])
0x3b0: Pop(0)
0x3b1: Pop(0); Push((bool) Stack[-2] == 0)
0x3b2: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b3: Push("Can't find diary parent with id: ")
0x3b4: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3b5: @ Trace(Stack[-1])
0x3b6: Pop(1)
0x3b7: Stack[-9] = (bool) 0
0x3b8: Return(); Pop(6)

0x3b9: @@ AddChild(Stack[-8])
0x3ba: Pop(0)
0x3bb: Push("player_diary")
0x3bc: Push((int) 1)
0x3bd: @ SetVariable(Stack[-2], Stack[-1])
0x3be: Pop(2)
0x3bf: @@ GetCategory(Stack[-1])
0x3c0: Pop(0)
0x3c1: @ SetDiarySection(Stack[-1])
0x3c2: Pop(0)
0x3c3: Stack[-9] = (bool) 0
0x3c4: Return(); Pop(6)

0x3c5: Stack[-2] = 0
0x3c6: Stack[-3] = 0
0x3c7: PushEmpty(int, int)
0x3c8: Push("player")
0x3c9: @ GetVariable(Stack[-1], Stack[-2])
0x3ca: Pop(1)
0x3cb: Push((int) 0)
0x3cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3ce: Stack[-3] = (int) 200001
0x3cf: Return(); Pop(2)

0x3d0: GOTO 0x3d6

0x3d1: Push((int) 1)
0x3d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d4: Stack[-3] = (int) 200002
0x3d5: Return(); Pop(2)

0x3d6: Stack[-3] = (int) 200003
0x3d7: Return(); Pop(2)

0x3d8: PushEmpty(object, object)
0x3d9: Push("Adding diary entry")
0x3da: @ Trace(Stack[-1])
0x3db: Pop(1)
0x3dc: Push((int) 169)
0x3dd: Push((int) 1)
0x3de: Push((int) 15418)
0x3df: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3e0: Pop(3)
0x3e1: PushEmpty(bool, object, int)
0x3e2: Stack[-2] = Stack[-4]
0x3e3: Stack[-1] = (int) 165
0x3e4: Call 0x3aa

0x3e5: Pop(3)
0x3e6: Return(); Pop(2)

0x3e7: Stack[-1] = 0
0x3e8: Stack[-1] = (int) 4029
0x3e9: Return(); Pop(0)

0x3ea: Stack[-1] = "ui/NPC_Black.png"
0x3eb: Return(); Pop(0)

0x3ec: Stack[-1] = (bool) 0
0x3ed: Return(); Pop(0)

