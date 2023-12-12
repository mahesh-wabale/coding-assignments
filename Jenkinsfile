pipeline {
  agent any
  stages {
    stage('Checkout') {
      steps {
        echo 'pwd'
      }
    }

    stage('Build') {
      steps {
        echo 'pwd'
      }
    }

    stage('Test') {
      steps {
        echo 'pwd'
      }
    }

    stage('Deploy in Production') {
      steps {
        echo 'pwd'
        timeout(time: 15, unit: 'MINUTES') {
          input(message: 'Do you want to approve the deployment?', ok: 'Yes')
        }

        echo 'Initiating deployment'
        sh '''
                curl -X POST -H \'Content-type: application/json\' --data \'{"text":"My First Demo Notification"}\' https://hooks.slack.com/services/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
                '''
      }
    }

  }
}
