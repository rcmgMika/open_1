Library Management

	Algorithm
		: log in
			1. Ask user if he has an already existing account or exit.
				1.1 If yes, proceed to log in.
					1.1.1 If invalid username or password, proceed to 1.1
					1.1.2 If valid, proceed to library module
				1.2 If no, proceed to sign in.
					1.2.1 Enter username
					1.2.2 Enter password
					1.2.3 Proceed to library module
				1.3	If exit, terminate program
		: Library module
			1. Initialize options: Find Book(parent class), Favourites, History, Log Out
				1.1 If Find Book, initialize options: Search by Name, Search by Genre
					1.1.1 If Search by Name, prompt user for the book's name
						1.1.1.1 If invalid name, go back to 1.1.1
						1.1.1.2 If valid name, display book's contents and have options: Next Page, Go Back, Make Favourite
							1.1.1.2.1 If go back, go back to Library Module
							1.1.1.2.2 If make Favourite, display the book contents and add the book to Favourites
					1.1.2 If Search by Genre, prompt user for the book's genre
						1.1.2.1 Display all the books that is of that genre
						1.1.2.2 If user finds, display the book
							1.1.2.2.1 Initialize options: Go Back, Make Favourite
								1.1.2.2.1.1 If Go Back, go back to library module
								1.1.2.2.1.2 If Make Favourite, add the book to Favourites but still display the book
						1.1.2.3 Go back (button, to library module)
				1.2 If Favourites, show the books that are currently favourites, otherwise show none
					1.2.1 If user clicks a book, display its contents and initalize options: Remove From Favourites, Go Back (to library module)
				1.3 If History, show history of read books; initialize options: Go Back
				1.4 If Log Out, go back to log in page

