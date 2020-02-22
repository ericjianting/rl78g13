
void startTimer(unsigned char unit_no, unsigned char ch_no)
{
	if(unit_no == TIMER_UNIT_0)
	{
		switch(ch_no)
		{
			case TIMER_CH_0:
				TS0 = TS0 | 0x0001;
				break;
			case TIMER_CH_1:
				TS0 = TS0 | 0x0002;
				break;
			case TIMER_CH_2:
				TS0 = TS0 | 0x0004;
				break;
			case TIMER_CH_3:
				TS0 = TS0 | 0x0008;
				break;
			case TIMER_CH_4:
				TS0 = TS0 | 0x0010;
				break;
			case TIMER_CH_5:
				TS0 = TS0 | 0x0020;
				break;
			case TIMER_CH_6:
				TS0 = TS0 | 0x0040;
				break;
			case TIMER_CH_7:
				TS0 = TS0 | 0x0080;
				break;
			default:
				break;
		}
	}
	/*
	else if(unit_no == TIMER_UNIT_1)
	{
		switch(ch_no)
		{
			case TIMER_CH_0:
				TS1 = TS0 | 0x0001;
				break;
			case TIMER_CH_1:
				TS1 = TS0 | 0x0002;
				break;
			case TIMER_CH_2:
				TS1 = TS0 | 0x0004;
				break;
			case TIMER_CH_3:
				TS1 = TS0 | 0x0008;
				break;
			case TIMER_CH_4:
				TS1 = TS0 | 0x0010;
				break;
			case TIMER_CH_5:
				TS1 = TS0 | 0x0020;
				break;
			case TIMER_CH_6:
				TS1 = TS0 | 0x0040;
				break;
			case TIMER_CH_7:
				TS1 = TS0 | 0x0080;
				break;
			default:
				break;
		}
	}
	*/
}

void stopTimer(unsigned char unit_no, unsigned char ch_no)
{
	if(unit_no == TIMER_UNIT_0)
	{
		switch(ch_no)
		{
			case TIMER_CH_0:
				TS0 = TS0 & 0x00FE;
				break;
			case TIMER_CH_1:
				TS0 = TS0 & 0x00FD;
				break;
			case TIMER_CH_2:
				TS0 = TS0 & 0x00FB;
				break;
			case TIMER_CH_3:
				TS0 = TS0 & 0x00F7;
				break;
			case TIMER_CH_4:
				TS0 = TS0 & 0x00EF;
				break;
			case TIMER_CH_5:
				TS0 = TS0 & 0x00DF;
				break;
			case TIMER_CH_6:
				TS0 = TS0 & 0x00BF;
				break;
			case TIMER_CH_7:
				TS0 = TS0 & 0x007F;
				break;
			default:
				break;
		}
	}
	/*
	else if(unit_no == TIMER_UNIT_1)
	{
		switch(ch_no)
		{
			case TIMER_CH_0:
				TS1 = TS0 & 0x00FE;
				break;
			case TIMER_CH_1:
				TS1 = TS0 & 0x00FD;
				break;
			case TIMER_CH_2:
				TS1 = TS0 & 0x00FB;
				break;
			case TIMER_CH_3:
				TS1 = TS0 & 0x00F7;
				break;
			case TIMER_CH_4:
				TS1 = TS0 & 0x00EF;
				break;
			case TIMER_CH_5:
				TS1 = TS0 & 0x00DF;
				break;
			case TIMER_CH_6:
				TS1 = TS0 & 0x00BF;
				break;
			case TIMER_CH_7:
				TS1 = TS0 & 0x007F;
				break;
			default:
				break;
		}
	}
	*/
}