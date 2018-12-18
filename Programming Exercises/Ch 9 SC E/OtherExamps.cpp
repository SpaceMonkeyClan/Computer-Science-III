/*	ifstream f;
	f.open ("database.txt");
	ofstream o;
	o.open("template.txt",ofstream::trunc);
	o.close();
	o.open("template.txt",ofstream::out |ofstream::app);
	string line;
	//read each line
	while (getline(f, line))
	{
	   istringstream iss(line);
	   string line1;
	   //split line on |
	   while(getline(iss,line1,'|'))
	   		o << line1 << " ";
	   o << endl;
	}
	system("pause");
	*/


=======

/*
	cout << "\n\nPlease enter the data file: ";

	string filename, p, q;

	cin >> filename;

	fstream fs;

	fs.open(filename.c_str());

	fstream fw;
 
	fw.open("database.txt");

	ofstream ff;

	ff.open("t2.txt");

	int b, num, count = 1;

	int i;

// Debug

	while(fs >> p)
	{
		if(p[0] == '|')
		{
			for(i = 49; i <= 57; i++)
			{
				if(p[1] == i)
				break;
			}

	num = i - 48;
	count = 1;

	fw.seekg(0, ios::beg);

	while(!fw.eof())
	{
		fw >> q;
		if(num == count)
		{
			ff << " " << q;
			break;
		}

		if(q[0] == '|')
			count++;
		}
	}

		else
		{
			ff << " " << p;
		}
	}

	fs.close();
	fw.close();
	ff.close();

	ifstream fb;
	fb.open("t2.txt");
	
	ofstream ft;

	ft.open(filename.c_str());

	string f;

	while(fb >> f)
	{
		ft << f << " ";
	}


	ft.close();
	fb.close();

	remove("t2.txt");
*/