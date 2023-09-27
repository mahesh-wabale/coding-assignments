pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                // Checkout your source code from version control
                // For example: git clone ...
            }
        }

        stage('Build') {
            steps {
                // Build your project
                // For example: mvn clean install
            }
        }

        stage('Test') {
            steps {
                // Run your project's tests
                // For example: mvn test
            }
        }

        stage('Deploy') {
            steps {
                // Deploy your project
                // For example: scp target/myapp.war user@server:/path/to/deploy
            }
        }
    }
}
